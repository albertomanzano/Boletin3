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

int main(){
int dim = 2000;

float suma1;
float *p1 = new float[dim];
for (int i=0;i<dim;i++) p1[i] = 1;
suma1 = sum(dim,p1);
cout<<"Suma floats: "<<suma1<<endl;

}
