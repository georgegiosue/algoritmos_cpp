#include <iostream>
#include <math.h>
using namespace std;

double numerador (int x, int n);

double numerador (int x, int n)
{
	double r_numerador=1;
	
	r_numerador=r_numerador*2*(pow(x,n));
	return r_numerador;
}

int main (int argc, char* argv[])
{
	int x, n, i;
	double sumatoria, numerador_1;
	char rt='n';
	
	cout<<endl<<endl<<"\t\tDado los valores de [X] y [N], calcular el valor de E mediante la suma de la serie: "<<endl<<endl;
	cout<<"\tE = 2x / 2  +  2x^2 / 3  +  2x^3 / 4  + ...... +  2x^N-1 / N"<<endl<<endl;
	
	do
	{
		cout<<"\tDigite el valor de [X]: ";cin>>x;
		cout<<endl<<endl<<"\tDigite el valor de [N]: ";cin>>n;
		
		for (i=2;i<n+1;i++)
		{
			if (i==2)
			{
				numerador_1=numerador(x,i-1);
				sumatoria=numerador_1/i;
				cout<<endl<<endl<<"\t"<<numerador_1<<" / "<<i;
			}
			else
			{
				numerador_1=numerador(x,i-1);
				sumatoria+=numerador_1/i;
				cout<<"  +  "<<numerador_1<<" / "<<i;
			}
			
		}
		cout<<" = "<<sumatoria<<endl<<endl;
		cout<<"\tEl valor de E es: "<<sumatoria<<endl<<endl;
		
		cout<<"\t";printf("%c",168);cout<<"Desea Hacer el calculo para otros valores? [s/n] : ";cin>>rt;
		cout<<endl<<endl;
		
		
	}while (rt!='n');
	
	
	return 0;
}
