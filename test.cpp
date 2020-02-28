#include <iostream>
#include "clase_punto.h"
using namespace std;

int main(){
Punto p1 = Punto(2,3);
Punto p2 = Punto(p1);

cout<<"Al principio p2 vale"<<endl;
p2.print();
cout<<endl;

cout<<"Despues hacemos un swap con los geters y seters p2 vale"<<endl;
double x,y;
x = p1.getx();
y = p1.gety();
p2.setx(y);
p2.sety(x);
p2.print();
cout<<endl;

cout<<"Despues lo trasladamos 2 unidades y vale: "<<endl;
p2.trasladar(2,2);
p2.print();
cout<<endl;

cout<<"Sumandolo al primer punto vale: "<<endl;
p2.trasladar(p1);
p2.print();
cout<<endl;

}
