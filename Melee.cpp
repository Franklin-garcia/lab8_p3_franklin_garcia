#include "Melee.h"
#include <string>

Melee::Melee(){
  this->intimidar;
}

Melee::Melee(double pintimidar,string pnombre,int pbatallas,int pexperiencia):Minion(pnombre,pbatallas,pexperiencia){
  intimidar=pintimidar;
}

double Melee::getIntimidar(){
  return intimidar;
}

void Melee::setIntimidar(double pintimidar){
  intimidar=pintimidar;
}

void Melee::Poder(){
}

Melee::~Melee(){
}
