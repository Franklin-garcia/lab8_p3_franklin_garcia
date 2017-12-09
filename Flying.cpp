#include "Flying.h"
#include <string>


Flying::Flying(){
  this->vuelo;
}

Flying::Flying(string pvuelo,string pnombre,int pbatallas,int pexperiencia):Minion(pnombre,pbatallas,pexperiencia){
  vuelo=pvuelo;
}

string Flying::getVuelo(){
  return vuelo;
}

void Flying::setVuelo(string pvuelo){
  vuelo=pvuelo;
}

void Flying::Poder(){
}

Flying::~Flying(){
}
