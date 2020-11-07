#include <iostream>

using namespace std;

double promedio ();

double promedio ()
{
	double suma_notas=0, result_pr;
	double E1=0.25,E2=0.20,E3=0.25,E4=0.30;
	int i, x;
	
	for (i=1;i<=4;i++)
	{
		cout<<endl<<endl<<"\tDigite la nota de la evaluacion "<<i<<" :";cin>>x;
		cout<<endl<<endl;
		
		switch (i)
		{
			case 1: suma_notas=suma_notas+(x*E1);break;
			case 2: suma_notas=suma_notas+(x*E2);break;
			case 3: suma_notas=suma_notas+(x*E3);break;
			case 4: suma_notas=suma_notas+(x*E4);break;
		}
	}
	result_pr=suma_notas;
	return result_pr;
}

int main (int argc, char* argv[])
{
	int n, i, codigo;
	double promedio_p, promedio_f=0;
	
	cout<<endl<<endl<<"\t\tNota definitiva de cada estudiante y Promedio de notas definitivas del curso"<<endl<<endl<<endl;
	
	do
	{
		cout<<"\tDigite el numero de estudiantes: ";cin>>n;
	}while (n<1);
	
	for (i=1;i<=n;i++)
	{
		cout<<endl<<endl<<"\tDigite el codigo del "<<i<<" estudiante: ";cin>>codigo;
		promedio_p=promedio();
		cout<<endl<<endl<<"\tLa NOTA DEFINITIVA del estudiante "<<i<<" con codigo : ["<<codigo<<"] es: "<<promedio_p<<endl<<endl;
		promedio_f=promedio_f+promedio_p;
	}
	cout<<endl<<endl<<"\t\tPromedio de notas definitivas del curso es: "<<promedio_f/n<<endl<<endl;
	return 0;
}

