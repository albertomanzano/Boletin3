#include <iostream>
#include "math.h"
using namespace std;

double area_circulo(double radio){
	return (M_PI*radio*radio);
}

int main(){
double area;
area = area_circulo(1);
cout<<"El area es: "<<area<<endl;

}
