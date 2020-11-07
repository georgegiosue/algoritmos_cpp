#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int cantidad; double monto_parcial, monto_total, precio=383.20, igv;				// Declaracion de variables y precio
	cout<<"Monto Parcial, IGV y Monto Total"<<endl;
	cout<<endl<<"\t\t\tSamsung 860 QVO 1TB Solid State Drive [SSD] S/.383,20 c/u"<<endl;
	cout<<"Incluye IGV: 19%"<<endl<<endl;
	cout<<"Digite la cantidad a comprar: ";cin>>cantidad;
	monto_parcial=cantidad*precio;														// Monto parcial
	igv=monto_parcial*0.19;																// IGV
	monto_total=monto_parcial+igv;														// Monto total
	cout<<endl<<"Los resultados son: "<<endl<<endl;
	cout<<"Monto parcial: S/."<<monto_parcial<<endl<<endl;
	cout<<"IGV: S/."<<igv<<endl<<endl;
	cout<<"Monto total: S/."<<monto_total;
	
	return 0;	
}
