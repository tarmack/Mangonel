#ifndef Shell_H
#define Shell_H

#include "Provider.h"

#include <QStringList>


class Shell : public Provider
{
    Q_OBJECT
public:
    Shell();
    ~Shell();
public slots:
    QList<Application> getResults(QString query);
    int launch(QVariant selected);
private:
    QHash<QString, QString> index;
};

namespace
{
QHash<QString, QString> walkDir(QString path);
QStringList getPathEnv();
};

#endif //Shell_H
// kate: indent-mode cstyle; space-indent on; indent-width 4; 
