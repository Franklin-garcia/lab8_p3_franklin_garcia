#include "Goomba.h"
#include <string>

Goomba::Goomba(){
  this->tam;
  this->hp;//solo este en el contructor
  def=0;
  vel=65;
  fuerza=10;
}
Goomba::Goomba(double pintimidar,string pnombre,int pbatallas,int pexperiencia,int ptam,int php): Melee(pintimidar,pnombre,pbatallas,pexperiencia){
  tam=ptam;
  hp=php;
}


void Goomba::setTam(int ptam){
  tam=ptam;
}
void Goomba::setHp(int php){
  hp=php;
}
void Goomba::setDef(double pdef){
  def=pdef;
}
void Goomba::setVel(double pvel){
  vel=pvel;
}
void Goomba::setFuerza(int pfuerza){
  fuerza=pfuerza;
}


int Goomba::getHp(){
  return hp;
}
double Goomba::getDef(){
  return def;
}
double Goomba::getVel(){
  return vel;
}
int Goomba::getFuerza(){
  return fuerza;
}

void Goomba::Poder(){
  fuerza=fuerza+10;
}

Goomba::~Goomba(){
  
}
