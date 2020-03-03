#include <iostream>
#include "math.h"
using namespace std;

double area(double radio){
	return (M_PI*radio*radio);
}
double area(double lado1,double lado2){
	return (lado1*lado2);
}

int main(){
double a;
a = area(3,4);
cout<<"El area es: "<<a<<endl;

}
