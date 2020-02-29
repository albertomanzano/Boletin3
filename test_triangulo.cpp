#include <iostream>
#include "clase_punto.h"
#include "clase_triangulo.h"
using namespace std;

int main(){
cout<<"1. Creo los puntos"<<endl;
Punto p1 = Punto(2,3);
Punto p2 = Punto(p1);
Punto p3;
p3 = p1;
cout<<endl;
cout<<"2. Creo el triangulo y lo imprimo"<<endl;
Triangulo triang = Triangulo(p1,p2,p3);
triang.direccion();
triang.print();
cout<<endl;
cout<<"3. Traslado el punto e imprimo el triangulo"<<endl;
p1.trasladar(p2);
triang.direccion();
triang.print();
cout<<endl;
cout<<"4. Vuelvo a crear el triangulo con el punto trasladado"<<endl;
triang = Triangulo(p1,p2,p3);
triang.direccion();
triang.print();
cout<<"5. Termino el programa"<<endl;/*
cout<<"Imprimimos lo que hay dentro del triangulo 2"<<endl;
triang2.print();
cout<<"Se deberian destruir tres puntos del primer triangulo, tres puntos del segundo y los otros tres"<<endl;*/
}
