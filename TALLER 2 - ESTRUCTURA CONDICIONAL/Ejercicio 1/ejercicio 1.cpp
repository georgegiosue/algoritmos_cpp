#include <iostream>

using namespace std;

int main (int argc, char* argv[])			// Declaracion de variables
{
	double num, num_mayor, num_menor, contador;
	num_mayor=-999999;
	num_menor=999999;
	cout<<"\t\t\tCalculo del mayor y menor de 5 numeros"<<endl<<endl;
	 
	for (contador=1;contador<=5;contador++)	// 5 veces el ciclo para descartar por remplazo y que salga el mayor y menor numeros
	{
		cout<<endl<<"Digite un numero: ";cin>>num;
		
		if(num<num_menor)
		{
			num_menor=num;
		}
		
		if(num>num_mayor)
		{
			num_mayor=num;
		}
	}
	
	cout<<endl<<endl<<"El menor de los cinco numeros es: "<<num_menor;
	cout<<endl<<endl<<"El mayor de los cinco numeros es: "<<num_mayor<<endl<<endl;
	
	return 0;
 } 
