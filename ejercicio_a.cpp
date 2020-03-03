#include <iostream>
#include "math.h"
using namespace std;

// Area del circulo
double area(double radio){
	return (M_PI*radio*radio);
}

// Area del cuadrado
double area(float lado){
	return (lado*lado);
}

// Area del rectangulo
double area(double lado1,double lado2){
	return (lado1*lado2);
}

//Area del triangulo
double area(float base, float altura){
	return (base*altura/2.);
}

// Area del trapecio
double area(double h,
	    double base1,
	    double base2
	    ){
	return (0.5*h*(base1+base2));
}


int main(){
double a;
a = area(1.f,2.f);
cout<<"El area es: "<<a<<endl;

}
