#include <iostream>

using namespace std;

double denominador (int a,int n,int b);
int factorial (int n);

double denominador (int a,int n,int b)
{
	double resultado_d;
	
	resultado_d=a+((n-1)*b);	
	return resultado_d;
}

int factorial (int n)
{
	int i, resultado_fac=1;
	
	for (i=2;i<n+2;i++)
	{
		resultado_fac*=i;
	}
	return resultado_fac;
}


int main (int argc, char* argv[])
{
	int a, b, n, may_ab, i;
	double sumatoria, numerador_p, denominador_p;
	char rt='n';
	cout<<endl<<endl<<"\t\tPara 3 numeros enteros positivos a, b y n (n>a, n>b); Calcular la sumatoria:"<<endl<<endl;
	cout<<"\n\t\t1! / a  -  2! / a+b  +  3! / a+2b  -  4! / a+3b  +......+ (N+1)! / a + nb "<<endl<<endl;
	
	do
	{
		do
		{
			cout<<"\n\tDigite el valor de a: ";cin>>a;
			cout<<"\n";
		}while(a<=0);
		
		do
		{
			cout<<"\n\tDigite el valor de b: ";cin>>b;
			cout<<"\n";
		}while(b<=0);
		
		if (a>b)
		{
			may_ab=a;
		}
		else
		{
			may_ab=b;
		}
		
		do
		{
			cout<<"\n\tDigite el valor de n: ";cin>>n;
			cout<<"\n";
		}while(n<=may_ab);
		
		for (i=1;i<n+2;i++)
		{
			if (i==1)
			{
				numerador_p=factorial(i-1);
				denominador_p=denominador(a,i,b);
				sumatoria=numerador_p/denominador_p;
				cout<<endl<<endl<<"\t"<<numerador_p<<" / "<<denominador_p;
			}
			else
			{
				if (i%2==0)
				{
					numerador_p=factorial(i-1);
					denominador_p=denominador(a,i,b);
					sumatoria-=(numerador_p/denominador_p);
					cout<<" - "<<numerador_p<<" / "<<denominador_p;
				}
				else
				{
					numerador_p=factorial(i-1);
					denominador_p=denominador(a,i,b);
					sumatoria+=(numerador_p/denominador_p);
					cout<<" + "<<numerador_p<<" / "<<denominador_p;
				}
			}
			
			
		}
		
		cout<<" = "<<sumatoria<<endl<<endl;
		cout<<"\tEl Resultado de la sumatoria es: "<<sumatoria<<endl<<endl;
		cout<<"\t";printf("%c",168);cout<<"Desea realizar otro calculo? [s/n]: ";cin>>rt;
		cout<<endl<<endl;
		
	}while (rt!='n');
	
	return 0;
}



