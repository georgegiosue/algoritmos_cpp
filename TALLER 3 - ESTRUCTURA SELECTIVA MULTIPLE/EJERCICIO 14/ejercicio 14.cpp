#include <iostream>
#include <string.h>
using namespace std;

int main (int argc, char* argv[])
{
	char cliente, articulo, alt_p[50];
	double precio, imp, descuento, imp_final;
	int cantidad;
	cout<<"\t\t\tPolitica de descuentos"<<endl<<endl;
	cout<<"\tTIPO DE CLIENTE"<<endl<<endl;
	cout<<"E: Excelente   B: Bueno   R: Regular   M: Malo"<<endl<<endl;
	cout<<"Digite la letra que corresponde para seleccionar [en minusculas]: ";cin>>cliente;
	cout<<endl<<endl<<"\tARTICULO"<<endl<<endl;
	cout<<"_A\n_B\n_C"<<endl<<endl;
	cout<<"Digite el articulo a comprar [en minusculas]: ";cin>>articulo;
	cout<<endl<<endl<<"Digite la cantidad del producto: ";cin>>cantidad;
	cout<<endl<<endl<<"Digite el precio del producto: ";cin>>precio;
	
	if (precio>0 && cantidad>0 && cliente=='e' || cliente=='b' || cliente=='r' || cliente=='m' && articulo=='a' || articulo=='b' || articulo=='c' )
	{
		imp=cantidad*precio;
		
		switch (articulo)
		{
			
			case 'a':	switch (cliente)
								{
									case 'e':	descuento=imp*0.40;imp_final=imp-descuento;strcpy(alt_p,"_Efectivo\n_Cheque\n_Credito");break;
									case 'b':	descuento=imp*0.30;imp_final=imp-descuento;strcpy(alt_p,"_Efectivo\n_Cheque\n_Credito");break;
									case 'r':	descuento=imp*0.20;imp_final=imp-descuento;strcpy(alt_p,"_Efectivo\n_Cheque");break;
									case 'm':	descuento=imp*0;imp_final=imp-descuento;strcpy(alt_p,"_Efectivo");break;
								};break;
			case 'b':	switch (cliente)
								{
									case 'e':	descuento=imp*0.30;imp_final=imp-descuento;strcpy(alt_p,"_Efectivo\n_Cheque\n_Credito");break;
									case 'b':	descuento=imp*0.20;imp_final=imp-descuento;strcpy(alt_p,"_Efectivo\n_Cheque\n_Credito");break;
									case 'r':	descuento=imp*0.10;imp_final=imp-descuento;strcpy(alt_p,"_Efectivo\n_Cheque");break;
									case 'm':	descuento=imp*0;imp_final=imp-descuento;strcpy(alt_p,"_Efectivo");break;
								};break;
			case 'c':	switch (cliente)
								{
									case 'e':	descuento=imp*0.20;imp_final=imp-descuento;strcpy(alt_p,"_Efectivo\n_Cheque\n_Credito");break;
									case 'b':	descuento=imp*0.10;imp_final=imp-descuento;strcpy(alt_p,"_Efectivo\n_Cheque\n_Credito");break;
									case 'r':	descuento=imp*0;imp_final=imp-descuento;strcpy(alt_p,"_Efectivo\n_Cheque");break;
									case 'm':	descuento=imp*0;imp_final=imp-descuento;strcpy(alt_p,"_Efectivo");break;
								};break;
				
		}
		
		cout<<endl<<endl<<"\tRESULTADOS"<<endl<<endl;
		cout<<"Importe: S/."<<imp<<endl<<endl;
		cout<<"Descuento: S/."<<descuento<<endl<<endl;
		cout<<"Importe final a pagar: S/."<<imp_final<<endl<<endl;
		cout<<"\tAlternativas de pago"<<endl<<endl;
		cout<<alt_p<<endl<<endl;
		
		
		
	}
	else
	{
		cout<<endl<<"Los Datos ingresados son ¡NO VALIDOS!"<<endl<<endl;
	}
	
	return 0;
}
