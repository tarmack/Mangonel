#ifndef Paths_H
#define Paths_H

#include "Provider.h"


class Paths : public Provider
{
    Q_OBJECT
public:
    Paths();
    ~Paths();
public slots:
    QList<Application> getResults(QString query);
    int launch(QVariant selected);
};

namespace
{
QString subUser(QString);
};

#endif //Paths_H
// kate: indent-mode cstyle; space-indent on; indent-width 4; 
