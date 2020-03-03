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
void lectura(char filename[], int &n, int* &p){
	ifstream fe;// creamos un fichero de entrada
	fe.open(filename);//Apertura del fichero
	if (fe.bad()){//Comprobamos errores
	        cout << "ERROR: cannot open "<< filename<<endl;
	}
	// Iteramos el fichero
	fe>>n; // Dimension del fichero
	p = new int[n];
	for (int i=0;i<n;i++){
	        fe>>p[i];
	}
	fe.close();
}
// Lectura datos
void lectura(char filename[], int &n, double* &p){
	ifstream fe;// creamos un fichero de entrada
	fe.open(filename);//Apertura del fichero
	if (fe.bad()){//Comprobamos errores
	        cout << "ERROR: cannot open "<< filename<<endl;
	}
	// Iteramos el fichero
	fe>>n; // Dimension del fichero
	p = new double[n];
	for (int i=0;i<n;i++){
	        fe>>p[i];
	}
	fe.close();
}
// Lectura datos
void lectura(char filename[], int &n, float* &p){
	ifstream fe;// creamos un fichero de entrada
	fe.open(filename);//Apertura del fichero
	if (fe.bad()){//Comprobamos errores
	        cout << "ERROR: cannot open "<< filename<<endl;
	}
	// Iteramos el fichero
	fe>>n; // Dimension del fichero
	p = new float[n];
	for (int i=0;i<n;i++){
	        fe>>p[i];
	}
	fe.close();
}

int main(){
char filename[] = "datos.txt";
int dim;
float* p;
lectura(filename,dim,p);
for (int i = 0; i<dim; i++) cout<<p[i]<<endl;

}
