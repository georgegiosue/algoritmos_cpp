#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	double centimetros, kilometros;		// Declaracion de variables
	cout<<"\t\t\tConversion de Centimetros a Kilometros";
	cout<<endl<<endl<<"Digite su cantidad en centimetros: ";
	cin>>centimetros;
	kilometros=centimetros/100000; 		// Kilometros
	cout<<endl<<"Su equivalente es: "<<kilometros<<" km.";
}
