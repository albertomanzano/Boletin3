#include "complex.h"

/*
CLASE complejo:
  - real --> parte real (double)
  - imag --> parte imaginaria (double)
*/

// Constructor ====================================================================================

complejo::complejo (double real, double imag){
    this->real = real;
    this->imag = imag;
}

// Cambiar componentes de un objeto "complejo" existente ==========================================

void complejo::cambiar (double a, double b){
    this->real = a;
    this->imag = b;
}

// Metodo complejo conjugado ======================================================================

complejo complejo:: conjugado (){
    complejo conj = complejo (this->real, - this->imag);
    return conj;
}

// Sobrecarga asignacion ==========================================================================

complejo &complejo::operator =(const complejo &other){
    this->real = other.real;
    this->imag = other.imag;
    return *this;
}

// Sobrecarga operador "+" ========================================================================

complejo complejo::operator +(const complejo &other){
    complejo suma = complejo (this->real + other.real, this->imag + other.imag);
    return suma;
}

// Sobrecarga operador "-" ========================================================================

complejo complejo::operator -(const complejo &other){
    complejo resta = complejo (this->real - other.real, this->imag - other.imag);
    return resta;
}

// Sobrecarga operador "*" ========================================================================

complejo complejo::operator *(const complejo &other){
    double r, i;
    r = this->real * other.real - this->imag * other.imag;
    i = this->real * other.imag + this->imag * other.real;
    return complejo (r, i);
}

// Sobrecarga operador "/" ========================================================================

complejo complejo::operator /(const complejo &other){
    
    double i = other.real*other.real + other.imag*other.imag;
    if (i > 0){
        double r;
        r = (this->real * other.real + this->imag * other.imag) / i;
        i = (this->imag * other.real - this->real * other.imag) / i;
        return complejo (r, i);
    }
    else{
        cout<< "Error! Division por complejo: 0 + 0i"<< endl;  // como evitar el return??
    }
}

// Sobrecarga operador "==" =======================================================================

bool complejo::operator ==(const complejo &other){
    double a = abs(this->real - other.real);        // diferencia entre sendas componentes
    double b = abs(this->imag - other.imag);

    if (a > 0 || b > 0){
        return false;
    }
    else{
        return true;
    }
}

// Sobrecarga operador "!=" =======================================================================

bool complejo::operator !=(const complejo &other){
    bool resultado = *this == other;                // lo contrario al resultado de aplicar "=="
    return true - resultado;
}

// Sobrecarga operador "<<" =======================================================================

ostream& operator <<(ostream &salida, const complejo &other){
    salida<< other.real<< showpos<< other.imag<< "i"<< endl;
    return salida;
}

// Destructor =====================================================================================

complejo::~complejo(){}