#include <iostream>

using namespace std;

int main(int argc, char* argv[]) 
	{
		double base, altura, area, perimetro;  // Declaracion de variables
		cout<<"\t\t\tArea y Perimetro de un rectangulo en (cm)"<<endl<<endl;
		cout<<"Digite la medida de la base: ";
		cin>>base;
		cout<<endl<<endl<<"Digite la medida de la altura: ";
		cin>>altura;
		area=base*altura;			// Area
		perimetro=(base+altura)*2;	// Perimetro
		cout<<endl<<endl<<"El area del rectangulo es: "<<area<<" cm^2"<<" y su perimetro es: "<<perimetro<<" cm";
		
	}
