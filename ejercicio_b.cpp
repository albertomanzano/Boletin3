#include <iostream>
#include <fstream>
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

// Lectura datos
void* lectura(char filename[], int &n){
	ifstream fe;// creamos un fichero de entrada
	fe.open(filename);//Apertura del fichero
	if (fe.bad()){//Comprobamos errores
	        cout << "ERROR: cannot open "<< filename<<endl;
	}
	// Iteramos el fichero
	fe>>n; // Dimension del fichero
	int *p = new int[n];
	for (int i=0;i<n;i++){
	        fe>>p[i];
	}
	fe.close();
	return p;
}

int main(){
char filename[] = "datos.txt";
int dim;
int* p;
p = lectura(filename,dim);
for (int i = 0; i<dim; i++) cout<<p[i]<<endl;

}
