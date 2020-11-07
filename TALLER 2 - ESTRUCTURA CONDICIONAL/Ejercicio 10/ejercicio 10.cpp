#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	const int PRECIO_a=60, PRECIO_b=55, PRECIO_c=48, PRECIO_d=36;
	int selector;
	float largo, ancho, precio_venta;
	
	cout<<"\t\tCalcular Precio de venta del Terreno segun ZONA"<<endl<<endl;
	cout<<"\t\t\tZONAS\tPRECIO ($/m^2)"<<endl<<endl;
	cout<<"\t\t1:\tA\t60"<<endl;
	cout<<"\t\t2:\tB\t55"<<endl;
	cout<<"\t\t3:\tC\t48"<<endl;
	cout<<"\t\t4:\tD\t36"<<endl<<endl;
	cout<<endl<<"Digite el numero correspondiente a la ZONA para seleccionar: ";cin>>selector;
	cout<<endl<<endl<<"Extension del Terreno en [m]"<<endl<<endl;
	cout<<"Digite la longitud del terreno: ";cin>>largo;
	cout<<endl<<endl<<"Digite el ancho del terreno: ";cin>>ancho;
	
	
	if (selector==1 || selector==2 || selector==3 || selector==4 && largo>0 && ancho>0)
	{
		
		if (selector==1)
		{
			precio_venta=(largo*ancho)*PRECIO_a;
			cout<<endl<<endl<<"El precio de venta es: $"<<precio_venta;
		}
		
		if (selector==2)
		{
			precio_venta=(largo*ancho)*PRECIO_b;
			cout<<endl<<endl<<"El precio de venta es: $"<<precio_venta;
		}
		
		if (selector==3)
		{
			precio_venta=(largo*ancho)*PRECIO_c;
			cout<<endl<<endl<<"El precio de venta es: $"<<precio_venta;
		}
		
		if (selector==4)
		{
			precio_venta=(largo*ancho)*PRECIO_d;
			cout<<endl<<endl<<"El precio de venta es: $"<<precio_venta;
		}
			
		
	}
	
	else
	{
		cout<<endl<<endl<<"Los datos ingresados son incorreptos"<<endl<<endl;
	}
	
	
	
	return 0;
}
