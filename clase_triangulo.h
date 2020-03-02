#include "clase_punto.h"
#ifndef TRIANGULO_H
#define TRIANGULO_H

class Triangulo{
private:
	Punto* ptos;
public:
	Triangulo();
	Triangulo(const Punto &a, const Punto &b, const Punto &c);
	Triangulo(const Triangulo &t);
	Triangulo(Punto* &p);
	Triangulo(const double* &p);
	Triangulo& operator=(const Triangulo& triangulo);

	~Triangulo();
	void print();
	void direccion();
};
#endif
