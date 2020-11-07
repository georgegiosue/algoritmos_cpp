#include <iostream>


using namespace std;

int main (int argc, char* argv[])
{
	double alm_gigabytes, alm_bits;			// Declaracion de variables
	cout<<"\t\t\tCapacidad de Almacenamiento de un dispositivo en Bits";
	cout<<endl<<endl<<"Digite la capacidad de almacenamiento de su dispositivo expresado en GigaBytes: ";
	cin>>alm_gigabytes;
	alm_bits = alm_gigabytes*(8000000000);  // Conversion de Gigabytes a bits
	cout<<endl<<endl<<"La capacidad de su dispositivo es equivalente a: "<<alm_bits<<" bits.";
}
