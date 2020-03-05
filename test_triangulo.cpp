#include <iostream>
#include "clase_punto.h"
#include "clase_triangulo.h"
using namespace std;

int main(){
// Constructores
cout<<"Triangulo1: por defecto "<<endl;
Triangulo triangulo1;// Por defecto
triangulo1.print();
cout<<endl;

Punto punto1; Punto punto2 = Punto(0,1); Punto punto3 = Punto(1,1);
cout<<"Triangulo2: dados tres puntos "<<endl;
Triangulo triangulo2 = Triangulo(punto1,punto2,punto3);// Mediante puntos
triangulo2.print();
cout<<endl;

cout<<"Triangulo3: copia del triangulo2 "<<endl;
Triangulo triangulo3 = triangulo2;// Copia
triangulo3.print();
cout<<endl;

Punto *p = &punto1;
cout<<"Direccion a la que apunta p: "<<p<<endl;
cout<<"Triangulo4: array puntos "<<endl;
Triangulo triangulo4 = Triangulo(p);// Array Puntos
triangulo4.print();
cout<<endl;


double *d = new double[6];
d[0] =8;d[1]=1;d[2]=2;d[3]=3;d[4]=4;d[5]=5;
cout<<"Triangulo5: array doubles "<<endl;
Triangulo triangulo5 = Triangulo(d);// Array doubles
triangulo5.print();
cout<<endl;

// Setters
cout<<"Triangulo1 set= triangulo2 por puntos"<<endl;
triangulo1.setPtos(punto1,punto2,punto3);
triangulo1.print();
cout<<endl;

cout<<"Triangulo4 set= triangulo2 por puntero puntos"<<endl;
cout<<"Direccion a la que apunta p: "<<p<<endl;
triangulo4.setPtos(p);
triangulo4.print();
cout<<endl;

Punto p4 = Punto(5,5);
cout<<"Triangulo1 modificada primera coordenada"<<endl;
triangulo1.setPto(0,p4);
triangulo1.print();
cout<<endl;

// Getters
cout<<"Triangulo1 primera coordenada"<<endl;
punto1 = triangulo1.getPto(0);
punto1.print();
cout<<endl;

// Funciones
double perimetro;
double area;
double calidad;
cout<<"Estadisticas Triangulo1"<<endl;
triangulo1.estadisticas(perimetro,area,calidad);
cout<<"Perimetro: "<<perimetro<<endl;
cout<<"Area: "<<area<<endl;
cout<<"Calidad: "<<calidad<<endl;
cout<<endl;
// Interseccion
cout<<"El triangulo2 y el 5 tienen "<<triangulo2.intersecar(triangulo5)<<" vertices en comun"<<endl;
cout<<"El triangulo1 y el 2 tienen "<<triangulo1.intersecar(triangulo2)<<" vertices en comun"<<endl;
cout<<"El triangulo2 y el 3 tienen "<<triangulo2.intersecar(triangulo3)<<" vertices en comun"<<endl;

}
