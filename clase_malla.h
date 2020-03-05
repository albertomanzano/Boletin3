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
        Malla(int &nelem);
        Malla(int &nelem, Triangulo* &elementos);
        ~Malla();
        void Setelement(int k, Triangulo &Tk);
	void Setelement(int k,Punto &p1,Punto &p2, Punto &p3);
        int numelement();
        bool tsize(double &armalla, double &smax, double &smin);
        double area();

};
#endif
