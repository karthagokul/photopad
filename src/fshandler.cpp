#include "fshandler.h"
#include <QDebug>
#include <QDirIterator>
#include <QApplication>

FSHandler::FSHandler()
{

}

QStringList FSHandler::import(const QString &aFolderName)
{
    qDebug()<<"Importing Photos from "<<aFolderName;
    QStringList filenames;

    QDirIterator it(aFolderName, QStringList() << "*.jpg", QDir::Files, QDirIterator::Subdirectories);
    while (it.hasNext())
    {
        it.next();
        qDebug() <<it.fileInfo().absoluteFilePath();
        filenames<<it.fileInfo().absoluteFilePath();
    }
    return filenames;
}
