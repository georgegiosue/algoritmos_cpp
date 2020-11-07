#include <iostream>

using namespace std;

double seriefibonacci (int n);

double seriefibonacci (int n)
{
	double a=0, b=1, i, resultado_serie;
	
	cout<<"\n\n\t"<<0;
	
	for (i=1;i<n+1;i++)
	{
		resultado_serie=a+b;
		a=b;
		b=resultado_serie;
		
		if (i<=n-1)
		{
			cout<<" + "<<a;
		}
		
	}	
	return resultado_serie;
}

int main (int argc, char* argv[])
{
	int n;
	char rt='n';
	double resultado=0;
	
	cout<<endl<<endl<<"\t\tSuma de los [N] primeros terminos de la serie de Fibonacci"<<endl<<endl;
	
	do
	{
		do
		{
			cout<<"\tDigite el valor de [N] : ";cin>>n;
			
		}while (n<=0);
		
		resultado=seriefibonacci(n)-1;
		cout<<" = "<<resultado<<endl<<endl;
		cout<<"\n\tLa suma de los "<<n<<" primeros terminos de la serie de Fibonacci es: "<<resultado;
		cout<<endl<<endl<<"\t";printf("%c",168);cout<<"Desea realizar otro calculo? [s/n] : ";cin>>rt;
		cout<<endl<<endl;	
	}while (rt!='n');
	return 0;
}
