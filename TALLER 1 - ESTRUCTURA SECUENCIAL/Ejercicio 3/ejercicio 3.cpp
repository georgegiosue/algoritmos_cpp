#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char* argv[])
	{
		double calificacion1, calificacion2, calificacion3, promedio; // Declaracion de variables
		cout<<"\t\t\tPromedio de Calificaciones"<<endl<<endl;
		cout<<endl<<"Digite su primera calificacion: ";				// Entrada
		cin>>calificacion1;															
		cout<<endl<<"Digite su segunda calificacion: ";				//	De
		cin>>calificacion2;
		cout<<endl<<"Digite su tercera calificacion: ";				// Datos
		cin>>calificacion3;											
		promedio=(calificacion1+calificacion2+calificacion3)/3; 	// Resultado
		cout<<endl<<endl<<"\t\tSu Promedio de sus calificaciones es: "<<promedio;	
	
	}
