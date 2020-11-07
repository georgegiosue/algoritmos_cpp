#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	double nDias, nHoras, tipo_cambio_soles, monto_cobrar;
	const int COSTO_HORA=25;
	cout<<"\t\t\tMonto a cobrar por la asesoria - $25 la hora"<<endl<<endl;
	cout<<endl<<endl<<"Digite el Numero de dias que los consultores concurren a la constructora: ";cin>>nDias;
	cout<<endl<<endl<<"Digite el Numero de horas por dia que los consultores concurren a la constructora: ";cin>>nHoras;
	tipo_cambio_soles=COSTO_HORA*3.52;
	monto_cobrar=(tipo_cambio_soles*nHoras)*nDias;
	cout<<endl<<endl<<"El Monto a cobrar es: S/."<<monto_cobrar<<endl<<endl;
	
	return 0;
}
