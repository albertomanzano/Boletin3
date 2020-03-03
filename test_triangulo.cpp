#include <iostream>
#include "clase_punto.h"
#include "clase_triangulo.h"
using namespace std;

int main(){
cout<<"1. Creo los puntos"<<endl;

double* p = new double[6];
p[0] = 2;
p[1] = 0;
p[2] = 3;
p[3] = 4;
p[4] = -2;
p[5] = 5;
cout<<endl;
cout<<"Ahora vamos con los triangulos"<<endl;
Triangulo triangulo = Triangulo(p);
delete[] p;
cout<<endl;
triangulo.print();
cout<<"Calculamos area"<<endl;
double area;
area = triangulo.area();
cout<<"El area del triangulo es: "<<area<<endl;
}
