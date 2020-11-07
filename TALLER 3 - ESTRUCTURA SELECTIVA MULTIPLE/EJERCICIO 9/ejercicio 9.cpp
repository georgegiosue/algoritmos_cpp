#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int cantidad, genero, origen;
	double precio_final, precio_parcial, precio;
	char talla;
	
	cout<<"Determinar el monto comprado, importe de descuento y el monto a pagar En una Distribuidora de Ropa"<<endl<<endl;
	cout<<"\tGENERO"<<endl<<endl;
	cout<<"1: Hombre\t2: Mujer"<<endl<<endl;
	cout<<"Digite el numero correspondiente para seleccionar: ";cin>>genero;
	cout<<endl<<endl<<"\tTALLA"<<endl<<endl;
	cout<<"Digite su talla [S/M/L]: ";cin>>talla;
	cout<<endl<<endl<<"ORIGEN"<<endl<<endl;
	cout<<"1: Nacional\t2: Particular"<<endl<<endl;
	cout<<"Digite el numero correspondiente para seleccionar: ";cin>>origen;
	cout<<endl<<endl<<"Digite la cantidad a comprar: ";cin>>cantidad;
	cout<<endl<<endl<<"Digite el precio unitario del producto: ";cin>>precio;
	
	if (origen==1 || origen==2 && talla=='s' || talla=='m' || talla=='l' && genero==1 || genero==2 && cantidad>0 && precio>0)
	{
		precio_parcial=cantidad*precio;
		
		if (origen==1)
		{
			if (genero==1)
			{
				
				switch (talla)
				{
					case 's':precio_final=precio_parcial-(precio_parcial*0.10);break;
					case 'm':precio_final=precio_parcial-(precio_parcial*0.12);break;
					case 'l':precio_final=precio_parcial-(precio_parcial*0.15);break;
				}
				
			}
			
			if (genero==2)
			{
				
				switch (talla)
				{
					case 's':precio_final=precio_parcial-(precio_parcial*0.15);break;
					case 'm':precio_final=precio_parcial-(precio_parcial*0.17);break;
					case 'l':precio_final=precio_parcial-(precio_parcial*0.20);break;
				}
				
			}
			
		}
		
		if (origen==2)
		{
			if (genero==1)
			{
				
				switch (talla)
				{
					case 's':precio_final=precio_parcial-(precio_parcial*0.05);break;
					case 'm':precio_final=precio_parcial-(precio_parcial*0.07);break;
					case 'l':precio_final=precio_parcial-(precio_parcial*0.10);break;
				}
				
			}
			
			if (genero==2)
			{
				
				switch (talla)
				{
					case 's':precio_final=precio_parcial-(precio_parcial*0.07);break;
					case 'm':precio_final=precio_parcial-(precio_parcial*0.09);break;
					case 'l':precio_final=precio_parcial-(precio_parcial*0.12);break;
				}
				
			}
			
		}
		
		cout<<endl<<endl<<"RESULTADOS"<<endl<<endl;
		cout<<"Monto Comprado: "<<cantidad;
		cout<<endl<<"Importe de Descuento: S/."<<precio_final-precio_parcial;	
		cout<<endl<<"Monto Final a pagar: S/."<<precio_final;
	}
	else
	{
		cout<<endl<<endl<<"Los datos ingresados son ¡NO VALIDOS!"<<endl<<endl;
	}
	
	
	return 0;
}
