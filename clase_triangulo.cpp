#include <iostream>
#include "clase_punto.h"
#include "clase_triangulo.h"
#include "math.h"
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
	return(*this);
}


Triangulo::~Triangulo(){
	delete[] this->ptos;
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
	return abs((aux1-aux2+aux3)/2);
}
double Triangulo:: perimetro(){
	double lado1,lado2,lado3;
	lado1 = this->ptos[0].distancia(this->ptos[1]);
	lado2 = this->ptos[0].distancia(this->ptos[2]);
	lado3 = this->ptos[1].distancia(this->ptos[2]);
	return (lado1+lado2+lado3);
}
double Triangulo:: calidad(){
	double lado1,lado2,lado3,calidad;
	lado1 = this->ptos[0].distancia(this->ptos[1]);
	lado2 = this->ptos[0].distancia(this->ptos[2]);
	lado3 = this->ptos[1].distancia(this->ptos[2]);
	calidad = (this->area()*4*sqrt(3))/(lado1*lado1+lado2*lado2+lado3*lado3);
	return calidad;
}
void Triangulo::estadisticas(double &perimetro, double &area, double &calidad){
	double lado1,lado2,lado3;
	lado1 = this->ptos[0].distancia(this->ptos[1]);
	lado2 = this->ptos[0].distancia(this->ptos[2]);
	lado3 = this->ptos[1].distancia(this->ptos[2]);
	calidad = (this->area()*4*sqrt(3))/(lado1*lado1+lado2*lado2+lado3*lado3);
	perimetro = (lado1+lado2+lado3);
	area = this->area();
}

int Triangulo::intersecar(const Triangulo &t){
	double tol = 10e-6;
	int count=0;
	for (int i = 0;i<3;i++){
		if ((this->ptos[i].distancia(t.ptos[0]))<tol) count++;
		if ((this->ptos[i].distancia(t.ptos[1]))<tol) count++;
		if ((this->ptos[i].distancia(t.ptos[2]))<tol) count++;
	}
	return count;
}

void Triangulo::print(){
	cout<<"Coordenadas"<<endl;
	for (int i=0;i<3;i++) (this->ptos)[i].print();
}
void Triangulo::direccion(){
	cout<<"Direccion del triangulo: "<<this<<endl;
	cout<<"Direccion guardada: "<<this->ptos<<endl;
}
