#ifndef ABSTRACTEXPORTER_H
#define ABSTRACTEXPORTER_H

#include <QObject>
#include <QPaintDevice>

class AbstractExporter:public QObject
{
public:
    AbstractExporter();
    virtual void next()=0;
    virtual void previous()=0;
    virtual QPaintDevice *device()=0;
    //Provide Paint Device
    //Provide Option to run
};

#endif // ABSTRACTEXPORTER_H
