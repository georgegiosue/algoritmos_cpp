#include <iostream>

using namespace std;

double menores25 (int i, int t);
double conductores_f (int i, int t);
double masculinos15_30 (int i, int t);
double carros_fuera (int i, int t);

double menores25 (int i, int t)
{
	double result;
	result=i*100/t;
	return result;	
}

double conductores_f (int i, int t)
{
	double result;
	result=i*100/t;
	return result;	
}

double masculinos15_30 (int i, int t)
{
	double result;
	result=i*100/t;
	return result;	
}

double carros_fuera (int i, int t)
{
	double result;
	result=i*100/t;
	return result;	
}

int main (int argc, char* argv[])
{
	int anio, sexo, rg_carro, rt, anioA, edad;
	int m25=0, cf=0, cm_15_30=0, c_fuera=0, total_c=0;
	double r1, r2, r3, r4;
	
	cout<<"\n\n\t\t   Datos concernientes a todos los accidentes de transito"<<endl<<endl;
	cout<<"\t\tocurridos en el area metropolitana de Lima en el ultimo anio"<<endl<<endl;
	do
	{
		cout<<"\tDigite el anio actual: ";cin>>anioA;
	}while (anioA<=2019);
	do
	{
		total_c++;
		cout<<endl<<endl<<"\t\t\t\aDATOS DEL CONDUCTOR INVOLUCRADO"<<endl<<endl;
		do
		{
			cout<<"\tDigite el anio de nacimiento: ";cin>>anio;
		}while (anio<=1900);
		edad=anioA-anio;
		
		do
		{
			cout<<endl<<endl<<"\tDigite su sexo  [ 1: Femenino ] O [ 2: Masculino ] : ";cin>>sexo;
		}while (!(sexo==1 || sexo==2));
		do
		{
			cout<<endl<<endl<<"\tDigite el registro del carro  [ 1: Lima ] O [ 2: Otras ciudades ] : ";cin>>rg_carro;
		}while (!(rg_carro==1 || rg_carro==2));
		
		if (edad<25)
		{
			m25++;
		}
		if (sexo==1)
		{
			cf++;
		}
		if (sexo==2 && edad>=15 && edad<=30)
		{
			cm_15_30++;
		}
		if (rg_carro==2)
		{
			c_fuera++;
		}
		
		do
		{
			cout<<endl<<endl<<"\t";printf("%c",168);cout<<"Desea Agregar otro conductor?"<<endl<<endl;
			cout<<"\t1: SI"<<endl<<endl;
			cout<<"\t0: NO"<<endl<<endl;
			cin>>rt;
		}while (!(rt==1 || rt==0));
		
	}while (rt!=0);
	cout<<endl<<endl<<"\t\t\tRESUMEN:"<<endl<<endl;
	r1=menores25 (m25, total_c);
	r2=conductores_f (cf, total_c);
	r3=masculinos15_30 (cm_15_30, total_c);
	r4=carros_fuera (c_fuera, total_c);
	cout<<"\tEl porcentaje de conductores menores de 25 anios: "<<r1<<"%"<<endl<<endl;
	cout<<"\tEl porcentaje de conductores de sexo femenino: "<<r2<<"%"<<endl<<endl;
	cout<<"\tEl porcentaje de conductores masculinos con edades entre 15 y 30 anios: "<<r3<<"%"<<endl<<endl;
	cout<<"\tEl porcentaje de conductores cuyos carros estan registrados fuera de Lima: "<<r4<<"%"<<endl<<endl;
	return 0;
}
