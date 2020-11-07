#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int financiamiento, numero_letras;
	float monto_factura, nueva_factura, monto_compra, intereses, cuotaI, letra_monto;
	cout<<"\t\t\tVentas al Credito"<<endl<<endl;
	cout<<"Digite el monto de compra: ";cin>>monto_compra;
	cout<<endl<<endl<<"Tipo de Financiamiento      Interes      Cuota Inicial(%)     letras"<<endl;
	cout<<"         1                     5%                60              2 "<<endl;
	cout<<"         2                    10%                50              4 "<<endl;
	cout<<"         3                    15%                35              6 "<<endl<<endl;
	cout<<"Digite un numero para seleccionar el Tipo de financiamiento: ";cin>>financiamiento;
	
	if (monto_compra>0 && financiamiento==1 || financiamiento==2 || financiamiento==3)
	{
		monto_factura=monto_compra+(monto_compra*0.10);
		
		switch (financiamiento)
		{
			case 1: intereses=monto_factura*0.05;
					nueva_factura=monto_factura+intereses;
					cuotaI=monto_factura*0.60;
					numero_letras=2;
					letra_monto=(nueva_factura-cuotaI)/numero_letras;break;
			case 2:	intereses=monto_factura*0.10;
					nueva_factura=monto_factura+intereses;
					cuotaI=monto_factura*0.50;
					numero_letras=4;
					letra_monto=(nueva_factura-cuotaI)/numero_letras;break;
			case 3: intereses=monto_factura*0.15;
					nueva_factura=monto_factura+intereses;
					cuotaI=monto_factura*0.35;
					numero_letras=6;
					letra_monto=(nueva_factura-cuotaI)/numero_letras;break;
				
		}
		
		cout<<endl<<endl<<"RESULTADOS"<<endl<<endl;
		cout<<"Monto de factura: S/."<<monto_factura<<endl;
		cout<<"Monto de intereses: S/."<<intereses<<endl;
		cout<<"Nuevo monto de la factura: S/."<<nueva_factura<<endl;
		cout<<"Monto de la Cuota Inicial: S/."<<cuotaI<<endl;
		cout<<"Numero de letras: "<<numero_letras<<endl;
		cout<<"Monto de cada letra por pagar: S/."<<letra_monto<<endl<<endl;
	}
	else
	{
		cout<<endl<<"Los datos ingresados son ¡NO VALIDOS!";
	}
	
	return 0;
}
