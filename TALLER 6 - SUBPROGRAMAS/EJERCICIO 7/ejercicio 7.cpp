#include <iostream>

using namespace std;

int base2_base10 (int z);

int base2_base10 (int z)
{
	int i, base10, a;
	
	for (i=1;i<2;i++)
	{
		a=z;
		base10=0;
		i=1;
		
		while (a!=1)
		{
			base10+=((a%10)*i);
			a= int(a/10);
			i*=2;
		}
		base10+=((a%10)*i);
	}
	
	return base10;
}


int main (int argc, char* argv[])
{
	int num, resultado;
	char rt='n';
	
	cout<<endl<<endl<<"\t\tConvertir Numero entero binario [BASE 2] a [BASE 10]"<<endl<<endl;
	
	do
	{
		do
		{
			cout<<"\n\tDigite el numero a convertir (entero positivo): ";cin>>num;
			
		}while (num<=0);
		cout<<endl<<endl<<"\tEl numero binario "<<num<<" convertido a [BASE 10] es el siguiente: "<<endl<<endl;
		resultado=base2_base10(num);
		cout<<"\t"<<resultado;
		cout<<endl<<endl<<"\t";printf("%c",168);cout<<"Desea hacer otro calculo? [s/n] : ";cin>>rt;
	
		if (rt!='s')
		{
			rt='n';
		}	
	}while (rt!='n');
	return 0;
}
