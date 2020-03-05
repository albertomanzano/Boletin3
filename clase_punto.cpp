#include <iostream>
#include "clase_punto.h"
#include "math.h"
using namespace std;

// Constructores
Punto::Punto(double x,double y){
	this->x = x;
	this->y = y;
}
Punto::Punto(){
	this->x = 0;
	this->y = 0;
}

// Rule of three
// Constructor copia
Punto::Punto(const Punto &p){
	this->x = p.x;
	this->y = p.y;
}
// Funcion destruir
Punto::~Punto(){
}
// Funcion asignacion
Punto& Punto::operator=(const Punto &p)
{
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
double Punto::distancia(const Punto &p){
	double aux1,aux2;
	aux1 = (this->x-p.x)*(this->x-p.x);
	aux2 = (this->y-p.y)*(this->y-p.y);
	return (sqrt(aux1+aux2));
}
