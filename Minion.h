#ifndef MINION_H
#define MINION_H
#include <iostream>
#include <vector>
using namespace std;

class Minion{
protected:
    string nombre;
    int batallas;
    int experiencia;
    vector<Minion*>lista;

public:
    Minion(string,int,int);
    Minion();
    string getNombre();
    int getBatallas();
    int getExperiencia();
    vector<Minion*> getVector();

    virtual void Poder()=0;

    void setNombre(string);
    void setBatallas(int);
    void setExperiencia(int);

    virtual ~Minion();
};
#endif
