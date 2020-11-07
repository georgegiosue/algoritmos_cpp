#include <iostream>

using namespace std;

int denominador (int i);

int denominador (int i)
{
	int d;
	
	d=2*i*(i+1);
	return d;
}

int main (int argc, char* argv[])
{
	int i, n;
	char rt='n';
	
	cout<<endl<<endl<<"\t\tImprimir los [N] terminos de la serie: "<<endl<<endl;
	cout<<"\t1/4 , 1/12 , 1/24 , 1/40 , 1/60 , ......."<<endl<<endl;
	do
	{
		do
		{
			cout<<"\tDigite el valor de [N]: ";cin>>n;
		}while (n<=0);
		cout<<endl<<endl<<"\t";
		for (i=1;i<=n;i++)
		{
			if (i<n)
			{
				cout<<1<<"/"<<denominador(i)<<" ; ";
			}
			else
			{
				cout<<1<<"/"<<denominador(i)<<endl<<endl;
			}
		}
		
		cout<<"\t";printf("%c",168);cout<<"Desea calcular para otro valor? [s/n] : ";cin>>rt;
		cout<<endl<<endl;
		
	}while (rt!='n');
	
	return 0;
}
