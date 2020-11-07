#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int num1, num2, selector;			// Declaracion de variables
	cout<<"\t\t\tCalculadora Basica (+,-.*,/) [Numeros Enteros]"<<endl<<endl;
	cout<<endl<<"Digite el primer numero: ";cin>>num1;
	cout<<endl<<"Digite el segundo numero: ";cin>>num2;
	cout<<endl<<endl<<"Seleccion de la Operacion";
	cout<<endl<<"1: SUMA [+]";
	cout<<endl<<"2: DIFERENCIA [-]";
	cout<<endl<<"3: MULTIPLICACION [*]";
	cout<<endl<<"4: DIVISION [/]";
	cout<<endl<<endl<<"Digite el numero que contiene al operador para seleccionar: ";cin>>selector;
	 
	if (selector==1)
	{
		cout<<endl<<"La suma es: "<<num1+num2<<endl;					// Suma
	}
	
	else 
	{
		if (selector==2)
		{
			cout<<endl<<"La diferencia es: "<<num1-num2<<endl;			// Diferencia
		}
		
		else 
		{
			if (selector==3)
			{
				cout<<endl<<"La multiplicacion es: "<<num1*num2<<endl;	// Multiplicacion
			}
			
			else
			{
				if (selector==4)
				{
					cout<<endl<<"La division es: "<<num1/num2<<endl;	// Division
				}
			}
		}
	}
	
	return 0;
}
