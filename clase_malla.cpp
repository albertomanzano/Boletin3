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
void Malla::estadisticas(){
	double size, area, quality;
	double avgsize=0, avgarea=0, avgquality=0;
	double maxsize=0, maxarea=0, maxquality=0;
	double minsize=100, minarea=100, minquality=100;
	for (int i=0; i<this->nt;i++){
	this->T[i].estadisticas(size,area,quality);
		// size
		if (size>maxsize) maxsize=size;
		if (size<minsize) minsize=size;
		// area
		if (area>maxarea) maxarea=area;
		if (area<minarea) minarea=area;
		// quality
		if (quality>maxquality) maxquality=quality;
		if (quality<minquality) minquality=quality;
	avgsize+=size;
	avgarea+=area;
	avgquality+=quality;
	}
	avgsize = avgsize/(double) (this->nt);
	avgarea = avgarea/(double) (this->nt);
	avgquality = avgquality/(double) (this->nt);
cout<<"Maximum triangle size: "<<maxsize<<endl;
cout<<"Minimum triangle size: "<<minsize<<endl;
cout<<"Average triangle size: "<<avgsize<<endl;
cout<<endl;
cout<<"Maximum triangle area: "<<maxarea<<endl;
cout<<"Minimum triangle area: "<<minarea<<endl;
cout<<"Average triangle area: "<<avgarea<<endl;
cout<<endl;
cout<<"Maximum triangle quality: "<<maxquality<<endl;
cout<<"Minimum triangle quality: "<<minquality<<endl;
cout<<"Average triangle quality: "<<avgquality<<endl;
cout<<endl;
}

