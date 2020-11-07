#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;

int main(int argc, char*argv[]) 
{
	double anguloSexagesimal, anguloRadian; //declaracion de variables
		cout<<endl<<"\tConversion de un angulo de grados sexagesimales a radianes"<<endl<<endl;
		cout<<endl<<"Porfavor ingrese un angulo en grados Sexagesimales: ";
		cin>>anguloSexagesimal;
		anguloRadian = (anguloSexagesimal*(M_PI/180)); //resultado
		cout<<endl<<"Su angulo equivale a: "<<anguloRadian<<" Radianes."<<endl<<endl;
}
