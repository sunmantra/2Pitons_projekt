#ifndef STATISTICS_H
#define STATISTICS_H
#include <QString>

class statistics
{
QString _Name;
int _lvl;
int _intellect;

public:
  statistics();
  statistics(QString n,int l,int i){

    _Name=n;
    _lvl=l;
    _intellect=i;
  }

  QString Name();
  int lvl();
  int intellect();
};

#endif // STATISTICS_H
