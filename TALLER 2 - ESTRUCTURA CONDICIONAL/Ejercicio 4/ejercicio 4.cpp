#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int selector, cant_1, cant_2, cant_3;										// Declaracion de variables
	double precio_1, precio_2, precio_3, total_1, total_2, total_3;
	cout<<"\t\t\tAccesorios para Computadoras/Laptos"<<endl<<endl;
	cout<<"\t\t|||   PROMOCION   |||"<<endl<<endl;
	cout<<"5% de Descuento por Compras hasta S/.75.00 Soles"<<endl;
	cout<<"10% de Descuento por Compras desde S/.75.00 hasta S/.150.00 Soles"<<endl;
	cout<<"15% de Descuento por Compras mayores a S/.150.00 Soles"<<endl<<endl<<endl;
	cout<<"Productos: "<<endl;
	cout<<endl<<"1. Mouse Targus optico compacto - S/.30.00 c/u";
	cout<<endl<<"2. Teclado Logitech k120 - S/.50.00 c/u";
	cout<<endl<<"3. Web cam 1080p HD - S/.70.00 c/u";
	cout<<endl<<endl<<"Digite el numero correspondiente a la opcion para seleccionar y comprar: ";cin>>selector;
	
	
	if (selector==1)
	{
		cout<<endl<<endl<<"\tMouse Targus optico compacto - S/.30.00 c/u"<<endl;
		cout<<endl<<"Digite la cantidad a comprar: ";cin>>cant_1;
		
		precio_1=cant_1*30;
		
					if (precio_1<=75)
					{
						total_1=precio_1-(precio_1*0.05);
						cout<<endl<<endl<<"El total a cancelar es: S/."<<total_1<<" Soles."<<endl<<endl;	
					}
					
					if (precio_1>=75 and precio_1<=150)
					{
						total_1=precio_1-(precio_1*0.10);
						cout<<endl<<endl<<"El total a cancelar es: S/."<<total_1<<" Soles."<<endl<<endl;
					}
					
					if (precio_1>=150)
					{
						total_1=precio_1-(precio_1*0.15);
						cout<<endl<<endl<<"El total a cancelar es: S/."<<total_1<<" Soles."<<endl<<endl;
					}
						
	}
	
	if (selector==2)
	{
		cout<<endl<<endl<<"\tTeclado Logitech k120 - S/.50.00 c/u"<<endl;
		cout<<endl<<"Digite la cantidad a comprar: ";cin>>cant_2;
		
		precio_2=cant_2*50;
		
					if (precio_2<=75)
					{
						total_2=precio_2-(precio_2*0.05);
						cout<<endl<<endl<<"El total a cancelar es: S/."<<total_2<<" Soles."<<endl<<endl;
					}
					
					if (precio_2>=75 and precio_2<=150)
					{
						total_2=precio_2-(precio_2*0.10);
						cout<<endl<<endl<<"El total a cancelar es: S/."<<total_2<<" Soles."<<endl<<endl;
					}
					
					if (precio_2>=150)
					{
						total_2=precio_2-(precio_2*0.15);
						cout<<endl<<endl<<"El total a cancelar es: S/."<<total_2<<" Soles."<<endl<<endl;
					}
					
	}
	
	if (selector==3)
	{
		cout<<endl<<endl<<"\tWeb cam 1080p HD - S/.70.00 c/u"<<endl;
		cout<<endl<<"Digite la cantidad a comprar: ";cin>>cant_3;
		
		precio_3=cant_3*70;
		
					if (precio_3<=75)
					{
						total_3=precio_3-(precio_3*0.05);
						cout<<endl<<endl<<"El total a cancelar es: S/."<<total_3<<" Soles."<<endl<<endl;
					}
					
					if (precio_3>=75 and precio_3<=150)
					{
						total_3=precio_3-(precio_3*0.10);
						cout<<endl<<endl<<"El total a cancelar es: S/."<<total_3<<" Soles."<<endl<<endl;
					}
					
					if (precio_3>=150)
					{
						total_3=precio_3-(precio_3*0.15);
						cout<<endl<<endl<<"El total a cancelar es: S/."<<total_3<<" Soles."<<endl<<endl;
					}
					
	}
	
	
	return 0;
}
