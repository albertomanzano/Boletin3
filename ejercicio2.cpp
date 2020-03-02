#include "complex.h" // En complex.h ya se importa <iostream>

// Programa principal; 

int main(){

    // Inicializacion de 2 objetos de la clase "complejo"

    complejo z = complejo (1.0, -2.0);
    cout<< "z = "<< z<< endl;
    complejo w = complejo (-3.0, 4.0);
    cout<< "w = "<< w<< endl;

    // Aplicacion de metodos

    cout<< "Conjugado de z"<< endl;
    cout<< z.conjugado()<< endl;

    cout<< "Suma de complejos:"<< endl;
    cout<< "z + w = "<< z + w<< endl;

    cout<< "Resta de complejos"<<endl;
    cout<< "z - w = "<< z - w<< endl;

    cout<< "Producto de complejos"<< endl;
    cout<< "z * w = "<< z * w<< endl;

    cout<< "Cociente de complejos"<< endl;
    cout<< "z / w = "<< z / w<< endl;

    w.cambiar(0.0, 0.0);
    cout<< "z / w = "<< z / w<< endl;
}