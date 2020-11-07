#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int b100, b50, b20, b10, m5, m2, m1, sueldo;		// Declaracion de variables
	cout<<"\t\t\tCuantos billetes de 100, 50, 20 y 10 soles y monedas de 5, 2 y 1 sol, recibira";
	cout<<endl<<endl<<"\aDigite su sueldo: ";cin>>sueldo;
		
		// Numero de billetes de S/.100
	if (sueldo>=100) {
		b100=(sueldo/100)-(sueldo%100)/100;				
		sueldo=sueldo-b100*100;
	}
	else {
		b100=0;
	}
		// Numero de billetes de S/.50
	if (sueldo>=50) {
		b50=(sueldo/50)-(sueldo%50)/50;
		sueldo=sueldo-b50*50;
	}
	else {
		b50=0;
	}
		// Numero de billetes de S/.20
	if (sueldo>=20) {
		b20=(sueldo/20)-(sueldo%20)/20;
		sueldo=sueldo-b20*20;
	}
	else {
		b20=0;
	}
		// Numero de billetes de S/.10
	if (sueldo>=10) {
		b10=(sueldo/10)-(sueldo%10)/10;
		sueldo=sueldo-b10*10;
	}
	else {
		b10=0;
	}
		// Numero de monedas de S/.5
	if (sueldo>=5) {
		m5=(sueldo/5)-(sueldo%5)/5;
		sueldo=sueldo-m5*5;
	}
	else {
		m5=0;
	}
		// Numero de monedas de S/.2
	if (sueldo>=2) {
		m2=(sueldo/2)-(sueldo%2)/2;
		sueldo=sueldo-m2*2;
	}
	else {
		m2=0;
	}
		// Numero de monedas de S/.1
	if (sueldo>=1) {
		m1=sueldo;
	}
	else {
		m1=0;
	}
	
	cout<<endl<<endl<<"Usted recibira: "<<endl<<endl;
	cout<<b100<<" billetes de S/.100 ."<<endl;
	cout<<b50<<" billetes de S/.50 ."<<endl;
	cout<<b20<<" billetes de S/.20 ."<<endl;
	cout<<b10<<" billetes de S/.10 ."<<endl;
	cout<<m5<<" monedas de S/.5 ."<<endl;
	cout<<m2<<" monedas de S/.2 ."<<endl;
	cout<<m1<<" monedas de S/.1 ."<<endl;
	
	return 0;	
}

