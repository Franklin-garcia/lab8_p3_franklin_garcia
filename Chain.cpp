#include "Chain.h"
#include <string>

Chain::Chain(){
  this->color;
  this->hp;//solo este en el contructor
  def=60;
  vel=20;
  fuerza=15;
}
Chain::Chain(string pcolor,int php,double pintimidar,string pnombre,int pbatallas,int pexperiencia): Melee(pintimidar,pnombre,pbatallas,pexperiencia){
  color=pcolor;
  hp=php;
}

string Chain::getColor(){
  return color;
}
int Chain::getHp(){
  return hp;
}
double Chain::getDef(){
  return def;
}
double Chain::getVel(){
  return vel;
}
int Chain::getFuerza(){
  return fuerza;
}

void Chain::setColor(string pcolor){
  color=pcolor;
}

void Chain::Poder(){
  fuerza=fuerza+20;
}

Chain::~Chain(){

}
