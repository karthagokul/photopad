#ifndef FSHANDLER_H
#define FSHANDLER_H

#include <QObject>

class FSHandler:public QObject
{
public:
    FSHandler();
    QStringList import(const QString &aFolderName);

};

#endif // FSHANDLER_H
