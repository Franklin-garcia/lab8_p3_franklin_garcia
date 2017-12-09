#ifndef MELEE_H
#define MELEE_H
#include "Minion.h"

class Melee:public Minion{
  protected:
    double intimidar;

  public:
    Melee(double,string,int,int);
    Melee();
    double getIntimidar();
    void setIntimidar(double);
    //polimorfismo
    void Poder();
    ~Melee();
};
#endif
