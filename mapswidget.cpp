#include "mapswidget.h"
#include <QGraphicsSceneMouseEvent>
#include "mainwindow.h"



MapWindow::MapWindow(QPointer<QGeoPositionInfoSource> locationDataSource2, qint16 radiusIn):
    mapsWidget(new MapsWidget),
    markerManager(new MarkerManager)

{
    //mapsWidget = new MapsWidget;
    setCentralWidget(mapsWidget);
    locationDataSource3 = locationDataSource2;
    //use locationDataSource from mainwindow
    connect(locationDataSource3, SIGNAL(positionUpdated(QGeoPositionInfo)),
            this, SLOT(updateMyPosition(QGeoPositionInfo)));
    //fast updates while map is open
    locationDataSource3->setUpdateInterval(5000);//5 sec
//    connect(positionSource, SIGNAL(positionUpdated(QGeoPositionInfo)),
//            this, SLOT(updateMyPosition(QGeoPositionInfo)));
//    if (markerManager)
//        delete markerManager;
    //markerManager = new MarkerManager();
    mapsWidget->setMarkerManager(markerManager);
    connect(mapsWidget, SIGNAL(mapPanned()),
                 this, SLOT(disableTracking()));
    radius = radiusIn;
    this->setAttribute(Qt::WA_DeleteOnClose);//can't type into other window unless we delete this
}

MapWindow::~MapWindow()

{
    delete mapsWidget;
    //set updates back to 30s
    locationDataSource3->setUpdateInterval(30000);//30 sec

}
void MapWindow::updateMyPosition(QGeoPositionInfo info)
{
    if (mapsWidget) {
        mapsWidget->setMyLocation(info.coordinate());
        if (tracking)
        mapsWidget->animatedPanTo(info.coordinate());
    }
}

void MapWindow::disableTracking()
{
    tracking = false;
    //update circle
    this->mapsWidget->drawSensitivityCircle(radius);
}

GeoMap::GeoMap(QGeoMappingManager *manager,  MapsWidget *mapsWidget) :
    QGraphicsGeoMap(manager), mapsWidget(mapsWidget)
{
    this->setFocus();
}

GeoMap::~GeoMap()
{
}

double GeoMap::centerLatitude() const
{
    return center().latitude();
}

double GeoMap::centerLongitude() const
{
    return center().longitude();
}

void GeoMap::setCenterLatitude(double lat)
{
    QGeoCoordinate c = center();
    c.setLatitude(lat);
    setCenter(c);
}

void GeoMap::setCenterLongitude(double lon)
{
    QGeoCoordinate c = center();
    c.setLongitude(lon);
    setCenter(c);
}

void GeoMap::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    panActive = true;
    event->accept();
}

void GeoMap::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    panActive = false;
    event->accept();
}

void GeoMap::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if (panActive) {       
        QPointF delta = event->lastPos() - event->pos();
        pan(delta.x(), delta.y());
        Q_EMIT panned();
    }
    //update location radius circle
    event->accept();
}

 void GeoMap::keyPressEvent(QKeyEvent *event)
 {
       switch (event->key()) {
       case Qt::Key_VolumeUp:
           if (zoomLevel() > minimumZoomLevel()) {
               setZoomLevel(zoomLevel() - 1);
           }
           break;
       case Qt::Key_VolumeDown:
           if (zoomLevel() < maximumZoomLevel()) {
               setZoomLevel(zoomLevel() + 1);
           }
           break;
       }
  }

FixedGraphicsView::FixedGraphicsView(QGraphicsScene *scene, QWidget *parent) :
    QGraphicsView(scene, parent)
{
}

void FixedGraphicsView::scrollContentsBy(int dx, int dy)
{
    Q_UNUSED(dx)
    Q_UNUSED(dy)
}

class MapsWidgetPrivate
{
public:
    GeoMap *map;
    QGraphicsView *view;
    MarkerManager *markerManager;
    QGeoMapData *mapdata;
};

MapsWidget::MapsWidget(QWidget *parent) :
    QWidget(parent),
    d(new MapsWidgetPrivate)
{
    d->map = 0;
    d->view = 0;
    d->markerManager = 0;
    d->mapdata = 0;
}

MapsWidget::~MapsWidget()
{
    //delete MapsWidgetPrivate ???
}

void MapsWidget::initialize(QGeoMappingManager *manager)
{
   // manager->createMapData();
    d->map = new GeoMap(manager,this);
    if (d->markerManager)
        d->markerManager->setMap(d->map);
    QGraphicsScene *sc = new QGraphicsScene;
    //d->map->resize(300, 480);
    d->map->resize(this->size());//it's like 1 pixel if you don't do this, but this DOESNT make it fullscreen like it should either??!!
    d->map->setCenter(QGeoCoordinate(-27.5796, 153.1));
    d->map->setZoomLevel(15);
    sc->addItem(d->map);
   // sc->setSceneRect(0,0,300,480);
    //d->view = new QGraphicsView(sc, this);
    d->view = new FixedGraphicsView(sc, this);
    d->view->setVisible(true);
    d->view->setInteractive(true);
    //d->view->fitInView(sc->sceneRect());//this just scales it back down so it has no scroll bars?
    d->view->resize(sc->itemsBoundingRect().size().toSize());//oh fuck, finally. SOOOOOOOOO intuitive.
    //could try d->map->fitInViewport();

    connect(d->map, SIGNAL(panned()),
                 this, SIGNAL(mapPanned()));
    mapCenterCoord = new QGeoCoordinate(d->map->center());//init just in case
    sensitivityCircle = new QGeoMapCircleObject;
    sensitivityCircle->setMapData(d->mapdata);
    sensitivityCircle->setPen(QPen(Qt::green, 2.0));
    d->map->addMapObject(sensitivityCircle);
}

