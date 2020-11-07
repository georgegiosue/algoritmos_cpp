#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int num, i=0;
	char rt='s';
	cout<<"\n\tDivisores de un numero entero N comprendido de (0 < N <= 3000)"<<endl<<endl;
	while (rt!='n')
	{
	cout<<"\nDigite un numero: ";cin>>num;
		if (num>0 && num<=3000)
		{	
			cout<<endl<<endl<<"\t\tRESULTADOS"<<endl<<endl;
			cout<<"\tLos divisores del numero "<<num<<" son: ";
				
				do 
				{
					while (i<=num)
					{
						i++;
						if (num%i==0)
						{
							cout<<endl<<"\t_ "<<i<<endl;
						}
					}
					
				} while (i<=num);
				
				cout<<"\nDesea calcular para otro numero? [s/n]: ";cin>>rt;
			
				if (rt=='s')
				{
					i=0;
					
				}
				else
				{
					rt='n';
				}
		}
		else
		{
			cout<<endl<<"Los datos ingresados son incorreptos"<<endl<<endl;
		}
	}
	
	return 0;
}
