#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char* argv[])
{
	int a, b, num, i, i_2, i_3, RF, R, P, ep;
	cout<<endl<<endl<<"\t\t\tCalcular los numeros capicuas entre [a] y [b]"<<endl<<endl;
	cout<<"\t";printf("%c",168);cout<<"Que es un numero capicua?"<<endl<<endl;
	cout<<"\tEs aquel numero que al invertir sus cifras nos da como resultado el mismo"<<endl<<endl;
	cout<<"\tDigite el valor de [a]: ";cin>>a;
	cout<<endl<<endl<<"\tDigite el valor de [b]: ";cin>>b;
	cout<<endl<<endl<<"Los siguientes numeros son capicuas entre los valores "<<a<<" y "<<b<<" :"<<endl<<endl;
	
	for (a;a<b;a++)
	{
		i=a;
		i_2=a;
		RF=0;
		P=0;
		
		while (i>0)
		{
			num=i%10;
			i=i/10;
			P+=1;
		}
		
		P-=1;
		
		while (i_2>0)
		{
			i_3=i_2%10;
			i_2=i_2/10;
			ep=pow(10,P);
			R=i_3*ep;
			RF+=R;
			P-=1;	
		}
		
		if (RF==a)
		{
			cout<<"\t"<<a<<endl;
		}	
	}
	return 0;
}
