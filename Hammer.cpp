#include "Hammer.h"
#include <string>

Hammer::Hammer(){
  this->tam;
  this->hp;//solo este en el contructor
  def=15;
  vel=30;
  fuerza=6;
}
Hammer::Hammer(int ptam,int php,int prango,string pnombre,int pbatallas,int pexperiencia):Range(prango, pnombre,pbatallas,pexperiencia){
  tam=ptam;
  hp=php;
}

int Hammer::getTam(){
  return tam;
}
int Hammer::getHp(){
  return hp;
}
double Hammer::getDef(){
  return def;
}
double Hammer::getVel(){
  return vel;
}
int Hammer::getFuerza(){
  return fuerza;
}

void Hammer::setTam(int ptam){
  tam=ptam;
}

void Hammer::Poder(){

}

Hammer::~Hammer(){
  int y=fuerza*0.15;
  fuerza=fuerza+y;
}
