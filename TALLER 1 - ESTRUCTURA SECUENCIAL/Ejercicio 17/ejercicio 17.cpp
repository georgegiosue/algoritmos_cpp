#include <iostream>

using namespace std;

int main  (int argc, char* argv[])
{
	int n, suma;		// Declaracion de Variables
	cout<<"\t\t\tDeterminar la suma de los primeros [N] numeros"<<endl<<endl;
	cout<<"Digite el valor de [N]: ";cin>>n;
	suma=n*(n+1)/2;		// Suma de los primeros [N] numeros
	cout<<endl<<endl<<"La Suma es: "<<suma<<endl<<endl;
	
	return 0;
}
