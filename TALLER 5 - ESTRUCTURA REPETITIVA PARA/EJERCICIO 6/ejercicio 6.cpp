#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int num, i, a, b2;
	char rt='n';
	
	cout<<endl<<endl<<"\t\tConvertir Numero entero [BASE 10] a binario [BASE 2]"<<endl<<endl;
	
	do
	{
		do
		{
			cout<<"\n\tDigite el numero a convertir: ";cin>>num;
			
		}while (num<=0);
		cout<<endl<<endl<<"\tEl numero "<<num<<" convertido a [BASE 2] es el siguiente: "<<endl<<endl;
		
		for (i=1;i<num;i++)
		{
			a=num;
			b2=0;
			i=1;
			
			while (a!=1)
			{
				b2+=(a%2)*i;
				a/=2;
				i*=10;
			}
			
			b2+=(a%2)*i;
			cout<<"\t"<<b2<<endl;
		}
		
	cout<<endl<<endl<<"\t";printf("%c",168);cout<<"Desea hacer otro calculo? [s/n] : ";cin>>rt;
	
	if (rt!='s')
	{
		rt='n';
	}	
	}while (rt!='n');
		
	return 0;
}
