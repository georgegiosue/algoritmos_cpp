#include<iostream>
#include<math.h>

using namespace std;

int main(int argc, char* argv[]) 
{
	int a, i, n, x;
	float denominador, factorial, numerador, sumatoria;

	cout<<endl<<endl<<"Dado el valor de X, determinar la suma de los N primeros terminos de la serie:"<<endl<<endl;
	cout<<"\tX/2! + (2X^2)/4! + (3X^3)/6! ..... + (NX^n)/2N!"<<endl<<endl;
	cout<<"Digite el valor de X: ";cin>>x;
	cout<<"\nDigite el valor de N: ";cin>>n;
	
	numerador = 1;
	denominador = 2;
	factorial = 1;
	i = 0;
	a = 1;
	do 
	{
		i = i+1;
		if (i==1) 
		{
			numerador = x;
			cout <<"\n"<< numerador << "/" << denominador;
			sumatoria=(numerador/denominador);
		} 
		else 
		{
			denominador = denominador+2;
			do 
			{
				a = a+1;
				factorial = factorial*a;
			} while (a<denominador);
			numerador = (pow(x,i))*i;
			sumatoria+=(numerador/factorial);
			if (i<n) 
			{
				cout << " + " << numerador << "/" << factorial;
			} 
			else 
			{
				cout << " = ";
			}
		}
	} while (i<n);
	cout<<sumatoria<<endl;
	
	return 0;
}

