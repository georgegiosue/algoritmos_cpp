#include <iostream>
#include <math.h>
using namespace std;

int main (int argc, char* argv[])
{
	double a, b;
	
	cout<<"\t\t\tCalcular el valor de la Funcion F dado 2 numeros"<<endl<<endl;
	cout<<"F = (A^1/2) * B Si A < B"<<endl<<endl;
	cout<<"F = A^2 + B Si A > B y B < 0"<<endl<<endl;
	cout<<"F = A - B Si A > B y B >= 0"<<endl<<endl;
	cout<<endl<<"Digite el primer numero [A]: ";cin>>a;
	cout<<endl<<endl<<"Digite el segundo numero [B]: ";cin>>b;
	
	if (a<b)
	{
		if (a>=0)
		{
			cout<<endl<<"El valor de la funcion es: "<<(sqrt(a))*b<<endl<<endl;
		}
		else
		{
			cout<<endl<<"El primer numero no debe ser negativo por tratarse de una raiz cuadrada"<<endl<<endl;
		}
		
	}
	
	if (a>b && b<0)
	{
		
		cout<<endl<<"El valor de la funcion es: "<<(pow(a,2))+b<<endl<<endl;
		
	}
	
	if (a>b && b>=0)
	{
		
		cout<<endl<<"El valor de la funcion es: "<<a-b<<endl<<endl;
		
	}
	
	
	
	return 0;
}
