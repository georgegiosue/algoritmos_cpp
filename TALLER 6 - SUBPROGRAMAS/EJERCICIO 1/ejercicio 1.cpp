#include <iostream>

using namespace std;

int invertirnumero (int a);

int invertirnumero (int a)
{
	int num_invertido=0, r, n;
	n=a;
	while (n>0)
	{
		r=n%10;
		n=int(n/10);
		num_invertido=num_invertido*10+r;
	}
	return num_invertido;
}

int main (int argc, char* argv[])
{
	int num, num_inv;
	char rt='n';
	
	cout<<endl<<endl<<"\t\tVerificar si un numero es Capicua o Palindromo"<<endl<<endl;
	cout<<"\t";printf("%c",168);cout<<"Que es un numero Capicua o Palindromo?"<<endl<<endl;
	cout<<"\tEs aquel numero que al invertir sus cifras da como resultado el mismo."<<endl<<endl;
	
	do
	{
		cout<<"\n\tDigite un numero: ";cin>>num;
		num_inv=invertirnumero(num);
		
		if (num_inv==num)
		{
			cout<<endl<<endl<<"\tEl numero "<<num<<" SI es Capicua o Palindromo."<<endl<<endl;
		}
		else
		{
			cout<<endl<<endl<<"\tEl numero "<<num<<" NO es Capicua o Palindromo."<<endl<<endl;
		}
		
		cout<<"\t";printf("%c",168);cout<<"Desea Verificar para otro numero? [s/n] : ";cin>>rt;
		
	}while (rt!='n');
	
	return 0;
}
