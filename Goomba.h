#ifndef GOOMBA_H
#define GOOMNA_H
#include <string>
#include "Melee.h"

class Goomba:public Melee{
  protected:
    int tam;
    int hp;
    double def;
    double vel;
    int fuerza;

  public:
    Goomba(double,string,int,int,int,int);
    Goomba();
    int getTam();
    int getHp();
    double getDef();
    double getVel();
    int getFuerza();

    void setTam(int);
    void setHp(int);
    void setDef(double);
    void setVel(double);
    void setFuerza(int);

    void Poder();

    ~Goomba();

};
#endif
