#include <iostream>
#include <string.h>

using namespace std;

int main (int argc, char* argv[])
{
	int numero;			//Declaracion de variable
	char mes[16];
	cout<<"\t\tDeterminar el Numero correspondiente a un numero de meses"<<endl<<endl;
	cout<<"Digite un numero: ";cin>>numero;
	
	if (numero>=1 && numero<=12)
	{
		switch (numero)
		{
			case 1: strcpy(mes,"Enero");break;
			case 2: strcpy(mes,"Febrero");break;
			case 3: strcpy(mes,"Marzo");break;
			case 4: strcpy(mes,"Abril");break;
			case 5: strcpy(mes,"Mayo");break;
			case 6: strcpy(mes,"Junio");break;
			case 7: strcpy(mes,"Julio");break;
			case 8: strcpy(mes,"Agosto");break;
			case 9: strcpy(mes,"Setiembre");break;
			case 10: strcpy(mes,"Octubre");break;
			case 11: strcpy(mes,"Noviembre");break;
			case 12: strcpy(mes,"Diciembre");
		}
		
		cout<<endl<<"RESULTADO"<<endl<<endl;
		cout<<"El mes corresponde a: "<<mes<<endl<<endl;
	}
	else
	{
		cout<<endl<<"El numero ingresado es !No valido¡"<<endl<<endl;
	}
	
	
	return 0;
}
