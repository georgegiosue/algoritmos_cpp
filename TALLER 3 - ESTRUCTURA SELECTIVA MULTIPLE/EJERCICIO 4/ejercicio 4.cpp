#include <iostream>
#include <string.h>
using namespace std;

int main (int argc, char* argv[])
{
	int valor1, valor2;
	char carta1, carta2;
	
	cout<<"\t\tSuma de los valores dado 2 cartas"<<endl<<endl;
	cout<<"Digite el valor de la primera carta: ";cin>>carta1;
	cout<<endl<<endl<<"Digite el valor de la segunda carta: ";cin>>carta2;

	switch (carta1,2)
			{
				case 'a':valor1=1;break;
				case '2':valor1=2;break;
				case '3':valor1=3;break;
				case '4':valor1=4;break;
				case '5':valor1=5;break;
				case '6':valor1=6;break;
				case '7':valor1=7;break;
				case '8':valor1=8;break;
				case '9':valor1=9;break;
				case '1':valor1=10;break;
				case 'j':valor1=11;break;
				case 'q':valor1=12;break;
				case 'k':valor1=13;break;
				default:valor1=0;break;
			}
			
			switch (carta2,2)
			{
				case 'a':valor2=1;break;
				case '2':valor2=2;break;
				case '3':valor2=3;break;
				case '4':valor2=4;break;
				case '5':valor2=5;break;
				case '6':valor2=6;break;
				case '7':valor2=7;break;
				case '8':valor2=8;break;
				case '9':valor2=9;break;
				case '1':valor2=10;break;
				case 'j':valor2=11;break;
				case 'q':valor2=12;break;
				case 'k':valor2=13;break;
				default:valor1=0;break;
			}
		if (valor1!=0 && valor2!=0)
		{
		cout<<endl<<endl<<"RESULTADO"<<endl<<endl;
		cout<<"La suma de los valores es: "<<valor1+valor2<<endl<<endl;
		}
	else
	{
	
		cout<<endl<<endl<<"Los datos ingresados son ¡NO VALIDOS!"<<endl<<endl;
	}
	
	return 0;
}
