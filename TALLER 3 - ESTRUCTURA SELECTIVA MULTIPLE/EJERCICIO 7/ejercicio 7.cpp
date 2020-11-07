#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	double importe, cuota;
	int colegio;
	char instituto;
	cout<<"\t\tDeterminar el importe a pagar por un alumno"<<endl<<endl;
	cout<<"\t\t\t   Instituto";
	cout<<endl<<"Colegio     \t\t A     B     C\n\nNacional\t\t50%   40%   30%\nParticular\t\t25%   20%   15%";
	cout<<endl<<endl<<"\tPROCEDENCIA DEL COLEGIO"<<endl<<endl;
	cout<<"1: Nacional\t\t2: Particular"<<endl<<endl;
	cout<<"Digite el numero para seleccionar el colegio de procedencia: ";cin>>colegio;
	cout<<endl<<endl<<"\tINSTITUTO"<<endl<<endl;
	cout<<"Instituto A"<<endl;
	cout<<"Instituto B"<<endl;
	cout<<"Instituto C"<<endl<<endl;
	cout<<"Digite la letra para seleccionar [Ejemplo: A ,para seleccionar instituto A]: ";cin>>instituto;
	cout<<endl<<endl<<"Digite la cuota: ";cin>>cuota;
	
	if (colegio==1 || colegio==2 && instituto =='a' || instituto =='b' || instituto =='c' && cuota>0)
	{
		if (colegio==1)
		{
			switch (instituto)
			{
				case 'a':importe=cuota-(cuota*0.50);break;
				case 'b':importe=cuota-(cuota*0.40);break;
				case 'c':importe=cuota-(cuota*0.30);
			}
		}
		
			if (colegio==2)
		{
			switch (instituto)
			{
				case 'a':importe=cuota-(cuota*0.25);break;
				case 'b':importe=cuota-(cuota*0.20);break;
				case 'c':importe=cuota-(cuota*0.15);
			}
		}
		
		cout<<endl<<"RESULTADO"<<endl<<endl;
		cout<<"El importe a pagar es: S/."<<importe<<endl<<endl;
	}
	else
	{
		cout<<endl<<"Los datos ingresados son ¡NO VALIDOS!"<<endl<<endl;
	}
	
	return 0;
}
