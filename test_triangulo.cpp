#include <iostream>
#include "clase_punto.h"
#include "clase_triangulo.h"
using namespace std;

int main(){
cout<<"1. Creo los puntos"<<endl;

double* p = new double[6];
p[0] = 1;
p[1] = 2;
p[2] = 3;
p[3] = 4;
p[4] = 5;
p[5] = 6;
cout<<endl;
cout<<"Ahora vamos con los triangulos"<<endl;
Triangulo triangulo = Triangulo(p);
delete[] p;
cout<<endl;
triangulo.print();
cout<<"Asignamos valor al punto"<<endl;
Punto p2;
triangulo.setPto(2,p2);
triangulo.print();
}
