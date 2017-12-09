#include "Paratropa.h"
#include <string>

Paratropa::Paratropa(){
  this->color;
  this->hp;//solo este en el contructor
  def=40;
  vel=10;
  fuerza=9;
}
Paratropa::Paratropa(string pcolor,int php,string pvuelo,string pnombre,int pbatallas,int pexperiencia):Flying(pvuelo,pnombre,pbatallas,pexperiencia){
  color=pcolor;
  hp=php;
}
string Paratropa::getColor(){
  return color;
}
int Paratropa::getHp(){
  return hp;
}
double Paratropa::getDef(){
  return def;
}
double Paratropa::getVel(){
  return vel;
}
int Paratropa::getFuerza(){
  return fuerza;
}

void Paratropa::setColor(string pcolor){
  color=pcolor;
}

void Paratropa::Poder(){
  vel=80;
}

Paratropa::~Paratropa(){

}
