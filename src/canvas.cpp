#include "canvas.h"
#include <QPainter>
#include <QDebug>
#include "pdfexporter.h"
#include "fshandler.h"

Canvas::Canvas()
{
    FSHandler f;
    f.import("images/album");
    mBgImage=QImage("images/bg_1.jpg");
    mImage=QImage("images/album/1.jpg");

    mExporter=new PDFExporter();
    startExport();
}

void Canvas::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    //qDebug()<<Q_FUNC_INFO;
    QPainter p(this);
    updateGraphicsScene(&p);

}

void Canvas::updateGraphicsScene(QPainter *p)
{
    p->drawRect(rect());
    p->drawImage(QRect(100,100,100,100),mImage);
}

void Canvas::startExport()
{
    const QPoint imageCoordinates(0,0);
    QPainter painter(mExporter->device());

    for (int i=0; i<3; ++i) {
        painter.drawImage(imageCoordinates, mImage);
        painter.drawImage(imageCoordinates,mBgImage);
        mExporter->next();
    }
}
