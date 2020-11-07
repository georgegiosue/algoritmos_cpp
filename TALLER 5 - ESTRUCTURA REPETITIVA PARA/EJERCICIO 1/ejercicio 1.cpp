#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int i, a, conteo, start;
	
	cout<<"\n\n\t\t\tNumeros Primos de 3 digitos"<<endl<<endl;
	cout<<"\t";printf("%c",168);cout<<"Que es un numero primo?"<<endl<<endl;
	cout<<"\t_ Es aquel numero que solo es divisible entre el mismo y la unidad."<<endl<<endl;
	cout<<"\n\tA continuacion se le mostrara solo los numeros primos de 3 digitos: "<<endl<<endl;
	cout<<"\tDigite el [0] para mostrar los numeros: ";cin>>start;
	
	for (i=100;i<=999;i++)
	{
		conteo=0;
		
		for (a=1;a<=i;a++)
		{
			if (i%a==0)
			{
				conteo++;
			}
		}
		
		if (conteo==2)
		{
			cout<<endl<<endl<<"\t\t\t"<<i;
		}
	}	
	return 0;
}
