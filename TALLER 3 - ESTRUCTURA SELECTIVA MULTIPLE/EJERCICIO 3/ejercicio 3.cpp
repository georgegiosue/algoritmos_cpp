#include <iostream>
#include <string.h>

using namespace std;

int main (int argc, char* argv[])
{
	int dia, mes;
	char estacion[16];
	cout<<"\t\tDeterminar la estacion, dada una fecha [dia y mes]"<<endl<<endl;
	cout<<"Digite el dia: ";cin>>dia;
	cout<<endl<<endl<<"\t\tMESES"<<endl<<endl;
	cout<<"1: Enero             2: Febrero";
	cout<<endl<<"3: Marzo             4: Abril";
	cout<<endl<<"5: Mayo              6: Junio";
	cout<<endl<<"7: Julio             8: Agosto";
	cout<<endl<<"9: Setiembre         10: Octubre";
	cout<<endl<<"11: Noviembre        12: Diciembre";
	cout<<endl<<endl<<"Digite un numero para seleccionar el mes: ";cin>>mes;
	
	if (dia>=1 && dia<=31 && mes>=1 && mes<=12)
	{
		switch (mes)
		{
			case 1:strcpy(estacion,"Verano");break;
			case 2:strcpy(estacion,"Verano");break;
			case 4:strcpy(estacion,"Otonio");break;
			case 5:strcpy(estacion,"Otonio");break;
			case 7:strcpy(estacion,"Invierno");break;
			case 8:strcpy(estacion,"Invierno");break;
			case 10:strcpy(estacion,"Primavera");break;
			case 11:strcpy(estacion,"Primavera");
		}
		
		if (mes==3 || mes==6 || mes==9 || mes==12)
		{
			if(mes==3)
			{
				if (dia>=1 && dia<=20)
				{
					strcpy(estacion,"Verano");
				}
				else
				{
					strcpy(estacion,"Otonio");
				}
			}
			
			if(mes==6)
			{
				if (dia>=1 && dia<=21)
				{
					strcpy(estacion,"Otonio");
				}
				else
				{
					strcpy(estacion,"Invierno");
				}
			}
			
			if(mes==9)
			{
				if (dia>=1 && dia<=22)
				{
					strcpy(estacion,"Invierno");
				}
				else
				{
					strcpy(estacion,"Primavera");
				}
			}
			
			if(mes==12)
			{
				if (dia>=1 && dia<=20)
				{
					strcpy(estacion,"Primavera");
				}
				else
				{
					strcpy(estacion,"Verano");
				}
			}
			
			
		}
		
		cout<<endl<<"RESULTADO";
		cout<<endl<<endl<<"La estacion corresponde a: "<<estacion<<endl<<endl;
		
	}
	else
	{
		cout<<endl<<"Los datos ingresados son ¡NO VALIDOS!"<<endl<<endl;
	}
		
	return 0;
}
