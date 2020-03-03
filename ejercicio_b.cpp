#include <iostream>
using namespace std;
int sum(int n,int* &v){
	int suma = 0;
	for (int i = 0;i<n;i++) suma+=v[i];
	return suma;
}

int main(){
int dim = 2000;

int suma1;
int *p1 = new int[dim];
for (int i=0;i<dim;i++) p1[i] = 1;
suma1 = sum(dim,p1);
cout<<"Suma enteros: "<<suma1<<endl;

}
