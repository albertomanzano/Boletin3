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
Triangulo::Triangulo(double* &p){
	cout<<"Direccion de p:"<<&p<<endl;
	cout<<"Direccion a la que apunta p:"<<p<<endl;
	this->ptos = new Punto[3];
	cout<<"Direccion triangulo:"<<(this)<<endl;
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
void Triangulo::setPtos(Punto &a, Punto &b, Punto &c){
	this->ptos[0] = a;
	this->ptos[1] = b;
	this->ptos[2] = c;

}
void Triangulo::setPtos(Punto* &p){
	this->ptos[0] = p[0];
	this->ptos[1] = p[1];
	this->ptos[2] = p[2];
}

Punto Triangulo::getPto(int i){
	return this->ptos[i];
}

void Triangulo::setPto(int i, Punto &a){
	this->ptos[i] = a;
}

double Triangulo::area(){
	double aux1,aux2,aux3;
	aux1 = this->ptos[0].getx()*this->ptos[1].gety()-this->ptos[0].gety()*this->ptos[1].getx();
	aux2 = this->ptos[0].getx()*this->ptos[2].gety()-this->ptos[0].gety()*this->ptos[2].getx();
	aux3 = this->ptos[1].getx()*this->ptos[2].gety()-this->ptos[1].gety()*this->ptos[2].getx();
	return (aux1-aux2+aux3)/2;
}
void Triangulo::print(){
	cout<<"Coordenadas"<<endl;
	for (int i=0;i<3;i++) (this->ptos)[i].print();
}
void Triangulo::direccion(){
	cout<<"Direccion del triangulo: "<<this<<endl;
	cout<<"Direccion guardada: "<<this->ptos<<endl;
}
