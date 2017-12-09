#ifndef RANGE_H
#define RANGE_H
#include <string>
#include "Minion.h"

class Range: public Minion{
    protected:
      int rango;

    public:
      Range(int,string,int,int);
      Range();

      int getRango();
      void setRango(int);

      void Poder();

      ~Range();

};
#endif
