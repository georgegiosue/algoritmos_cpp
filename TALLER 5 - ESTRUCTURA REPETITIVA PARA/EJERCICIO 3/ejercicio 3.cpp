#include <iostream>
#include <math.h>
using namespace std;

int main (int argc, char* argv[])
{
	int i, a, suma, ultimo_digito;
	
	cout<<"\n\t\t\t\tLos 5 unicos cubos perfectos"<<endl<<endl;
	cout<<"\t";printf("%c",168);cout<<"Que es un cubo perfecto?"<<endl<<endl;
	cout<<"\tEs aquel numero que sumados los cubos de sus digitos no da como resultado el mismo numero."<<endl<<endl;
	cout<<"\tA continuacion se mostraran los 5 unicos cubos perfectos: "<<endl<<endl;
	
	for (i=1;i<1000;i++)
	{
		suma=0;
		a=i;
		while (a!=0)
		{
			ultimo_digito=a%10;
			suma+=(pow(ultimo_digito,3));
			a=a/10;
		}
		if (suma==i)
		{
			cout<<endl<<endl<<"\t\tEl Numero "<<suma<<" es cubo perfecto"<<endl<<endl;
		}
	}	
	return 0;
}

