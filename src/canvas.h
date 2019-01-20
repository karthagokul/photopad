#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>

class AbstractExporter;
class QPainter;
class Canvas:public QWidget
{
public:
    Canvas();
    //Canvas to draw the images
    //Canvas to draw the background
    void paintEvent(QPaintEvent *event);
    void startExport();

protected:
    void updateGraphicsScene(QPainter *p);

private:
    QImage mBgImage;
    QImage mImage;

    AbstractExporter *mExporter;
};

#endif // CANVAS_H
