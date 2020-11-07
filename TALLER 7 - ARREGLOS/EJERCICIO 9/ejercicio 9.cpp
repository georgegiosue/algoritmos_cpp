#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void numeroAlumno (int n,int pos[],int promedios[]);
void orden_merito (int n,int promedios[],int pos[]);
void ordenarElementos (int n,int promedios[]);
void ingreso (int n,int promedios[],int pos[]);
void validar (int &n);
const int TAM=200;

void numeroAlumno (int n,int pos[],int promedios[]){
	int i,j,aux[TAM],a=0;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (promedios[i]==pos[j]){
				aux[a]=j+1;
				a++;
			}
		}
	}
	for (i=0;i<n;i++){
		pos[i]=aux[i];
	}	
}

void orden_merito (int n,int promedios[],int pos[]){
	int i;
	cout<<endl<<endl<<"\t\t\t\tORDEN DE MERITO"<<endl<<endl<<endl;
	cout<<"\t\tOrden Merito\tNumero de Alumno\tPromedio"<<endl<<endl;
	for (i=n-1;i>=0;i--){
		cout<<"\t\t     "<<n-i<<"\t\t\t"<<pos[i]<<"\t\t   "<<promedios[i]<<endl<<endl;
	}
}

void ordenarElementos (int n,int promedios[]){
	int i,j,aux;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (promedios[i]>promedios[j]){
				aux=promedios[i];
				promedios[i]=promedios[j];
				promedios[j]=aux;
			}
		}
	}
}

void ingreso (int n,int promedios[],int pos[]){
	int i;
	cout<<endl<<endl<<"\t\t\tINGRESO DE PROMEDIOS"<<endl<<endl;
	for (i=0;i<n;i++){
		system("cls");
		cout<<endl<<"\t\t\t\tAlumno "<<i+1<<endl<<endl;
		do{
			cout<<"\t\tDigite su promedio: ";cin>>promedios[i];pos[i]=promedios[i];
			if (promedios[i]<0){
				cout<<"\t\tEl promedio ingresado es incorrepto. Vuelva a intentarlo"<<endl<<endl;
			}
		}while (promedios[i]<0);
	}	
}

void validar (int &n){
	do{
		cout<<endl<<endl<<"\t\tDigite la cantidad de estudiantes [1 - "<<TAM<<"] : ";cin>>n;
		if (n<1 || n>TAM){
			cout<<endl<<"\t\tLa cantidad de estudiantes debe estar entre 1 y "<<TAM<<endl<<endl;
		}
	}while (n<1 || n>TAM);
}

int main (int argc,char* argv[]){
	int promedios[TAM],opc,n,pos[TAM];
	cout<<endl<<endl<<"\t\t\t\tORDEN DE MERITO"<<endl<<endl;
	validar(n);
	system("cls");
	ingreso(n,promedios,pos);
	ordenarElementos(n,promedios);
	numeroAlumno(n,pos,promedios);
	system("cls");
	orden_merito(n,promedios,pos);
	return 0;
}












