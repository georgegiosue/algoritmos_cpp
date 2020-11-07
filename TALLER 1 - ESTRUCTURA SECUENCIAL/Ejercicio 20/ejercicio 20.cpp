#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	double lado_a, lado_b, lado_c, superficie;															// Declaracion de Variables
	cout<<"\t\t\tCalcular la superficie de un paralelepipedo rectangular"<<endl<<endl;
	cout<<endl<<endl<<"Digite el ancho en [cm]: ";cin>>lado_a;
	cout<<endl<<endl<<"Digite la altura en [cm]: ";cin>>lado_b;
	cout<<endl<<endl<<"Digite la profundidad en [cm]: ";cin>>lado_c;
	superficie=2*(lado_a*lado_b+lado_a*lado_c+lado_b*lado_c);											// Superficie del Paralelepipedo
	cout<<endl<<endl<<endl<<"La Superficie del Paralelepipedo rectangular es: "<<superficie<<" cm^3"<<endl<<endl;
	
	return 0;
}	

