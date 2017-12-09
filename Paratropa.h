#ifndef PARATROPA_H
#define PARATROPA_H
#include "Flying.h"
#include <string>

class Paratropa:public Flying{
  protected:
    string color;
    int hp;
    double def;
    double vel;
    int fuerza;

  public:
    Paratropa(string,int,string,string,int,int);
    Paratropa();
    string getColor();
    int getHp();
    double getDef();
    double getVel();
    int getFuerza();

    void setColor(string);

    void Poder();

    ~Paratropa();

};
#endif
