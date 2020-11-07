#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int hora, minutos, sec;																	// Declaracion de variables
	cout<<"\t\t\tLa Hora un segundo despues, en Formato [24 horas]"<<endl<<endl;
	cout<<endl<<"Digite la Hora: ";cin>>hora;
	cout<<endl<<"Digite los minutos: ";cin>>minutos;
	cout<<endl<<"Digite los segundos: ";cin>>sec;
	
	if (hora>=0 & hora<=23 & minutos>=0 & minutos<=59 & sec>=0 & sec<=59)
	{
		sec++;
		
		if (sec==60)
		{
			minutos++;
			sec=0;
		}
		
		if (minutos==60)
		{
			hora++;
			minutos=0;
		}
		
		if (hora==24)
		{
			hora=0;
		}
		
		cout<<endl<<endl<<"La Hora un segundo despues es: "<<hora<<" horas con "<<minutos<<" minutos y "<<sec<<" segundos."<<endl<<endl;
	}
	
	else
	{
		cout<<endl<<endl<<"La Hora ingresada es Incorrepta.";
	}
	
	return 0;
}
