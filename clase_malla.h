#include <iostream>
#include "clase_triangulo.h"

using namespace std;

#ifndef MALLA_H
#define MALLA_H

class Malla{
    private:
        int nt;
        Triangulo *T;
    public:
	// Constructor
        Malla(int &nelem);
	// Destructor
        ~Malla();

	// Setters
        void Setelement(int k, Triangulo &Tk);
	void Setelement(int k,Punto &p1,Punto &p2, Punto &p3);

	// ?
        int numelement();
        bool tsize(double &armalla, double &smax, double &smin);

	// Funciones
        double area();// Calculo area
	void estadisticas();// Estadisticas de la malla

};
#endif
