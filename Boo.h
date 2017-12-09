#ifndef BOO_H
#define BOO_H
#include <string>
#include "Flying.h"

class Boo:public Flying{
  protected:
    string color;
    int hp;
    double def;
    double vel;
    int fuerza;

  public:
    Boo(string,int,string,string,int,int);
    Boo();
    string getColor();
    int getHp();
    double getDef();
    double getVel();
    int getFuerza();

    void setColor(string);

    void Poder();

    ~Boo();

};
#endif
