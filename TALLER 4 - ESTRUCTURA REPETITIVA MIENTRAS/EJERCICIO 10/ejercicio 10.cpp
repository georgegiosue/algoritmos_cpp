#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{ 
	int a;
	int div;
	int i;
	int num;
	int perfecto;
	char rt;
	i = 0;
	a = 2;
	perfecto = 0;
	rt = 's';
	cout <<endl<<endl<<"\tCalcular si un numero es perfecto, mostrando sus divisores"<<endl<<endl;
	while (rt!='n') 
	{	
		cout<<endl<<endl<<"Digite un numero: ";cin>>num;
		
		if (num>0) {
			do 
			{
				if (num%a==0)
				{ 
					perfecto = perfecto+(num/a);
				}
				a = a+1;
			} while (a<=num);
			
			if (perfecto==num) 
			{	cout<<endl<<endl<<"El numero "<<num<<" es perfecto."<<endl;
				cout<<endl<<"Sus divisores son:"<< endl;
				do 
				{
					i = i+1;
					if (num%i==0) 
					{
						cout<<" "<<i<<endl;
					}
				} while (i+1<num);
				cout<<endl<<"La suma de sus divisores es: "<<perfecto<<endl;
			} 
			else 
			{
				cout<<endl<<endl<<"El numero "<<num<<" no es perfecto."<<endl;
				cout<<endl<<"Sus divisores son:" <<endl;
				do 
				{
					i = i+1;
					if (num%i==0) 
					{
						cout<<" "<<i<<endl;
					}
				} while (i+1<num);
				cout<<endl<<"La suma de sus divisores es: "<<perfecto<<endl;
			}
		} 
		else 
		{
			cout<<endl<<endl<<"Los datos ingresados son icorreptos"<<endl<<endl;
		}
		cout<<"\n";
		printf("%c",168);cout<<"Desea calcular otro numero?: [s/n] ";cin>>rt;
		
		if (rt=='s') 
		{
			i=0;
			a=2;
			perfecto=0;
		} 
		else 
		{
			rt='n';
		}
	}
	return 0;
}
