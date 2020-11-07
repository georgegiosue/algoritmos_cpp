#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	double gasol_litros, gasol_galones;		// Declaracion de variables
	cout<<"\t\t\tConvertir Galones a Litros para optener precio"<<endl<<endl;
	cout<<endl<<"Digite la cantidad de Galones: ";cin>>gasol_galones;
	gasol_litros=gasol_galones/0.2642;		// Galones a litros
	cout<<endl<<endl<<"Usted debe cobrarse por: "<<gasol_litros<<" litros"<<endl<<endl;
	
	return 0;
}
