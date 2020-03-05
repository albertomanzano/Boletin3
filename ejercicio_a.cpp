#include <iostream>
#include "math.h"
using namespace std;

// Area del circulo
double area(double &radio){
	return (M_PI*radio*radio);
}

// Area del cuadrado
double area(double &lado, int numl){
	return (lado*lado);
}

// Area del rectangulo
double area(double &lado1, double &lado2){
	return (lado1*lado2);
}

//Area del triangulo
double area(double &base, double &altura, int numl){
	return (base*altura / 2.0);
}

// Area del trapecio
double area(double &h, double &base1, double &base2){
	return (0.5*h*(base1 + base2));
}


int main(){
	double b = 1.0, h = 2.0;
	cout<< "El area del rectangulo es: "<< area(b,h)<< endl;

}
