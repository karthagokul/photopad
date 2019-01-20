#include "pdfexporter.h"
#include <QPdfWriter>

PDFExporter::PDFExporter()
    :mWriter(new QPdfWriter("mydoc.pdf"))
{
    mWriter->setPageSize(QPageSize(QPageSize::A4));
}

PDFExporter::~PDFExporter()
{
    if(mWriter)
    {
        delete mWriter;
        mWriter=0;
    }
}
