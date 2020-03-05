#include <iostream>
#include "clase_punto.h"
#include "clase_triangulo.h"
using namespace std;

int main(){

cout<<"Punto0 por defecto"<<endl;
Punto p0 = Punto();
p0.print();
cout<<endl;

cout<<"Punto1 por coordenadas"<<endl;
Punto p1 = Punto(2,3);
p1.print();
cout<<endl;

cout<<"Punto2 por copia"<<endl;
Punto p2 = Punto(p1);
p2.print();
cout<<endl;

cout<<"Hcemos un swap con los geters y seters p2 vale"<<endl;
double x,y;
x = p1.getx();
y = p1.gety();
p2.setx(y);
p2.sety(x);
p2.print();
cout<<endl;

cout<<"Despues lo trasladamos 2 unidades y vale: "<<endl;
p2.trasladar(2,2);
p2.print();
cout<<endl;

cout<<"p2 = p1, p2: "<<endl;
p2 = p1;
p2.print();
cout<<endl;


cout<<"p2 = p1+p2, p2: "<<endl;
p2.trasladar(p1);
p2.print();
cout<<endl;

double distancia = p0.distancia(p1);
cout<<"La distancia entre p0 y p1 es: "<<distancia<<endl;
}
