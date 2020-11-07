#include <iostream>

using namespace std;

int potencia_n (int n, int p);
int factorial (int n);
int valor_x_n (char a);
void  sumatoria_proceso (int x, int n);

void  sumatoria_proceso (int x, int n)
{
	int a;
	float sumatoria=0, numerador, denominador;
	for (a=1;a<=n;a++)
	{
		if (a==1)
		{
			sumatoria=1+x;
			cout<<"\t1 + "<<x;
		}
		else
		{
			numerador=(potencia_n(x,a));
			denominador=factorial(a);
			sumatoria=sumatoria+numerador/denominador;
			cout<<" + "<<numerador<<" / "<<denominador;
		}
	}
	cout<<" = "<<sumatoria;
	cout<<endl<<endl;
	cout<<"\t\tEl valor de E es: "<<sumatoria<<endl<<endl;
}
int potencia_n (int n, int p)
{
	int i, resultado_pt=1;
	for (i=1;i<p+1;i++)
	{
		resultado_pt*=n;
	}
	return resultado_pt;
}


int factorial (int n)
{
	int i, resultado_fac=1;
	
	for (i=2;i<=n;i++)
	{
		resultado_fac*=i;
	}
	return resultado_fac;
}

int valor_x_n (char a)
{
	int z;
	if (a=='N')
	{	do
		{
	
		cout<<"\t\tDigite el valor de "<<a<<": ";cin>>z;
		cout<<endl<<endl;
		}while (z<0);
	}
	if (a=='X')
	{
		cout<<"\t\tDigite el valor de "<<a<<": ";cin>>z;
		cout<<endl<<endl;
	}
	
	return z;
}
int main (int argc, char* argv[])
{
	int n, x;
	char rt='n';
	cout<<endl<<endl<<"\t\tDado los valores de [X] y [N] Obtener el valor de E mediante la suma de la serie: "<<endl<<endl;
	cout<<"\t\tE = 1 + x + x^2 + x^3 + x^4 +....+ x^n"<<endl;
	cout<<"\t\t            ---   ---   ---        ---"<<endl;
	cout<<"\t\t             2!    3!    4!         N!"<<endl<<endl;
	do
	{
		x=valor_x_n('X');
		n=valor_x_n('N');
		sumatoria_proceso(x,n);
		cout<<"\t\t";printf("%c",168);cout<<"Desea hacer otro calculo? [s/n] : ";cin>>rt;
		cout<<endl<<endl;
	}while (rt!='n');
	return 0;
}

