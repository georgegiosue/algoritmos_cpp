#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	double ingresos;
	
	cout<<"\tCalcular el porcentaje y la cantidad de impuestos que Usted debe pagar de acuerdo a sus ingresos"<<endl<<endl;
	cout<<endl<<"Digite sus ingresos: ";cin>>ingresos;
	
if (ingresos>=0)
{

	if (ingresos<=4000)
	{
		cout<<endl<<endl<<"El porcentaje de impuestos es 0%"<<endl<<endl;
		cout<<endl<<endl<<"Usted no pagara impuestos"<<endl<<endl;
	}
	
	if (ingresos>4000 && ingresos<=29000)
	{
		cout<<endl<<endl<<"El porcentaje de impuestos es 15%"<<endl<<endl;
		cout<<endl<<endl<<"Usted pagara de impuestos: S/."<<ingresos*0.15<<endl<<endl;
	}
	
	if (ingresos>29000 && ingresos<=70000)
	{
		cout<<endl<<endl<<"El porcentaje de impuestos es 25%"<<endl<<endl;
		cout<<endl<<endl<<"Usted pagara de impuestos: S/."<<ingresos*0.25<<endl<<endl;
	}
	
	if (ingresos>70000)
	{
		cout<<endl<<endl<<"El porcentaje de impuestos es 35%"<<endl<<endl;
		cout<<endl<<endl<<"Usted pagara de impuestos: S/."<<ingresos*0.35<<endl<<endl;
	}
}
	
else 
	{
	cout<<endl<<endl<<"Los datos ingresados son incorreptos"<<endl<<endl;
	}	
	return 0;
}
