#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char* argv[])
{
	double radio=2, altura, volumen;
	cout<<"\t\t\tCalcular el Volumen de gaseosa en un tanque con un radio de 2 metros"<<endl<<endl;
	cout<<endl<<"Digite la altura en metros hasta la que llega la gaseosa: ";cin>>altura;
	volumen=M_PI*(pow(radio,2))*altura;			// Volumen de gaseosa
	cout<<endl<<endl<<"El Volumen es: "<<volumen<<" cm^3"<<endl;
	return 0;
}
