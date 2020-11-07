#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int edad, tiempo;
	cout<<"\t\tCalcular la cantidad de dias que ha vivio"<<endl<<endl;
	cout<<"Digite su edad: ";cin>>edad;
	
	if (edad>0)
	{
		tiempo=edad*365;
	}
	else
	{
		cout<<endl<<endl<<"La edad ingresada es incorrepta";
	}
	
	cout<<endl<<"La cantidad de dias que ha vivido es: "<<tiempo<<endl<<endl;
	
	
	return 0;
}
