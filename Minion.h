#ifndef MINION_H
#define MINION_H
#include <iostream>
using namespace std;

class Minion{
protected:
    string nombre;
    int batallas;
    int experiencia;

public:
    Minion(string,int,int);
    Minion();
    string getNombre();
    int getBatallas();
    int getExperiencia();

    virtual void Poder()=0;

    void setNombre(string);
    void setBatallas(int);
    void setExperiencia(int);

    virtual ~Minion();
};
#endif
