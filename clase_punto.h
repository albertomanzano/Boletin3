#include <iostream>
#ifndef PUNTO_H
#define PUNTO_H

class Punto{
private:
	double x;
	double y;
public:
	// Constructores
	Punto();// Por defecto
	Punto(double x,double y);// Por coordenadas
	Punto(const Punto &p);// Constructor copia

	// Destructor
	~Punto();
	// Operador =
	Punto& operator=(const Punto &p);

	// Geters
	double getx();
	double gety()
;
	// Setters
	void setx(double x);
	void sety(double y);

	// Trasladar
	void trasladar(double a, double b);
	void trasladar(const Punto &p);


	void print();

	// Distancia
	double distancia(const Punto &p);
};
#endif
