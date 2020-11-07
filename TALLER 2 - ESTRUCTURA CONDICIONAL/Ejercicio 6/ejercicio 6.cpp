#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	double a, b, c;		// Declaracion de variables
	
	cout<<"\t\t\tCalculo para determinar si un triangulo es Equilatero, Escaleno o Isosceles"<<endl<<endl;
	cout<<endl<<"Ingrese la medida del primer lado: ";cin>>a;
	cout<<endl<<endl<<"Ingrese la medida del segundo lado: ";cin>>b;
	cout<<endl<<endl<<"Ingrese la medida del tercer lado: ";cin>>c;
	
	if (a==b && a==c && b==c)		// Triangulo Equilatero
	{
		cout<<endl<<endl<<"La medida de los lados ingresados dan como Respuesta un Triangulo Equilatero."<<endl<<endl;		
	}
	
	if (a!=b && a!=c && b!=c)		// Triangulo Escaleno
	{
		cout<<endl<<endl<<"La medida de los lados ingresados dan como Respuesta un Triangulo Escaleno."<<endl<<endl;
	}
	
	if (a==b && c!=a && c!=b || a==c && b!=a && b!=c || b==c && a!=b && a!=c )		// Triangulo Isosceles
	{
		cout<<endl<<endl<<"La medida de los lados ingresados dan como Respuesta un Triangulo Isosceles."<<endl<<endl;
	}
	
	return 0;
}
