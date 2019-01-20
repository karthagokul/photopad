#ifndef PDFEXPORTER_H
#define PDFEXPORTER_H

#include "abstractexporter.h"
#include <QPdfWriter>

class QPdfWriter;
class QPaintDevice;

class PDFExporter : public AbstractExporter
{
public:
    PDFExporter();
    ~PDFExporter();

    virtual void next()
    {
        mWriter->newPage();
    }
    virtual void previous()
    {

    }
    QPaintDevice* device()
    {
        return (QPaintDevice*) mWriter; //TODO : Do proper Casting
    }

private:
    QPdfWriter *mWriter;
};

#endif // PDFEXPORTER_H
