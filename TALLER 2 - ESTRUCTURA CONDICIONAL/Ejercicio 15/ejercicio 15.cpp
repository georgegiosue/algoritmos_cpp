#include <iostream>
#include <string.h>
using namespace std;

int main (int argc, char* argv[])
{
	int articulo, cliente;
	
	cout<<"\t\t\tPolitica de Descuentos"<<endl<<endl;
	cout<<"\t\t\t     Articulo\n \t\t\t1\t2\t3"<<endl;
	cout<<"Cliente\n\n 1: Exelente\t\t40%    30%    20%\n\n 2: Bueno\t\t30%    20%    10%\n\n 3: Regular\t\t20%    10%    0%\n\n 4: Malo\t\t0%     0%     0%"<<endl;
	cout<<endl<<endl<<"Digite el numero para seleccionar tipo de cliente: ";cin>>cliente;
	cout<<endl<<endl<<"Digite el numero para seleccionar tipo de articulo: ";cin>>articulo;
	
	if (articulo==1)
	{
		if (cliente==1)
		{
			cout<<endl<<endl<<"DESCUENTO"<<endl<<endl;
			cout<<"_El descuento es 40%"<<endl<<endl;
			cout<<"ALTERNATIVAS DE PAGO"<<endl<<endl;
			cout<<"_Efectivo"<<endl;
			cout<<"_Cheque"<<endl;
			cout<<"_Al credito"<<endl;
		}
		
		if (cliente==2)
		{
			cout<<endl<<endl<<"DESCUENTO"<<endl<<endl;
			cout<<"_El descuento es 30%"<<endl<<endl;
			cout<<"ALTERNATIVAS DE PAGO"<<endl<<endl;
			cout<<"_Efectivo"<<endl;
			cout<<"_Cheque"<<endl;
			cout<<"_Al credito"<<endl;
		}
		
		if (cliente==3)
		{
			cout<<endl<<endl<<"DESCUENTO"<<endl<<endl;
			cout<<"_El descuento es 20%"<<endl<<endl;
			cout<<"ALTERNATIVAS DE PAGO"<<endl<<endl;
			cout<<"_Efectivo"<<endl;
			cout<<"_Cheque"<<endl;
		}
		
		if (cliente==4)
		{
			cout<<endl<<endl<<"DESCUENTO"<<endl<<endl;
			cout<<"_No aplica para descuento"<<endl<<endl;
			cout<<"ALTERNATIVAS DE PAGO"<<endl<<endl;
			cout<<"_Efectivo"<<endl;
		}
		
		
		
	}
	
	if (articulo==2)
	{
		if (cliente==1)
		{
			cout<<endl<<endl<<"DESCUENTO"<<endl<<endl;
			cout<<"_El descuento es 30%"<<endl<<endl;
			cout<<"ALTERNATIVAS DE PAGO"<<endl<<endl;
			cout<<"_Efectivo"<<endl;
			cout<<"_Cheque"<<endl;
			cout<<"_Al credito"<<endl;
		}
		
		if (cliente==2)
		{
			cout<<endl<<endl<<"DESCUENTO"<<endl<<endl;
			cout<<"_El descuento es 20%"<<endl<<endl;
			cout<<"ALTERNATIVAS DE PAGO"<<endl<<endl;
			cout<<"_Efectivo"<<endl;
			cout<<"_Cheque"<<endl;
			cout<<"_Al credito"<<endl;
		}
		
		if (cliente==3)
		{
			cout<<endl<<endl<<"DESCUENTO"<<endl<<endl;
			cout<<"_El descuento es 10%"<<endl<<endl;
			cout<<"ALTERNATIVAS DE PAGO"<<endl<<endl;
			cout<<"_Efectivo"<<endl;
			cout<<"_Cheque"<<endl;
		}
		
		if (cliente==4)
		{
			cout<<endl<<endl<<"DESCUENTO"<<endl<<endl;
			cout<<"_No aplica para descuento"<<endl<<endl;
			cout<<"ALTERNATIVAS DE PAGO"<<endl<<endl;
			cout<<"_Efectivo"<<endl;
		}
		
		
		
	}
	
	if (articulo==3)
	{
		if (cliente==1)
		{
			cout<<endl<<endl<<"DESCUENTO"<<endl<<endl;
			cout<<"_El descuento es 20%"<<endl<<endl;
			cout<<"ALTERNATIVAS DE PAGO"<<endl<<endl;
			cout<<"_Efectivo"<<endl;
			cout<<"_Cheque"<<endl;
			cout<<"_Al credito"<<endl;
		}
		
		if (cliente==2)
		{
		cout<<endl<<endl<<"DESCUENTO"<<endl<<endl;
			cout<<"_El descuento es 10%"<<endl<<endl;
			cout<<"ALTERNATIVAS DE PAGO"<<endl<<endl;
			cout<<"_Efectivo"<<endl;
			cout<<"_Cheque"<<endl;
			cout<<"_Al credito"<<endl;
		}
		
		if (cliente==3)
		{
			cout<<endl<<endl<<"DESCUENTO"<<endl<<endl;
			cout<<"_No aplica para descuento"<<endl<<endl;
			cout<<"ALTERNATIVAS DE PAGO"<<endl<<endl;
			cout<<"_Efectivo"<<endl;
			cout<<"_Cheque"<<endl;
		}
		
		if (cliente==4)
		{
			cout<<endl<<endl<<"DESCUENTO"<<endl<<endl;
			cout<<"_No aplica para descuento"<<endl<<endl;
			cout<<"ALTERNATIVAS DE PAGO"<<endl<<endl;
			cout<<"_Efectivo"<<endl;
		}
		
		
		
	}
	
	
	
	return 0;
}
