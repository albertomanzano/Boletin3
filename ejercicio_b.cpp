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
int lectura(char filename[], int &n, int* &p){
	ifstream fe(filename);// creamos un fichero de entrada
	if (!fe){
		cout<<"ERROR: file doesn't exists"<<endl;
		return 8;
		}
	else if (fe.bad()){//Comprobamos errores
	        cout << "ERROR: cannot open "<< filename<<endl;
		return 8;
	}
	else{
		// Iteramos el fichero
		fe>>n; // Dimension del fichero
		p = new int[n];
		for (int i=0;i<n;i++) fe>>p[i];
	}
	fe.close();
}

// Lectura datos
int lectura(char filename[], int &n, float* &p){
	ifstream fe(filename);// creamos un fichero de entrada
	if (!fe){
		cout<<"ERROR: file doesn't exists"<<endl;
		return 8;
		}
	else if (fe.bad()){//Comprobamos errores
	        cout << "ERROR: cannot open "<< filename<<endl;
		return 8;
	}
	else{
		// Iteramos el fichero
		fe>>n; // Dimension del fichero
		p = new float[n];
		for (int i=0;i<n;i++) fe>>p[i];
	}
	fe.close();
}
// Lectura datos
int lectura(char filename[], int &n, double* &p){
	ifstream fe(filename);// creamos un fichero de entrada
	if (!fe){
		cout<<"ERROR: file doesn't exists"<<endl;
		return 8;
		}
	else if (fe.bad()){//Comprobamos errores
	        cout << "ERROR: cannot open "<< filename<<endl;
		return 8;
	}
	else{
		// Iteramos el fichero
		fe>>n; // Dimension del fichero
		p = new double[n];
		for (int i=0;i<n;i++) fe>>p[i];
	}
	fe.close();
}


// Menu
void Menu(){
	int op;// Opcion elegida
	char filename[30];
	int *p1;
	float *p2;
	double *p3;
	int dim;
while (op!=3){

	cin.clear();
        cout<<"Tipo de dato del fichero:"<<endl;
        cout<<"0: int"<<endl;
        cout<<"1: float"<<endl;
        cout<<"2: double"<<endl;
        cout<<"3: Salir"<<endl;
        cin>>op;

	cin.clear();
        cout<<"Nombre del fichero del que se van a leer los datos: "<<endl;
	cin>>filename;
        cin.clear();


        switch (op)
        {
        	case 0:
			lectura(filename,dim,p1);
			for (int i = 0; i<dim; i++) cout<<p1[i]<<endl;
                	break;
        	case 1:
			lectura(filename,dim,p2);
			for (int i = 0; i<dim; i++) cout<<p2[i]<<endl;
			break;
		case 2:
			lectura(filename,dim,p3);
			for (int i = 0; i<dim; i++) cout<<p3[i]<<endl;
			break;
		case 3:
			break;
	}

}// Cierra while
}// Cierra funcion Menu()

int main(){
	Menu();
}
