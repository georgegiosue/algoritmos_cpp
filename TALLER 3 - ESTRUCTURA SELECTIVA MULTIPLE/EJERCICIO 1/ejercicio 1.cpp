#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	double monto, int_pagar, monto_total;				//Declaracion de variables
	int plazo;
	cout<<"\t\tInteres Anual y Monto total a pagar"<<endl<<endl;
	cout<<"Digite el monto del prestamo solicitado en soles: ";cin>>monto;
	cout<<endl<<endl<<"Digite el plazo de tiempo en meses [3 - 6 - 12 - 18 - 24 meses]: ";cin>>plazo;
	
	if (monto>0 && plazo==3 || plazo==6 || plazo==12 || plazo==18 || plazo==24)
	{
		switch (plazo)
		{
			case 3: int_pagar=(monto*plazo*0.06)/12; monto_total=monto+int_pagar;break;		//Interes y monto total para 3 meses
			case 6: int_pagar=(monto*plazo*0.08)/12; monto_total=monto+int_pagar;break;		//Interes y monto total para 6 meses
			case 12: int_pagar=(monto*plazo*0.09)/12; monto_total=monto+int_pagar;break;	//Interes y monto total para 12 meses
			case 18: int_pagar=(monto*plazo*0.10)/12; monto_total=monto+int_pagar;break;	//Interes y monto total para 18 meses
			case 24: int_pagar=(monto*plazo*0.12)/12; monto_total=monto+int_pagar;			//Interes y monto total para 24 meses
		}
		
		cout<<endl<<endl<<"RESULTADOS"<<endl;
		cout<<endl<<"El interes anual a pagar es: S/. "<<int_pagar<<" ,y el monto total a pagar es de: S/. "<<monto_total<<endl<<endl;
		
	}
	
	else
	{
		cout<<endl<<"¡Datos no validos!"<<endl<<endl;
	}
	
	return 0;
}
