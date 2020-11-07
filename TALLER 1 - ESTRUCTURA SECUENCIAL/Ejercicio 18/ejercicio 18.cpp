#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	double costo_auto, ganancia_v, impuestos_EyL, costo_total;									// Declaracion de Variables
	cout<<"\t\t\tCosto del Automovil para el comprador"<<endl<<endl;
	cout<<"Incluye:"<<endl<<endl;
	cout<<"_Porcentaje de ganancia del vendedor: 12%"<<endl;
	cout<<"_Impuestos estatales y locales aplicables: 6%"<<endl;
	cout<<endl<<endl<<"Digite el costo del automovil en soles: ";cin>>costo_auto;
	ganancia_v=costo_auto*0.12;																	// Ganancia que optiene el vendedor
	impuestos_EyL=costo_auto*0.06;																// Impuestos recaudados
	costo_total=costo_auto+ganancia_v+impuestos_EyL;											// Costo total para el comprador
	cout<<endl<<endl<<"EL costo para el comprador es: S/."<<costo_total<<" soles."<<endl<<endl;
	
	return 0;	
}
