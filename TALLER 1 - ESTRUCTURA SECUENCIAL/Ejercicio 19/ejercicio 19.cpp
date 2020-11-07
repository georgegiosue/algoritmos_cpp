#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char* argv[])
{
	double radio, volumen;												// Declaracion de variables
	cout<<"\t\t\tCalculo del volumen de una Esfera"<<endl<<endl;
	cout<<endl<<"Digite el radio de la esfera en [cm]: ";cin>>radio;
	volumen=((4*M_PI)/3)*(pow(radio,3));								// Volumen de la esfera
	cout<<endl<<endl<<"El Volumen de la esfera es: "<<volumen<<" cm^3"<<endl<<endl;
	
	return 0;
}
