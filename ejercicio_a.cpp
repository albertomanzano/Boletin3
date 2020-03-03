#include <iostream>
#include "math.h"
using namespace std;

double area(double radio){
	return (M_PI*radio*radio);
}
double area(double lado1,double lado2){
	return (lado1*lado2);
}
double area(double h,
	    double base1,
	    double base2
	    ){
	return (0.5*h*(base1+base2));

}

int main(){
double a;
a = area(1,4,4);
cout<<"El area es: "<<a<<endl;

}
