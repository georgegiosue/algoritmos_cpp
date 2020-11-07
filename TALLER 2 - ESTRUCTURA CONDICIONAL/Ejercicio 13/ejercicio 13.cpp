#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	float consumo, monto_total;
	
	cout<<"\t\t\tMonto a pagar por consumo de energia electrica en [Kilowatts]"<<endl<<endl;
	cout<<"Ingrese su consumo de energia electrica: ";cin>>consumo;
	
	if (consumo>0)
	{
		monto_total=consumo*0.50;
		
		if (consumo<=50)
		{
			cout<<endl<<"El monto que debera pagar es: S/."<<monto_total+(monto_total*0.03)<<endl<<endl;
			
		}
		
		if (consumo>50 && consumo<=100)
		{
			
			cout<<endl<<"El monto que debera pagar es: S/."<<monto_total+(monto_total*0.05)<<endl<<endl;
		}
		
		if (consumo>100)
		{
			
			cout<<endl<<"El monto que debera pagar es: S/."<<monto_total+(monto_total*0.07)<<endl<<endl;
		}
		
		
		
	}
	
	else
	{
		cout<<endl<<"Los datos ingresados son incorreptos"<<endl<<endl;	
	}
	
	return 0;
}
