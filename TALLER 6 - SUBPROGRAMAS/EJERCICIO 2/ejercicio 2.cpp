#include <iostream>

using namespace std;

int potencia_n (int n, int p);
int factorial (int n);

int potencia_n (int n, int p)
{
	int i;
	double resultado_pt=1;
	
	for (i=1;i<p+1;i++)
	{
		resultado_pt*=n;
	}
	
	return resultado_pt;
}

int factorial (int n)
{
	int i, resultado_fac=1;
	
	for (i=2;i<n+1;i++)
	{
		resultado_fac*=i;
	}
	
	return resultado_fac;
}

int main (int argc, char* argv[])
{
	int x, n, a;
	char rt='n';
	double numerador, denominador, sumatoria=0;
	
	cout<<endl<<endl<<"\t\tDado los valores de [X] y [N] Obtener el valor de E mediante la suma de la serie: "<<endl<<endl;
	cout<<"\tE = 1 + x + x^2 / 2! + x^3 / 3! + ...... + x^n / N! "<<endl<<endl;
	
	do
	{
		cout<<"\tDigite el valor de [X]: ";cin>>x;
		cout<<endl<<endl<<"\tDiite el valor de [N]: ";cin>>n;
		
		for (a=1;a<n+1;a++)
		{
			if (a==1)
			{
				sumatoria=1+x;
				cout<<endl<<endl<<"\t1 + "<<x;
			}
			else
			{
				numerador=(potencia_n(x,a));
				denominador=factorial(a);
				sumatoria=sumatoria+(numerador/denominador);
				cout<<" + "<<numerador<<" / "<<denominador;
			}
			
			
		}
		cout<<" = "<<sumatoria<<endl<<endl;
		cout<<"\tEl valor de E es: "<<sumatoria<<endl<<endl;
		
		cout<<"\t";printf("%c",168);cout<<"Desea hacer otro calculo? [s/n] : ";cin>>rt;
		cout<<endl<<endl;
	}while (rt!='n');
	
	
	return 0;
}



