#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int num, i, a, b10;
	char rt='n';
	
	cout<<endl<<endl<<"\t\tConvertir Numero entero binario [BASE 2] a [BASE 10]"<<endl<<endl;
	
	do
	{
		do
		{
			cout<<"\n\tDigite el numero a convertir: ";cin>>num;
			
		}while (num<=0);
		cout<<endl<<endl<<"\tEl numero binario "<<num<<" convertido a [BASE 10] es el siguiente: "<<endl<<endl;
		
		for (i=1;i<2;i++)
		{
			a=num;
			b10=0;
			i=1;
			
			while (a!=1)
			{
				b10+=(a%10)*i;
				a/=10;
				i*=2;
			}
			
			b10+=(a%10)*i;
			cout<<"\t"<<b10<<endl;
		}
		
	cout<<endl<<endl<<"\t";printf("%c",168);cout<<"Desea hacer otro calculo? [s/n] : ";cin>>rt;
	
	if (rt!='s')
	{
		rt='n';
	}	
	}while (rt!='n');
		
	return 0;
}
