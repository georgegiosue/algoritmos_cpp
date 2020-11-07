#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	double prec1, prec2, prec3;
	
	cout<<"\t\t\tCantidad a pagar por las Peliculas"<<endl<<endl;
	cout<<"PROMOCION:\nSi se lleva 3 peliculas, le salen al precio de las dos mas baratas"<<endl<<endl;
	cout<<"Digite el Precio de la primera pelicula: ";cin>>prec1;
	cout<<endl<<endl<<"Digite el Precio de la segunda pelicula: ";cin>>prec2;
	cout<<endl<<endl<<"Digite el Precio de la tercera pelicula: ";cin>>prec3;
	
	if (prec1>prec3 && prec1>prec2)
	{
		cout<<endl<<endl<<"La cantidad a pagar es: S/."<<prec2+prec3<<endl<<endl;
	}
	
	else
	{
		if (prec2>prec1 && prec2>prec3)
		{
			cout<<endl<<endl<<"La cantidad a pagar es: S/."<<prec3+prec1<<endl<<endl;
		}
		
		else
		{
			if (prec3>prec2 && prec3>prec1)
			{
				cout<<endl<<endl<<"La cantidad a pagar es: S/."<<prec1+prec2<<endl<<endl;
			}
			
		}
	}
	
	
	return 0;
}
