#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	double salario_semana, horasT=8, pago_hora=35, salario_semanaFinal, descuento_afp, afp=0.05;
	cout<<"\t\t\tSalario de un Trabajador en una semana"<<endl<<endl;
	cout<<"Horas de trabajo al dia: "<<horasT<<" horas"<<endl;
	cout<<"Cada hora trabajada, Ganancia: S/."<<pago_hora<<endl;
	cout<<"Descuento al salario por AFP: 5%"<<endl;
	salario_semana=(pago_hora*horasT)*7;				// Salario a la semana sin descuento
	descuento_afp=salario_semana*afp;					// Descuento de la AFP al salario semanal
	salario_semanaFinal=salario_semana-descuento_afp;	// Salario Final a la semana con descuento de AFP 5%
	cout<<endl<<endl<<"RESULTADOS: "<<endl<<endl;
	cout<<"El salario semanal del trabajador es: S/."<<salario_semanaFinal<<endl;
	
	return 0;	
}
