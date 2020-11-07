#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	double dinero, cantidad, precio, vuelto;	// Definir variables
	cout<<"\t\t\tCalculo de Precio y Vuelto - Venta de camotes S./2 - Kg"<<endl<<endl;
	cout<<endl<<"Digite la Cantidad a comprar en Kilogramos: ";
	cin>>cantidad;	
	cout<<endl<<"Digite la Cantidad de dinero que dispone: ";
	cin>>dinero;
	precio=cantidad*2;				// Precio
	vuelto=dinero-precio;			// Vuelto
	cout<<endl<<"El precio del producto es: S/."<<precio<<" y su vuelto es: S/."<<vuelto;
	
	
}
