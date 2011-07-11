#ifndef MAPSWIDGET_H
#define MAPSWIDGET_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QWidget>
#include <QGraphicsRectItem>
#include <QGraphicsSimpleTextItem>

#include <QGraphicsGeoMap>
#include <QGeoMappingManager>
#include <QGeoCoordinate>
#include <QGeoMapPixmapObject>
#include <QMainWindow>
#include <QGeoPositionInfoSource>
#include <QGeoPositionInfo>
#include <QGeoSearchReply>
#include <QGeoSearchManager>
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>
#include <QPointer>
#include <QGeoMapCircleObject>
#include <QGeoMapData>

QTM_USE_NAMESPACE

//extern QPointer<QGeoPositionInfoSource> locationDataSource;
class MapsWidget;
class MarkerManager;
class MarkerPrivate;

//window that contains everything
class MapWindow : public QMainWindow
{
    Q_OBJECT
public:
     explicit MapWindow(QPointer<QGeoPositionInfoSource> locationDataSource2 = 0, qint16 radius = 100);
    ~MapWindow();
    MapsWidget *mapsWidget;//probably shouldn't be public, but for now it is
    qint16 radius;
private:
    //MapsWidget *mapsWidget;
   // QGeoPositionInfoSource *positionSource;
    QPointer<QGeoPositionInfoSource> locationDataSource3;
    MarkerManager *markerManager;
    bool tracking;

private Q_SLOTS:
    // slot to receive updates
    void updateMyPosition(QGeoPositionInfo info);
    void disableTracking();
};

class GeoMap : public QGraphicsGeoMap
{
    Q_OBJECT
    Q_PROPERTY(double centerLatitude READ centerLatitude WRITE setCenterLatitude)
    Q_PROPERTY(double centerLongitude READ centerLongitude WRITE setCenterLongitude)

public:
    explicit GeoMap(QGeoMappingManager *manager, MapsWidget *mapsWidget);
    ~GeoMap();
    double centerLatitude() const;
    void setCenterLatitude(double lat);
    double centerLongitude() const;
    void setCenterLongitude(double lon);
Q_SIGNALS:
    void panned();

private:
    MapsWidget *mapsWidget;
    bool panActive;
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);
};

class FixedGraphicsView : public QGraphicsView
{
    Q_OBJECT

public:
    FixedGraphicsView(QGraphicsScene *scene, QWidget *parent);

protected:
    void scrollContentsBy(int dx, int dy);
};

// A widget to hold the view and scene for a GeoMap, as well
// as control widgets
class MapsWidgetPrivate;
class MapsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MapsWidget(QWidget *parent = 0);
    ~MapsWidget();
    void setMarkerManager(MarkerManager *markerManager);
    MarkerManager *markerManager() const;
    QGraphicsGeoMap *map() const;
    void animatedPanTo(QGeoCoordinate center);
    void setMyLocation(QGeoCoordinate location, bool center=true);
    QGeoMapCircleObject *sensitivityCircle;
    QGeoCoordinate *mapCenterCoord;
    void drawSensitivityCircle(qint16 radius);
Q_SIGNALS:
    void mapPanned();
public Q_SLOTS:
    void initialize(QGeoMappingManager *manager);
private:
    MapsWidgetPrivate *d;
};

class Marker : public QGeoMapPixmapObject
 {
    Q_OBJECT
    Q_PROPERTY(MarkerType markerType READ markerType WRITE setMarkerType NOTIFY markerTypeChanged)
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)

 public:
     enum MarkerType {
         MyLocationMarker,
         SearchMarker,
         WaypointMarker,
         StartMarker,
         EndMarker,
         PathMarker
     };

     explicit Marker(MarkerType type);
     MarkerType markerType() const;
     void setMarkerType(MarkerType type);
     QString name() const;
public Q_SLOTS:
    void setName(QString name);

private:
     MarkerPrivate *d;
Q_SIGNALS:
    void markerTypeChanged(const MarkerType &type);
    void nameChanged(const QString &name);

 };
class MarkerManagerPrivate;

class MarkerManager : public QObject
{
    Q_OBJECT
public:
    explicit MarkerManager(QObject *parent=0);
    ~MarkerManager();

    QGeoCoordinate myLocation() const;

public Q_SLOTS:
    void setMap(QGraphicsGeoMap *map);
    //void setStatusBar(StatusBarItem *bar);
    void setMyLocation(QGeoCoordinate coord);
   // void search(QString query, qreal radius=-1);
  //  void removeSearchMarkers();

Q_SIGNALS:
   // void searchError(QGeoSearchReply::Error error, QString errorString);
  //  void searchFinished();

private:
    MarkerManagerPrivate *d;

private Q_SLOTS:
  //  void replyFinished(QGeoSearchReply *reply);
    void myLocationChanged(QGeoCoordinate location);
    //void reverseReplyFinished(QGeoSearchReply *reply);
};

#endif // MAPSWIDGET_H
