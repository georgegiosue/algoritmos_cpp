#include <iostream>

#include <string.h>
using namespace std;

void  alt_pago (int cliente);
void cliente_proceso (int cliente,int articulo,int cantidad,int precio);
float cantidad_precio (char a);
char cliente_articulo ();
char tipo_cliente ();

void  alt_pago (int cliente)
{
	switch (cliente)
	{
		case 1: cout<<"Efectivo, Cheque y Credito";break;
		 case 2: cout<<"Efectivo, Cheque y Credito";break;
		case 3: cout<<"Efectivo o Cheque";break;
		case 4: cout<<"Efectivo";break;
	}
}
void cliente_proceso (int cliente,int articulo,int cantidad,int precio)
{
	float imp, descuento, imp_final, f, i ,j, k;
	switch (articulo)
	{
		case 1:f=0.40;i=0.30;j=0.20;k=0;break;
		case 2:f=0.30;i=0.20;j=0.10;k=0;break;
		case 3:f=0.20;i=0.10;j=0;k=0;break;
	}
	imp=cantidad*precio;
	switch (cliente)
	{
		case 1:descuento=imp*f;imp_final=imp-descuento;break;
		case 2:descuento=imp*i;imp_final=imp-descuento;break;
		case 3:descuento=imp*j;imp_final=imp-descuento;break;
		case 4:descuento=imp*k;imp_final=imp-descuento;break;
	}
	cout<<"\t\tRESULTADOS"<<endl<<endl;
	cout<<"\t\tImporte: S/."<<imp;
	cout<<"\t\tDescuento: S/."<<descuento;
	cout<<"\t\tImporte final a pagar: S/."<<imp_final;
}
float cantidad_precio (char a)
{
	float resultado;
	switch (a)
	{
		case 1:do{ cout<<"\t\tDigite la cantidad a comprar: ";cin>>resultado;
				cout<<endl<<endl;
				}while (resultado<0);break;
		case 2:do{ cout<<"\t\tDigite el precio: ";cin>>resultado;
				cout<<endl<<endl;
				}while (resultado<0);break;
	}
	return resultado;
}

int cliente_articulo ()
{
	int articulo;

	cout<<"\t\tARTICULO"<<endl<<endl;
	cout<<"\tA, B, C"<<endl<<endl;
	cout<<"\t\tDigite el articulo a comprar [1 : a ,2 :b 3: c]: ";cin>>articulo;

	return articulo;
}
int tipo_cliente ()
{
	int cliente;
	char a;
	cout<<"\t\tTIPO DE CLIENTE"<<endl<<endl;
	cout<<"\tE: Excelente, B: Bueno, R: Regular, M: Malo"<<endl<<endl;
	cout<<"\t\tDigite numero  e: 1 b:2 r: 3 m:4 : ";cin>>cliente;
	switch (a){
		case 'e':cliente=1;break;
		case 'b':cliente=2;break;
		case 'r':cliente=3;break;
		case 'm':cliente=4;break;	
	}
	return cliente;
}

int main (int argc, char* argv[])
{
	int articulo;
	float precio;
	int cantidad, cliente;
	cout<<"\t\tPOLITICA DE DESCUENTOS"<<endl<<endl;
	cliente=tipo_cliente();
	articulo=cliente_articulo();
	cantidad=cantidad_precio('c');
	precio=cantidad_precio('p');

		cliente_proceso(cliente, articulo, cantidad, precio);
		alt_pago(cliente);
	return 0;
}

