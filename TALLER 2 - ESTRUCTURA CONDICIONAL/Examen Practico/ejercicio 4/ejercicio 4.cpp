#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int selector, cantidad;
	double montototal, montofinal, precio;
	cout<<"\t\t\tCalcular el Porcentaje de descuento, Monto total y Monto final a pagar Por los libros"<<endl<<endl;
	cout<<"ORIGEN DEL LIBRO"<<endl;
	cout<<"1: Nacional"<<endl;
	cout<<"2: Importado"<<endl<<endl;
	cout<<"Digite el numero correspondiente para seleccionar: ";cin>>selector;
	cout<<endl<<"Digite el precio del libro: ";cin>>precio;
	cout<<endl<<"Digite la cantidad de libros a comprar: ";cin>>cantidad;
	
	
	if (cantidad>0)
	{
		
		if (selector==1)
		{
			
			if (cantidad<50)
			{
				montototal=cantidad*precio;
				montofinal=montototal-(montototal*0.10);
				cout<<endl<<endl<<"El Descuento es del 10%"<<endl;
				cout<<"El Monto total es: S/."<<montototal;
				cout<<endl<<"El Monto final a pagar es: S/."<<montofinal;
			}
			
			if (cantidad>=50 && cantidad<=100)
			{
				montototal=cantidad*precio;
				montofinal=montototal-(montototal*0.12);
				cout<<endl<<endl<<"El Descuento es del 12%"<<endl;
				cout<<"El Monto total es: S/."<<montototal;
				cout<<endl<<"El Monto final a pagar es: S/."<<montofinal;
			}
			
			if (cantidad>100)
			{
				montototal=cantidad*precio;
				montofinal=montototal-(montototal*0.15);
				cout<<endl<<endl<<"El Descuento es del 15%"<<endl;
				cout<<"El Monto total es: S/."<<montototal;
				cout<<endl<<"El Monto final a pagar es: S/."<<montofinal;
			}
			
		}
		
		if (selector==2)
		{
			
			if (cantidad<50)
			{
				montototal=cantidad*precio;
				montofinal=montototal-(montototal*0.05);
				cout<<endl<<endl<<"El Descuento es del 5%"<<endl;
				cout<<"El Monto total es: S/."<<montototal;
				cout<<endl<<"El Monto final a pagar es: S/."<<montofinal;
			}
			
			if (cantidad>=50 && cantidad<=100)
			{
				montototal=cantidad*precio;
				montofinal=montototal-(montototal*0.07);
				cout<<endl<<endl<<"El Descuento es del 7%"<<endl;
				cout<<"El Monto total es: S/."<<montototal;
				cout<<endl<<"El Monto final a pagar es: S/."<<montofinal;
			}
			
			if (cantidad>100)
			{
				montototal=cantidad*precio;
				montofinal=montototal-(montototal*0.10);
				cout<<endl<<endl<<"El Descuento es del 10%"<<endl;
				cout<<"El Monto total es: S/."<<montototal;
				cout<<endl<<"El Monto final a pagar es: S/."<<montofinal;
			}
			
		}
		
	}
	else
	{
		cout<<endl<<"La cantidad de libros debe ser mayor a 0"<<endl<<endl;
	}
	
	
	
	return 0;
}
