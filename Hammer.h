#ifndef HAMMER_H
#define HAMMER_H
#include <string>
#include "Range.h"

class Hammer:public Range{
  protected:
    int tam;
    int hp;
    double def;
    double vel;
    int fuerza;
  public:

    Hammer(int,int,int,string,int,int);
    Hammer();
    int getTam();
    int getHp();
    double getDef();
    double getVel();
    int getFuerza();

    void setTam(int);

    void Poder();

    ~Hammer();



};
#endif
