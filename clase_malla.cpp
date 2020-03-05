#include "clase_triangulo.h"
#include "clase_malla.h"


// Constructor por defecto ==============================================================

Malla::Malla (int &nelem){
    if (nelem != 0){
        this-> nt = nelem;
        this-> T = new Triangulo[this-> nt];
    }
    else{
        this-> T = nullptr;
    }
}

// A partir de un puntero de objetos Triangulo ==========================================

Malla::Malla (int &nelem, Triangulo* &elementos){
    for (int k = 0; k < nelem; k++) this-> T[k] = elementos[k];
}

// Destructor ==========================================================================

Malla::~Malla(){
    if (this-> T != nullptr){
        delete[] this-> T;
    }
}

// Resetear vertice(s) de un triangulo de la malla ======================================

void Malla:: Setelement (int k, Triangulo &Tk){
    this-> T[k] = Tk;
}
// Resetear vertice(s) de un triangulo de la malla ======================================

void Malla:: Setelement (int k, Punto &p1, Punto&p2, Punto &p3){
    this-> T[k].setPtos(p1,p2,p3);
}

// Numero de elementos que componen la malla ============================================

int Malla:: numelement (){
    return this-> nt;
}

// Dimension de los elementos y calculo del area ========================================

bool Malla:: tsize (double &armalla, double &smax, double &smin){
    smax = 0.0; smin = 1e38;
    armalla = 0.0;
    double artr;

    for (int k = 0; k < this-> nt; k++){
        artr = this-> T[k].area();
        if (artr > smax){
            smax = artr;
        }
        else if (artr < smin){
            smin = artr;
        }
        armalla += artr;
    }
    return (smin < smax) ? false:true;
}

// Calculo del area =====================================================================

double Malla:: area (){
    double a = 0.0;
    for (int k = 0; k < this-> nt; k++){
        a += this-> T[k].area();
    }
    return a;
}
