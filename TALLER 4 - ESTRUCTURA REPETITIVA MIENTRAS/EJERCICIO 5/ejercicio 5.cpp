#include<iostream>

using namespace std;


int main(int argc, char* argv[]) 
{
	int a, i, mcd, menor_, n1, n2, n3, num;

	char rt;
	rt='s';
	i=0;
	a=0;
	menor_=999999;
	
	cout<<endl<<endl<<"\t\tMaximo Comun Divisor de 3 numeros"<<endl<<endl;
	
	while (rt!='n') 
	{
		do 
		{
			a = a+1;
			cout << "\n\tDigite un numero: ";cin>>num;
			
			switch (a) 
			{
			case 1:
				n1 = num;
				break;
			case 2:
				n2 = num;
				break;
			case 3:
				n3 = num;
				break;
			}
			
			if (num<menor_) 
			{
				menor_=num;
			}
			
		} while (a<3);
		
		do 
		{
			i = i+1;
			if (n1%i==0 && n2%i==0 && n3%i==0) 
			{
				mcd = i;
			}
		} while (i<menor_);
		
		cout<<endl<<endl<<"\t\t\tEl MCD de "<<n1<<", "<<n2<<", "<<n3<<" Es: "<<mcd<<endl<<endl;
		printf("%c",168);cout<<"Desea hacer otro calculo? [s/n] : ";cin>>rt;
		
		
		if (rt=='s') 
		{
			i=0;
			a=0;
			menor_=999999;
		} 
		else 
		{
			rt='n';
		}
	}
	return 0;
}
