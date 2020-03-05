#include <iostream>
#include "clase_punto.h"
#include "clase_triangulo.h"
using namespace std;

int main(){
double* p = new double[6];
p[0] = 1;
p[1] = 2;
p[2] = 3;
p[3] = -4;
p[4] = -4;
p[5] = 5;
Triangulo triangulo = Triangulo(p);
delete[] p;
triangulo.print();
double area = triangulo.area();
cout<<"El area del triangulo es: "<<area<<endl;
double perimetro = triangulo.perimetro();
cout<<"El perimetro del triangulo es: "<<perimetro<<endl;
double calidad = triangulo.calidad();
cout<<"La calidad del triangulo es: "<<calidad<<endl;
}
