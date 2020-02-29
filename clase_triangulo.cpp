#include <iostream>
#include "clase_punto.h"
#include "clase_triangulo.h"
using namespace std;

Triangulo::Triangulo(){
	this->ptos = new Punto[3];
}
Triangulo::Triangulo(const Punto &a, const Punto &b, const Punto &c){
	cout<<"Apunta direccion "<<this<<endl;
	
		this->ptos = new Punto[3];
		cout<<"Creando triangulo direccion "<<this<<endl;
		cout<<"Apuntando a: "<<this->ptos<<endl;
		cout<<"Asignando valores: "<<endl;
		this->ptos[0] = a;
		this->ptos[1] = b;
		this->ptos[2] = c;
		cout<<endl;
}
Triangulo::Triangulo(const Triangulo &t){
	cout<<"Copiando"<<endl;
}

Triangulo& Triangulo::operator=(const Triangulo &triangulo){
	this->ptos[0] = triangulo.ptos[0];
	this->ptos[1] = triangulo.ptos[1];
	this->ptos[2] = triangulo.ptos[2];
}


Triangulo::~Triangulo(){
	cout<<"Destruyendo un  triangulo apunta direccion "<<this->ptos<<endl;
	delete[] this->ptos;
	cout<<"Destruido un  triangulo direccion "<<this<<endl;
	cout<<endl;
}

void Triangulo::print(){
	cout<<"Coordenadas"<<endl;
	for (int i=0;i<3;i++) (this->ptos)[i].print();
}
void Triangulo::direccion(){
	cout<<"Direccion del triangulo: "<<this<<endl;
	cout<<"Direccion guardada: "<<this->ptos<<endl;
}
