#include "clase_punto.h"
#ifndef TRIANGULO_H
#define TRIANGULO_H

class Triangulo{
private:
	Punto* ptos;
public:
	// Constructores
	Triangulo();// Basico
	Triangulo(const Punto &a, const Punto &b, const Punto &c);// Mediante objetos punto
	Triangulo(const Triangulo &t);// Copia
	Triangulo(Punto* &p);// Vector de puntos
	Triangulo(double* &p);// Vector de doubles

	// Operador =
	Triangulo& operator=(const Triangulo& triangulo);

	// Destructor
	~Triangulo();

	// Setters
	void setPtos(Punto &a,Punto &b,Punto &c);// Mediante objeto punto
	void setPtos(Punto* &a);// Mediante array puntos
	void setPto(int i, Punto &a);// Cambio de un solo punto

	// Getters
	Punto getPto(int i);

	// Funciones generales
	double area();// Calculo de area
	double perimetro();// Calculo del perimetro
	double calidad();// Calculo calidad
	void estadisticas(double &perimetro,double &area,double &calidad);// Calculo de las tres anteriores
	int intersecar(const Triangulo &t);// Devuelve el numero de puntos en comun

	// Prints
	void direccion();// Direccion en la que se guarda y direccion a donde apunta
	void print();// Coordenadas del triangulo
};
#endif
