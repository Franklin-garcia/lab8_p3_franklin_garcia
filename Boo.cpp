#include "Boo.h"
#include <string>

Boo::Boo(){
  this->color;
  this->hp;//solo este en el contructor
  def=20;
  vel=35;
  fuerza=8;
}

Boo::Boo(string pcolor,int php,string pvuelo,string pnombre,int pbatallas,int pexperiencia):Flying(pvuelo,pnombre,pbatallas,pexperiencia){
  color=pcolor;
  hp=php;
}

string Boo::getColor(){
  return color;
}
int Boo::getHp(){
  return hp;
}
double Boo::getDef(){
  return def;
}
double Boo::getVel(){
  return vel;
}
int Boo::getFuerza(){
  return fuerza;
}

void Boo::setColor(string pcolor){
  color=pcolor;
}

void Boo::Poder(){
    vel=90;
}

Boo::~Boo(){
}
