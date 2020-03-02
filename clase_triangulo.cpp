#include <iostream>
#include "clase_punto.h"
#include "clase_triangulo.h"
using namespace std;

// Constructor por defecto
Triangulo::Triangulo(){
	this->ptos = new Punto[3];
}
// Constructor con puntos
Triangulo::Triangulo(const Punto &a, const Punto &b, const Punto &c){
	this->ptos = new Punto[3];
	this->ptos[0] = a;
	this->ptos[1] = b;
	this->ptos[2] = c;
}
// Constructores copia
Triangulo::Triangulo(const Triangulo &t){
	cout<<"Copiando"<<endl;
	this->ptos = new Punto[3];
	(*this) = t;
}
// Constructor array puntos
Triangulo::Triangulo(Punto* &p){
	this->ptos = new Punto[3];
	this->ptos[0] = p[0];
	this->ptos[1] = p[1];
	this->ptos[2] = p[2];
}
// Constructor array doubles
Triangulo::Triangulo(const double* &p){
	this->ptos = new Punto[3];
	this->ptos[0].setx(p[0]);
	this->ptos[0].sety(p[1]);
	this->ptos[1].setx(p[2]);
	this->ptos[1].sety(p[3]);
	this->ptos[2].setx(p[4]);
	this->ptos[2].sety(p[5]);
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
