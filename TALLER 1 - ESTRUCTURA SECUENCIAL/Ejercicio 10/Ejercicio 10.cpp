#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char* argv[])
{
	double ax, ay, bx, by, abX_componente, abY_componente, modulo;		// Declaracion de variables
	cout<<"\t\t\tDistancia entre 2 puntos en un plano [R2]"<<endl<<endl;
	cout<<"\tDigite las Coordenadas del Punto 1"<<endl;
	cout<<endl<<"Componente en [X]: ";cin>>ax;
	cout<<endl<<endl<<"Componente en [Y]: ";cin>>ay;
	cout<<endl<<"\tDigite las Coordenadas del Punto 2"<<endl;
	cout<<endl<<"Componente en [X]: ";cin>>bx;
	cout<<endl<<endl<<"Componente en [Y]: ";cin>>by;
	abX_componente=bx-ax;												// Componente en X de los 2 puntos
	abY_componente=by-ay;												// Componente en Y de los 2 puntos
	modulo=sqrt((pow(abX_componente,2))+(pow(abY_componente,2)));		// modulo
	cout<<endl<<"La distancia entre los 2 puntos P1 y P2 es: "<<modulo<<endl<<endl;
	
	return 0;
}
