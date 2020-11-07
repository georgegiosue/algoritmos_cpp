#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int dia, mes, anio;
	cout<<"\t\tValidar Fecha"<<endl<<endl;
	cout<<"Digite el dia: ";cin>>dia;
	cout<<endl<<endl<<"Digite el mes: ";cin>>mes;
	cout<<endl<<endl<<"Digite el anio: ";cin>>anio;
	
	if (mes>=1 && mes<=12 && dia>=1 && dia<=31)
	{
		switch (mes)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: if (dia<=31)
						{
							cout<<endl<<endl<<"La Fecha es Correpta"<<endl<<endl;
						}
						else
						{
							cout<<endl<<endl<<"La Fecha es Incorrepta"<<endl<<endl;
						}
		}
		
		switch (mes)
		{
			case 4:
			case 6:
			case 9:
			case 11: if (dia<=30)
						{
							cout<<endl<<endl<<"La Fecha es Correpta"<<endl<<endl;
						}
						else
						{
							cout<<endl<<endl<<"La Fecha es Incorrepta"<<endl<<endl;
						};break;
			case 2: if (anio%4==0)
						{
							if(dia<=29)
							{
								cout<<endl<<endl<<"La Fecha es Correpta"<<endl<<endl;
							}
							else
							{
								cout<<endl<<endl<<"La Fecha es Incorrepta"<<endl<<endl;
							}
						}
						else
						{
							if (dia<=28)
							{
								cout<<endl<<endl<<"La Fecha es Correpta"<<endl<<endl;
							}
							else
							{
								cout<<endl<<endl<<"La Fecha es Incorrepta"<<endl<<endl;
							}
						}
			
			
		}
		
		
		
		
	}
	else
	{
		cout<<endl<<endl<<"La Fecha es Incorrepta"<<endl<<endl;
	}
	
	
	return 0;
}
