#include "Minion.h"
#include <iostream>
#include <string>

Minion::Minion(){
  this->nombre;
  this->batallas;
  this->experiencia;
  this->lista;
}

Minion::Minion(string pnombre,int pbatallas,int pexperiencia){
  nombre=pnombre;
  batallas=pbatallas;
  experiencia=pexperiencia;
}

vector Minion::getVector(){
  return lista;
}
string Minion::getNombre(){
  return nombre;
}
int Minion::getBatallas(){
  return batallas;
}
int Minion::getExperiencia(){
  return experiencia;
}

void Minion::setNombre(string pnombre){
  nombre=pnombre;
}
void Minion::setBatallas(int pbatallas){
  batallas=pbatallas;
}
void Minion::setExperiencia(int pexperiencia){
  experiencia=pexperiencia;
}
//polimorfismo
void Poder(){

}

Minion::~Minion(){
}
