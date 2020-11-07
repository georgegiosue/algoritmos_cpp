#include <iostream>

using namespace std;

int main(int argc, char* argv[]) 
{
	int denominador, i, mcd, menor_, numerador;
	
	char rt;
	menor_ = 0;
	mcd = 0;
	rt = 's';
	i = 0;
	cout<<"\n\t\tSimplificar Fraccion aplicando el MCD\n"<<endl;
	do 
	{
		cout<<"\nDigite el numerador de la fraccion: ";cin>>numerador;
		cout<<"\nDigite el denominador de la fraccion: ";cin>>denominador;
		
		if (numerador<denominador) 
		{
			menor_ = numerador;
		} 
		else 
		{
			menor_ = denominador;
		}
		do 
		{
			i = i+1;
			if (numerador%i==0 && denominador%i==0) 
			{
				mcd = i;
			}
		} while (i<menor_);
		cout<<endl<<endl<<"\tSu fraccion simplificada es: "<<(numerador/mcd)<< "/" <<(denominador/mcd)<< endl;
		cout<<"\n\n";printf("%c",168);cout<<"Desea calcular para otra fraccion? [s/n] : ";cin>>rt;
		
		if (rt=='s') 
		{
			i = 0;
			menor_ = 0;
			mcd = 0;
		} 
		else 
		{
			rt = 'n';
		}
	} while (rt!='n');
	return 0;
}

