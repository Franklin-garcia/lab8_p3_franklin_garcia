#include <iostream>
#include "Minion.h"
#include "Melee.h"
#include "Flying.h"
#include "Range.h"
#include "Goomba.h"
#include "Chain.h"
#include "Boo.h"
#include "Paratropa.h"
#include "Hammer.h"
#include "Magikoopa.h"
#include <string>
#include <vector>

using namespace std;
int main(){
  vector<Minion*>lista_minions;
  vector<Minion**>lista_equipos;
  bool seguir;
  int opcion;
  while(seguir){
    cout<<"Ingrese opcion"<<endl<<"1.Operaciones basicas"<<endl<<"2-Hacer equipos"<<endl<<"3-simulacion"<<endl;
    cin>>opcion;
    switch(opcion){
      case 1:{//operaciones basicas
        cout<<"Ingrese opcion"<<endl<<"1-Agregar"<<endl<<"2-Eliminar"<<endl<<"3-Modificar"<<endl;
        int opcion1;
        cin>>opcion1;
        switch(opcion1){
          case 1:{//Agregar
            cout<<"Ingrese opcion"<<endl<<"1-Goomba"<<endl<<"2-Chain chop"<<endl<<"3-Boo"<<
            endl<<"4-Paratropa"<<endl<<"5-Hammer bro"<<endl<<"6-Magikoopa"<<endl;
            int opcion2;
            cin>>opcion2;
            switch (opcion2) {
              case 1:{
                  //double pintimidar,string pnombre,int pbatallas,int pexperiencia,int ptam,int php
                  double intimidar;
                  string nombre;
                  int batallas=0;
                  int experiencia=0;
                  int tam;
                  int hp;
                  cout<<"Intimidar"<<endl;
                  cin>>intimidar;
                  cout<<"nombre"<<endl;
                  cin>>nombre;
                  cout<<"Tamaño"<<endl;
                  cin>>tam;
                  cout<<"Hp 20-40"<<endl;
                  cin>>hp;
                  while(hp>40 || hp<20){
                    cout<<"hp incorrecto Ingreseotra vez 20-40"<<endl;
                    cin>>hp;
                  }
                  lista_minions.push_back(new Goomba(intimidar,nombre,batallas,experiencia,tam,hp));
                  cout<<"Agregado!"<<endl;
              }break;
              case 2:{
                //string pcolor,int php,double pintimidar,string pnombre,int pbatallas,int pexperiencia
                string color;
                int hp;
                double intimidar;
                string nombre;
                int batallas=0;
                int experiencia=0;
                cout<<"Color de su cuerpo"<<endl;
                cin>>color;
                cout<<"Intimidar"<<endl;
                cin>>intimidar;
                cout<<"nombre"<<endl;
                cin>>nombre;
                cout<<"Hp 10-30"<<endl;
                cin>>hp;
                while(hp>30 || hp<10){
                  cout<<"hp incorrecto Ingreseotra vez 10-30"<<endl;
                  cin>>hp;
                }
                lista_minions.push_back(new Chain(color,hp,intimidar,nombre,batallas,experiencia));
                cout<<"Agregado!"<<endl;
              }break;
              case 3:{
                //string pcolor,int php,string pvuelo,string pnombre,int pbatallas,int pexperiencia
                string color;
                int hp;
                string vuelo;
                string nombre;
                int batallas=0;
                int experiencia=0;

                cout<<"Color del Boo"<<endl;
                cin>>color;
                cout<<"vuelo"<<endl;
                cin>>vuelo;
                cout<<"nombre"<<endl;
                cin>>nombre;
                cout<<"Hp 10-30"<<endl;
                cin>>hp;
                while(hp>40 || hp<20){
                  cout<<"hp incorrecto Ingrese otra vez 20-40"<<endl;
                  cin>>hp;
                }
                lista_minions.push_back(new Boo(color,hp,vuelo,nombre,batallas,experiencia));
                cout<<"Agregado"<<endl;

              }break;
              case 4:{
                  //string pcolor,int php,string pvuelo,string pnombre,int pbatallas,int pexperiencia
                  string color;
                  int hp;
                  string vuelo;
                  string nombre;
                  int batallas=0;
                  int experiencia=0;
                  cout<<"Color del Boo"<<endl;
                  cin>>color;
                  cout<<"vuelo"<<endl;
                  cin>>vuelo;
                  cout<<"nombre"<<endl;
                  cin>>nombre;
                  cout<<"Hp 10-30"<<endl;
                  cin>>hp;
                  while(hp>60 || hp<40){
                    cout<<"hp incorrecto Ingrese otra vez 40-60"<<endl;
                    cin>>hp;
                  }
                  lista_minions.push_back(new Paratropa(color,hp,vuelo,nombre,batallas,experiencia));
                  cout<<"Agregado"<<endl;
              }break;
              case 5:{
                //int ptam,int php,int prango,string pnombre,int pbatallas,int pexperiencia
                int tam;
                int hp;
                int rango;
                string nombre;
                int batallas=0;
                int experiencia=0;
                cout<<"tamaño"<<endl;
                cin>>tam;
                cout<<"rango"<<endl;
                cin>>rango;
                cout<<"Nombre"<<endl;
                cin>>nombre;
                while(hp>80 || hp<60){
                  cout<<"hp incorrecto Ingrese otra vez 60-80"<<endl;
                  cin>>hp;
                }
                lista_minions.push_back(new Hammer(tam,hp,rango,nombre,batallas,experiencia));
                cout<<"Agregado"<<endl;
              }break;
              case 6:{
                //string pcolor,int php,int prango,string pnombre,int pbatallas,int pexperiencia
                string color;
                int hp;
                int rango;
                string nombre;
                int batallas=0;
                int experiencia=0;
                cout<<"rango"<<endl;
                cin>>rango;
                cout<<"Nombre"<<endl;
                cin>>nombre;
                while(hp>70 || hp<50){
                  cout<<"hp incorrecto Ingrese otra vez 50-70"<<endl;
                  cin>>hp;
                }
                lista_minions.push_back(new Magikoopa(color,hp,rango,nombre,batallas,experiencia));
                cout<<"Agreago"<<endl;
              }break;
            }
          }break;
          case 2:{//Eliminar
            cout<<"Ingrese posicion a eliminar"<<endl;
            for(int i=0;i<lista_minions.size();i++){
              cout<<i<<"-"<<lista_minions.at(i)->getNombre()<<endl;
            }
            int pos;
            cin>>pos;
            lista_minions.erase(lista_minions.begin()+pos);
            cout<<"Eliminado"<<endl;
          }break;
          case 3:{//Modificar
            cout<<"Ingrese posicion a modificar"<<endl;
            for(int i=0;i<lista_minions.size();i++){
              cout<<i<<"-"<<lista_minions.at(i)->getNombre()<<endl;
            }
            int pos;
            string nombre;
            cin>>pos;
            cout<<"Nombre"<<endl;
            cin>>nombre;
            lista_minions.at(pos)->setNombre(nombre);
            cout<<"Listo"<<endl;
          }break;
        }
      }break;//fin de ob
      case 2:{//Hacer equipos
        if(lista_minions.size()<7){//regla general
          for(int i=0;i<7;i++){

          }
        }else{
          cout<<"No hay suficientes personajes"<<endl;
        }
      }break;//fin de he
      case 3:{//simulacion

      }break;//fin de simulacion
    }//fin del switch
  }//fin del while principal
return 0;
}
