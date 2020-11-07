#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int ptj_original;
	double ptj_optenido;
	
	cout<<"\t\tCalcular Puntaje optenido en Tiro al Blanco"<<endl<<endl;
	cout<<"Digite el puntaje original: ";cin>>ptj_original;
	
	if (ptj_original>=0 && ptj_original<=10)
	{
		switch (ptj_original)
		{
			case 0:ptj_optenido=ptj_original*0.0;break;
			case 1:ptj_optenido=ptj_original*6.0;break;
			case 2:ptj_optenido=ptj_original*6.0;break;
			case 3:ptj_optenido=ptj_original*6.0;break;
			case 4:ptj_optenido=ptj_original*6.0;break;
			case 5:ptj_optenido=ptj_original*6.0;break;
			case 6:ptj_optenido=ptj_original*9.0;break;
			case 7:ptj_optenido=ptj_original*9.0;break;
			case 8:ptj_optenido=ptj_original*9.0;break;
			case 9:ptj_optenido=ptj_original*10.0;break;
			case 10:ptj_optenido=ptj_original*10.0;
		}
		
		cout<<endl<<"RESULTADO"<<endl<<endl;
		cout<<"El puntaje optenido es: "<<ptj_optenido<<endl<<endl;
	}
	else
	{
		cout<<endl<<"Los datos ingresados son ¡NO VALIDOS!";
	}
	
	return 0;
}
