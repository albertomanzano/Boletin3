#include <iostream>
#include "clase_punto.h"
#include "clase_triangulo.h"
using namespace std;

int main(){
cout<<"1. Creo los puntos"<<endl;
Punto *p = new Punto[3];
p[0] = Punto(2,3);
p[1] = Punto(3,5);
p[2] = Punto(7,10);
cout<<endl;
cout<<"Ahora vamos con los triangulos"<<endl;
Triangulo triangulo = Triangulo(p);
triangulo.print();
cout<<endl;
}
