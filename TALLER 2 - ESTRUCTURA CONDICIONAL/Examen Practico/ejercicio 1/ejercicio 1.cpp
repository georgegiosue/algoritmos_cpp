#include <iostream>
#include <math.h>
using namespace std;

int main (int argc, char* argv[])
{
	double a, b, c, d, _y;
	cout<<"\t\t\tCalcular el valor de y, dado los datos ingresados"<<endl<<endl;
	cout<<"y= a+b (c) + 0.5(d^2)"<<endl<<endl;
	cout<<"Digite el valor de [a]: ";cin>>a;
	cout<<endl<<"Digite el valor de [b]: ";cin>>b;
	cout<<endl<<"Digite el valor de [c]: ";cin>>c;
	cout<<endl<<"Digite el valor de [d]: ";cin>>d;
	
	_y=(a+b)*c+((0.5)*(pow(d,2)));
	
	cout<<endl<<endl<<"El valor de la Funcion [y] es: "<<_y<<endl<<endl;
	
	return 0;
}
