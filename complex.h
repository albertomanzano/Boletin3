#include <iostream>
using namespace std;

#ifndef COMPLEX_H
#define COOMPLEX_H

class complejo{
    friend ostream &operator <<(ostream &salida, const complejo &other);
    private:
        double real;
        double imag;
    public:
        complejo (double real, double imag);
        void cambiar (double a, double b);
        complejo conjugado();
        complejo &operator =(const complejo &other);
        complejo operator +(const complejo &other);
        complejo operator -(const complejo &other);
        complejo operator *(const complejo &other);
        complejo operator /(const complejo &other);
        bool operator ==(const complejo &other);
        bool operator !=(const complejo &other);
        ~complejo();
};
#endif