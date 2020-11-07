#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int edad, diasT;		// Definir Variables
	cout<<"\t\t\tNumero de dias aproximados que ha vivido una persona"<<endl;
	cout<<endl<<endl<<"Digite su edad: ";
	cin>> edad;
	diasT=edad*365; 		// Dias transcurridos
	cout<<endl<<endl<<"Has vivido: "<<diasT<<" dias aproximados.";
} 
