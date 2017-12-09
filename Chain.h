#ifndef CHAIN_H
#define CHAIN_H
#include "Melee.h"
#include <string>

class Chain: public Melee{
  protected:
    string color;
    int hp;
    double def;
    double vel;
    int fuerza;
  public:
    Chain(string,int,double,string,int,int);
    Chain();
    string getColor();
    int getHp();
    double getDef();
    double getVel();
    int getFuerza();

    void setColor(string);

    void Poder();

    ~Chain();

};
#endif
