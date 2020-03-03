#include <iostream>
using namespace std;

// Tipo int
int sum(int n,int* &v){
	int suma = 0;
	for (int i = 0;i<n;i++) suma+=v[i];
	return suma;
}

// Tipo float
float sum(int n,float* &v){
	float suma = 0;
	for (int i = 0;i<n;i++) suma+=v[i];
	return suma;
}

// Tipo double
double sum(int n,double* &v){
	double suma = 0;
	for (int i = 0;i<n;i++) suma+=v[i];
	return suma;
}

int main(){
int dim = 2000;

double suma1;
double *p1 = new double[dim];
for (int i=0;i<dim;i++) p1[i] = 0.5;
suma1 = sum(dim,p1);
cout<<"Suma double: "<<suma1<<endl;

}
