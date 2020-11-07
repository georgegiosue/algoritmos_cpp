#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int nacion, talla, sexo, cantidad;
	char nombre[16];
	double precio, imp_descuento, imp, imp_final;
	cout<<"\t\tDeterminar precios y descuentos en Ropa"<<endl<<endl;
	cout<<"Digite su nombre: ";cin.getline(nombre,16);
	cout<<endl<<endl<<"\t  Sexo"<<endl<<endl;
	cout<<"1: Hombre\t2: Mujer"<<endl<<endl;
	cout<<"Digite el numero correspondiente para seleccionar: ";cin>>sexo;
	cout<<endl<<endl<<"\tDigite su nacionalidad [1 o 2]: ";cin>>nacion;
	cout<<endl<<endl<<"\t  Talla"<<endl<<endl;
	cout<<"1: Ninio   2: Joven   3: Adulto"<<endl<<endl;
	cout<<"Digite el numero correspondiente para seleccionar: ";cin>>talla;
	cout<<endl<<endl<<"Digite el precio del producto: ";cin>>precio;
	cout<<endl<<endl<<"Digite la cantidad: ";cin>>cantidad;
	
	if (nacion==1 || nacion==2 && talla>=1 && talla<=3 && sexo==1 || sexo==2 && cantidad>0)
	{
		imp=cantidad*precio;
		
		if (nacion==1)
		{
			switch (talla)
			{
				case 1: if (sexo==1)
						{
							imp_descuento=imp*0.05;
							imp_final=imp-imp_descuento;	
						}
						else
						{
							imp_descuento=imp*0.06;
							imp_final=imp-imp_descuento;
						};break;
				case 2:	if (sexo==1)
						{
							imp_descuento=imp*0.07;
							imp_final=imp-imp_descuento;	
						}
						else
						{
							imp_descuento=imp*0.09;
							imp_final=imp-imp_descuento;
						};break;
				case 3:	if (sexo==1)
						{
							imp_descuento=imp*0.10;
							imp_final=imp-imp_descuento;	
						}
						else
						{
							imp_descuento=imp*0.12;
							imp_final=imp-imp_descuento;
						};break;
			}
		}
		
		if (nacion==2)
		{
			switch (talla)
			{
				case 1: if (sexo==1)
						{
							imp_descuento=imp*0.04;
							imp_final=imp-imp_descuento;	
						}
						else
						{
							imp_descuento=imp*0.03;
							imp_final=imp-imp_descuento;
						};break;
				case 2:	if (sexo==1)
						{
							imp_descuento=imp*0.05;
							imp_final=imp-imp_descuento;	
						}
						else
						{
							imp_descuento=imp*0.06;
							imp_final=imp-imp_descuento;
						};break;
				case 3:	if (sexo==1)
						{
							imp_descuento=imp*0.09;
							imp_final=imp-imp_descuento;	
						}
						else
						{
							imp_descuento=imp*0.10;
							imp_final=imp-imp_descuento;
						};break;
			}
		}
		
		cout<<endl<<endl<<"RESULTADOS"<<endl<<endl;
		cout<<"Nombre: "<<nombre;
		cout<<endl<<endl<<"Cantidad de productos comprados: "<<cantidad;
		cout<<endl<<endl<<"Importe comprado: S/."<<imp;
		cout<<endl<<endl<<"Importe de descuento: S/."<<imp_descuento;
		cout<<endl<<endl<<"Importe final: S/."<<imp_final<<endl<<endl;
		
	}
	else
	{
		cout<<endl<<endl<<"Los datos ingresados son ¡NO VALIDOS!"<<endl<<endl;
	}
		
	return 0;
}
