#include <iostream>
#include "clase_punto.h"
using namespace std;

// Constructores
Punto::Punto(double x,double y){
	cout<<"Creado un punto con coordenadas direccion "<<this<<" ";
	this->x = x;
	this->y = y;
	this->print();
}
Punto::Punto(){
	cout<<"Creado un punto por defecto direccion "<<this<<" ";
	this->x = 0;
	this->y = 0;
	this->print();
}

// Rule of three
// Constructor copia
Punto::Punto(const Punto &p){
	cout<<"Creado un punto por copia direccion "<<this<<" ";
	this->x = p.x;
	this->y = p.y;
	this->print();
}
// Funcion destruir
Punto::~Punto(){
	cout<<"Destruido un punto direccion "<<this<<endl;
}
// Funcion asignacion
Punto& Punto::operator=(const Punto &p)
{
	cout<<"Asignado un punto direccion "<<this<<" a direccion: "<<&p<<endl;
	if (this != &p ){
		this->x = p.x;
		this->y = p.y;
	}
	return *this;
}

// Funcion imprimir
void Punto::print(){
	cout<<"X: "<<this->x<<" Y: "<<this->y<<endl;
}

// Funciones geter
double Punto::getx(){
	return this->x;
}
double Punto::gety(){
	return this->y;
}

//Funciones seter
void Punto::setx(double x){
	this->x = x;
}
void Punto::sety(double y){
	this->y = y;
}

// Funciones trasladar
void Punto::trasladar(double a, double b){
	this->x = this->x+a;
	this->y = this->y+b;
}
void Punto::trasladar(const Punto &p){
	this->x = this->x+p.x;
	this->y = this->y+p.y;
}
