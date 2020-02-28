#include <iostream>
#ifndef PUNTO_H
#define PUNTO_H

class Punto{
private:
	double x;
	double y;
public:
	Punto(double x,double y);// Constructor simple

	// Rule of five
	Punto(const Punto &p);// Constructor copia
	~Punto();// Destructor
	Punto& operator=(const Punto &p);

	// Geters
	double getx();
	double gety();
	// Setters
	void setx(double x);
	void sety(double y);

	// Trasladar
	void trasladar(double a, double b);
	void trasladar(const Punto &p);


	void print();
};
#endif
