#include "Range.h"
#include <string>

Range::Range(){
  this->rango;
}
Range::Range(int prango,string pnombre,int pbatallas,int pexperiencia):Minion(pnombre,pbatallas,pexperiencia){
  rango=prango;
}

int Range::getRango(){
  return rango;
}

void Range::setRango(int prango){
  rango=prango;
}

void Range::Poder(){
}

Range::~Range(){
}
