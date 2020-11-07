#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char* argv[]) 
{
	int factorial=1, i=0, num;
	char rt='s';

	cout << "\n\t\tFactorial de un numero\n\n"<<endl;
	while (rt!='n') 
	{
		cout << "\nDigite un numero: ";cin >> num;
		
		if (num>=0) 
		{
			while (i<num) 
			{
				i = i+1;
				factorial = factorial*i;
			}
		}
		cout<<endl<<endl<<"\tRESULTADO: "<<num<<"!"<<" = "<<factorial <<endl<<endl;
		printf("%c",168);cout<< "Desea sacar el factorial de otro numero? [s/n]: ";cin>>rt;
		
		if (rt!='n') 
		{
			i = 0;
			factorial = 1;
		}
	}
	return 0;
}
