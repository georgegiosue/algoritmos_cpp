#include<iostream>

using namespace std;

int main(int argc, char* argv[]) 
{
	int i, max, mcm, n1, n2, n3;

	char rt;
	rt = 's';
	cout<<"\n\t\tMinimo Comun Multiplo de 3 numeros"<<endl<<endl<<endl;
	do 
	{
		cout<<"\tDigite en primer numero: ";cin>>n1;
		
		cout<<endl<<endl<<"\tDigite el segundo numero: ";cin>>n2;
		
		cout<<endl<<endl<<"\tDigite el tercer numero: ";cin>>n3;
		
		max = n1;
		if (n2>max) 
		{
			max = n2;
		}
		if (n3>max) 
		{
			max = n3;
		}
		mcm = 1;
		i = 2;
		do 
		{
			if (n1%i==0 || n2%i==0 || n3%i==0) 
			{
				if (n1%i==0) 
				{
					n1 = n1/i;
				}
				if (n2%i==0) 
				{
					n2 = n2/i;
				}
				if (n3%i==0) 
				{
					n3 = n3/i;
				}
				mcm = mcm*i;
				i = 1;
			}
			if (n1%i==0 || n2%i==0 || n3%i==0) 
			{
				mcm = mcm*i;
				i = 1;
			}
			i = i+1;
		} while (i<max);
		cout<<"\n\t\t\t\tEl Minimo Comun Multiplo es: "<<mcm<<endl<<endl<<endl;
		printf("%c",168);cout<<"Desea calcular para otros 3 numeros? [s/n]: "<<endl;
		cin >> rt;
		if (rt=='s') 
		{
			mcm = 1;
			i = 2;
		} 
		else 
		{
			rt = 'n';
		}
	} while (rt!='n');
	
	return 0;
}

