#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	double ang1, ang2, ang3;		// Declaracion de variables
	
	cout<<"Calculo para determinar si un triangulo es Rectangulo, Acutangulo u Obtusangulo [Angulos en Grados Sexagesimales]"<<endl<<endl;
	cout<<endl<<"Digite el primer angulo: ";cin>>ang1;
	cout<<endl<<"Digite el segundo angulo: ";cin>>ang2;
	cout<<endl<<"Digite el tercer angulo: ";cin>>ang3;	
	
	if (ang1>=0 && ang1<=360 && ang2>=0 && ang2<=360 && ang3>=0 && ang3<=360 && ang1+ang2+ang3==180)
	{
		if (ang1==90 || ang2==90 || ang3==90)			// Triangulo Rectangulo
		{
			cout<<endl<<"El Triangulo es Rectangulo."<<endl<<endl;
		}
		
		if (ang1<90 && ang2<90 && ang3<90)				// Triangulo Acutangulo
		{
			cout<<endl<<"El Triangulo es Acutangulo."<<endl<<endl;
		}
		
		if (ang1>90 || ang2>90 || ang3>90)				// Triangulo Obtusangulo
		{
			cout<<endl<<"El Triangulo es Obtusangulo."<<endl<<endl;
		}
		
	}
	
	else
	{
		cout<<endl<<"Los angulos ingresados son incorreptos"<<endl<<endl;
	}
	
	return 0;
}
