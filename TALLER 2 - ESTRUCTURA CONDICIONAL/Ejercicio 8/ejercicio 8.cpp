#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	double sueldoB, incentivo;
	int anios_sv, modo_trab;
	char nombre[30];
	
	cout<<"\t\t\tDeterminar el incentivo a recibir"<<endl<<endl;
	cout<<"Digite su nombre: ",cin.getline(nombre,10);
	cout<<endl<<endl<<nombre<<" digite su sueldo basico: ";cin>>sueldoB;
	cout<<endl<<endl<<nombre<<" digite la cantidad de años en servicio: ";cin>>anios_sv;
	cout<<endl<<endl<<nombre<<", ¿Cual es su modalidad de trabajo?"<<endl<<endl;
	cout<<"1: Contratado"<<endl;
	cout<<"2: Estable"<<endl;
	cout<<endl<<"Seleccione la opcion escribiendo el numero correspondiente: ",cin>>modo_trab;
	
	if (anios_sv>=1 && sueldoB>0 && modo_trab==1 || modo_trab==2)
	{
	
		
		if (modo_trab==1)
		{
			if (anios_sv<=3)
			{
				incentivo=(sueldoB*0.05)+200;
				cout<<endl<<endl<<nombre<<", Su incentivo a recibir durante "<<anios_sv<<" años de servicio es: S/."<<incentivo<<" soles.";
			}
			
			if (anios_sv>3)
			{
				incentivo=(sueldoB*0.07)+200;
				cout<<endl<<endl<<nombre<<", Su incentivo a recibir durante "<<anios_sv<<" años de servicio es: S/."<<incentivo<<" soles.";
			}
					
		}
		
		if (modo_trab==2)
		{
			if (anios_sv<=3)
			{
				incentivo=(sueldoB*0.05)+400;
				cout<<endl<<endl<<nombre<<", Su incentivo a recibir durante "<<anios_sv<<" años de servicio es: S/."<<incentivo<<" soles.";
			}
			
			if (anios_sv>3)
			{
				incentivo=(sueldoB*0.07)+400;
				cout<<endl<<endl<<nombre<<", Su incentivo a recibir durante "<<anios_sv<<" años de servicio es: S/."<<incentivo<<" soles.";
			}
				
		}
		
	
	}
	
	else
	{
		cout<<"El sueldo Basico, la cantidad de años de servicio o la Modalidad de trabajo ingresado es Incorrepto.";
	}
	
	
	return 0;
}
