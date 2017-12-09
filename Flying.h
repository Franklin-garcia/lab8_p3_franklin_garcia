#ifndef FLYING_H
#define FLYING_H
#include <string>
#include "Minion.h"

class Flying: public Minion{
  protected:
    string vuelo;
  public:
    Flying(string,string,int,int);
    Flying();
    string getVuelo();
    void setVuelo(string);
    //polimorfismo
    void Poder();
    ~Flying();
};
#endif
