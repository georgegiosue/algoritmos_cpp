#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	double peso_libras, peso_kilogramo, longitud_pies, longitud_metros;			//Declaracion de variables
	cout<<"\t\t\tConversion de Libras a Kilogramos y Pies a Metros"<<endl<<endl;
	cout<<endl<<endl<<"Digite el peso en libras: ";cin>>peso_libras;
	cout<<endl<<endl<<"Digite la longitud en pies: ";cin>>longitud_pies;
	peso_kilogramo=peso_libras/2.2046;											// Peso en Kilogramos
	longitud_metros=longitud_pies/3.2808;										// Longitud en metros
	cout<<endl<<endl<<"RESULTADOS:"<<endl;
	cout<<endl<<"Peso: "<<peso_kilogramo<<" Kg.";
	cout<<endl<<"Longitud: "<<longitud_metros," metros.";
	
	return 0;	
}
