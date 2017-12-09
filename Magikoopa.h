#ifndef MAGIKOOPA
#define MAGIKOOPA
#include "Range.h"
#include <string>

class Magikoopa:public Range{
  protected:
    string color;
    int hp;
    double def;
    double vel;
    int fuerza;

  public:
    Magikoopa(string,int,int,string,int,int);
    Magikoopa();
    string getColor();
    int getHp();
    double getDef();
    double getVel();
    int getFuerza();

    void setColor(string);

    void Poder();

    ~Magikoopa();
};
#endif
