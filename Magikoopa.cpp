#include "Magikoopa.h"
#include <string>

Magikoopa::Magikoopa(){
  this->color;
  this->hp;//solo este en el contructor
  def=0;
  vel=60;
  fuerza=7;
}

Magikoopa::Magikoopa(string pcolor,int php,int prango,string pnombre,int pbatallas,int pexperiencia):Range(prango, pnombre,pbatallas,pexperiencia){
  color=pcolor;
  hp=php;
}

string Magikoopa::getColor(){
  return color;
}
int Magikoopa::getHp(){
  return hp;
}
double Magikoopa::getDef(){
  return def;
}
double Magikoopa::getVel(){
  return vel;
}
int Magikoopa::getFuerza(){
  return fuerza;
}

void Magikoopa::setColor(string pcolor){
  color=pcolor;
}

void Magikoopa::Poder(){
  hp=hp+25;
}

Magikoopa::~Magikoopa(){

}
