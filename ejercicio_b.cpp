#include <iostream>
#include <fstream>
#include "string.h"
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

// Funciones de lectura de datos
// Lectura datos
void lectura(char filename[], int &n, int* &p){
	ifstream fe(filename);// creamos un fichero de entrada
	// Iteramos el fichero
	fe>>n; // Dimension del fichero
	p = new int[n];
	for (int i=0;i<n;i++) fe>>p[i];
	fe.close();
}
// Lectura datos
void lectura(char filename[], int &n, float* &p){
	ifstream fe(filename);// creamos un fichero de entrada
	// Iteramos el fichero
	fe>>n; // Dimension del fichero
	p = new float[n];
	for (int i=0;i<n;i++) fe>>p[i];
	fe.close();
}
// Lectura datos
void lectura(char filename[], int &n, double* &p){
	ifstream fe(filename);// creamos un fichero de entrada
	// Iteramos el fichero
	fe>>n; // Dimension del fichero
	p = new double[n];
	for (int i=0;i<n;i++) fe>>p[i];
	fe.close();
}

int file_correct(char filename[]){
	ifstream fe(filename);// creamos un fichero de entrada
 	if (!fe){
		cout<<"ERROR: file doesn't exists"<<endl;
		cout<<endl;
		return 1;
	}
	else if (fe.bad()){//Comprobamos errores
	        cout << "ERROR: cannot open "<< filename<<endl;
		cout<<endl;
		return 1;
	}
	else{
		cout<<endl;
		return 0;
	}
}

// Pide el nombre del archivo que se va a leer
int Menu1(char (&filename)[30]){
	int estado = 1;// Suponemos que hay algo que falla
	while (estado>0){
		cin.clear();
	        cout<<"Nombre del fichero: ";
		cin>>filename;
		cout<<endl;

		if (strcmp(filename,"-1")==0){
			estado = -1;
			break;
		}
		estado = file_correct(filename);// Si esta todo correcto op = 0
	        cin.clear();
	}
	return estado;
}

// Pide el tipo de dato que se va a leer
int Menu2(int &op){
	while (op<-1 || op>2){
		cin.clear();
	        cout<<"0: int"<<endl;
	        cout<<"1: float"<<endl;
	        cout<<"2: double"<<endl;
	        cout<<"Tipo de dato del fichero: ";
	        cin>>op;
		cout<<endl;
	}// Cierra while

}// Cierra funcion
// Menu
void Menu(){
	int op;// Opcion elegida
	int estado = 0;// Estado general del programa, -1 para salir
	int *p1; int suma1;
	float *p2; float suma2;
	double *p3; double suma3;
	int dim;
	char filename[30];
	
while (true){
	op = 100;
	suma1 = 0;
	suma2 = 0;
	suma3 = 0;

	estado = Menu1(filename);
	if (estado == -1) break;

	estado = Menu2(op);
	if (estado == -1) break;


        switch (op)
        {
        	case 0:
			lectura(filename,dim,p1);
			suma1 = sum(dim,p1);
			cout<<"El valor de la suma es: "<<suma1<<endl;
			cout<<endl;
			delete[] p1;
                	break;
        	case 1:
			lectura(filename,dim,p2);
			suma2 = sum(dim,p2);
			cout<<"El valor de la suma es: "<<suma2<<endl;
			cout<<endl;
			delete[] p2;
			break;
		case 2:
			lectura(filename,dim,p3);
			suma3 = sum(dim,p3);
			cout<<"El valor de la suma es: "<<suma3<<endl;
			cout<<endl;
			delete[] p3;
			break;
	}
}// Cierra while
}// Cierra funcion Menu()

int main(){
	Menu();
}