void MapsWidget::drawSensitivityCircle(qint16 radius)
{
    *mapCenterCoord = QGeoCoordinate(d->map->center());
    sensitivityCircle->setCenter(*mapCenterCoord);
    sensitivityCircle->setRadius(radius);
}

void MapsWidget::setMyLocation(QGeoCoordinate location, bool center)
{
    if (d->markerManager)
        d->markerManager->setMyLocation(location);
  //  if (d->map && center)
      //  d->map->setCenter(location);
}

void MapsWidget::animatedPanTo(QGeoCoordinate center)
{
    if (!d->map)
        return;

    QPropertyAnimation *latAnim = new QPropertyAnimation(d->map, "centerLatitude");
    latAnim->setEndValue(center.latitude());
    latAnim->setDuration(200);
    QPropertyAnimation *lonAnim = new QPropertyAnimation(d->map, "centerLongitude");
    lonAnim->setEndValue(center.longitude());
    lonAnim->setDuration(200);

    QParallelAnimationGroup *group = new QParallelAnimationGroup;
    group->addAnimation(latAnim);
    group->addAnimation(lonAnim);
    group->start(QAbstractAnimation::DeleteWhenStopped);
}

class MarkerPrivate
 {
 public:
     Marker::MarkerType type;
     QString name;
 };

 Marker::Marker(MarkerType type) :
     QGeoMapPixmapObject(),
     d(new MarkerPrivate)
 {
     setMarkerType(type);
 }

 void Marker::setMarkerType(MarkerType type)
 {
     QString filename;
     QPoint offset;
     int scale;
     d->type = type;

     switch (d->type) {
     case MyLocationMarker:
         filename = ":/icons/mylocation.png";
         break;
     }

     if (d->type == MyLocationMarker) {
         offset = QPoint(-13,-13);
         scale = 25;
     } else {
         offset = QPoint(-15, -36);
         scale = 30;
     }

     setOffset(offset);
     setPixmap(QPixmap(filename).scaledToWidth(scale, Qt::SmoothTransformation));
 }
 Marker::MarkerType Marker::markerType() const
 {
     return d->type;
 }

 QString Marker::name() const
 {
     return d->name;
 }
 void Marker::setName(QString name)
 {
     if (d->name != name) {
         d->name = name;
         Q_EMIT nameChanged(d->name);
     }
 }
 class MarkerManagerPrivate
 {
 public:
     Marker *myLocation;
     QList<Marker*> searchMarkers;

     // a reverse geocode request is currently running
//     bool revGeocodeRunning;
     // a request is currently running, and my location has changed
     // since it started (ie, the request is stale)
     bool myLocHasMoved;

     QGraphicsGeoMap *map;
     //StatusBarItem *status;
//     QGeoSearchManager *searchManager;

//     QSet<QGeoSearchReply*> forwardReplies;
//     QSet<QGeoSearchReply*> reverseReplies;
 };

 MarkerManager *MapsWidget::markerManager() const
 {
     return d->markerManager;
 }

 MarkerManager::MarkerManager(QObject *parent) :
     QObject(parent),
     d(new MarkerManagerPrivate)
 {

//     d->searchManager = searchManager;
     //d->status = 0;
//     d->revGeocodeRunning = false;
//     d->myLocHasMoved = false;

     d->myLocation = new Marker(Marker::MyLocationMarker);
     d->myLocation->setName("Me");

     // hook the coordinateChanged() signal for reverse geocoding
     connect(d->myLocation, SIGNAL(coordinateChanged(QGeoCoordinate)),
             this, SLOT(myLocationChanged(QGeoCoordinate)));

//     connect(d->searchManager, SIGNAL(finished(QGeoSearchReply*)),
//             this, SLOT(replyFinished(QGeoSearchReply*)));
//     connect(d->searchManager, SIGNAL(finished(QGeoSearchReply*)),
//             this, SLOT(reverseReplyFinished(QGeoSearchReply*)));
 }

 MarkerManager::~MarkerManager()
 {
     d->map->removeMapObject(d->myLocation);
     delete d->myLocation;
     //removeSearchMarkers();
 }
 void MarkerManager::setMap(QGraphicsGeoMap *map)
 {
     d->map = map;
     map->addMapObject(d->myLocation);
 }

 void MarkerManager::setMyLocation(QGeoCoordinate coord)
 {
     d->myLocation->setCoordinate(coord);
 }
 void MarkerManager::myLocationChanged(QGeoCoordinate location)
 {
//     if (d->revGeocodeRunning) {
//         d->myLocHasMoved = true;
//     } else {
//         QGeoSearchReply *reply = d->searchManager->reverseGeocode(location);
//         d->reverseReplies.insert(reply);
//         d->myLocHasMoved = false;

//         if (reply->isFinished()) {
//             d->revGeocodeRunning = false;
//             reverseReplyFinished(reply);
//         } else {
//             d->revGeocodeRunning = true;
//         }
//     }
 }
 void MapsWidget::setMarkerManager(MarkerManager *markerManager)
 {
     d->markerManager = markerManager;
     if (d->map)
         d->markerManager->setMap(d->map);
 }
