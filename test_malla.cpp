#include <fstream> 

#include "clase_triangulo.h"
#include "clase_malla.h"


int main(){
    
    int n;
    char fichero1[] = "nodos.txt"; ifstream FichIn;

    FichIn.open(fichero1);

    if (FichIn.bad()){
        cout<< "Error de lectura"<< endl;
        return -1;                         // Si el fichero no puede leerse --> fin programa.
    }
    
    if (!FichIn.eof()) FichIn>> n;     
    Punto *vertices = new Punto[n];

    for (int j = 0; j < n; j++){
        double x, y;
        FichIn>> x>> y;
        vertices[j].setx(x);
        vertices[j].sety(y);
    }
    
    FichIn.close();
    
    char fichero2[] = "triangulos.txt";
    FichIn.open(fichero2);

    int numtr;
    FichIn>> numtr; 
    Malla geom = Malla (numtr);
    // Triangulo auxT = Triangulo ();

    for (int j = 0; j < numtr; j++){
        int v1, v2, v3;
        FichIn>> v1>> v2>> v3;
        geom.Setelement (j,vertices[v1-1], vertices[v2-1], vertices[v3-1]);
    }

    FichIn.close();

   geom.estadisticas();
}
