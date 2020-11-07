#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void repeticionDato2 (int n,char arreglo[]);
void repeticionDato1 (int n,char arreglo[]);
void listado (int n,char arreglo[]);
void ingreso (int n,char arreglo[]);
void menu (int &opc);
void validar (int &n);
const int TAM=30;

void repeticionDato2 (int n,char arreglo[]){
	int i,j,a;
	cout<<"\t\t\t\t\t\tNUMERO DE VECES QUE SE REPITE CADA ELEMENTO DEL ARREGLO"<<endl<<endl;
	for (i=0;i<n;i++){
		a=0;
		cout<<"\t\t\t\t\t\t\t\t\tA["<<i<<"] -->"<<arreglo[i]<<endl<<endl;
		for (j=0;j<n;j++){
			if (arreglo[i]==arreglo[j]){
				a++;
			}
		}
		cout<<"\t\t\t\t\t\t\t\t\t\t\tVeces repetidas: "<<a<<endl<<endl;
	}
}
	
void repeticionDato1 (int n,char arreglo[]){
	int i,a=0;
	cout<<"\t\t\t\tBUSQUEDA DE UN ELEMENTO"<<endl<<endl;
	char elemento;
	cout<<"\t\tDigite el elemento que desea ver cuantas veces se repite en el arreglo: ";cin>>elemento;
	cout<<endl<<endl;
	for (i=0;i<n;i++){
		if (arreglo[i]==elemento){
			a++;
		}
	}
	cout<<"\t\tEl Elemento ["<<elemento<<"] se repite "<<a<<" veces"<<endl<<endl;	
}
	
void listado (int n,char arreglo[]){
	int i;
	cout<<"\t\t\t\t\t\t\t\t\t\t\tLISTADO DE DATOS"<<endl<<endl;
	for (i=0;i<n;i++){
		cout<<"\t\t\t\t\t\t\t\t\t\tA["<<i<<"]: "<<arreglo[i]<<endl<<endl;
	}
}

void ingreso (int n,char arreglo[]){
	int i;
	cout<<"\t\t\tINGRESO DE DATOS EN EL ARRELO"<<endl<<endl;
	for (i=0;i<n;i++){
		cout<<"\t\tDigite un caracter: ";cin>>arreglo[i];
		cout<<endl<<endl;
	}
}

void menu (int &opc){
	cout<<"\t\t\t\t\t\tMENU"<<endl<<endl;
	cout<<"\t\t\t1. Ingresar datos\n\t\t\t2. Listar datos\n\t\t\t3. Cantidad de veces que se repite un elemento [por busqueda]\n\t\t\t4. Cantidad de veces que se repite un elemento [todos los elementos]\n\t\t\t5. Salir\n\n\t\t\tDigite el numero correspondiente para seleccionar: ";cin>>opc; 
	cout<<endl<<endl;
}

void validar (int &n){
	do {
		cout<<"\t\tDigite la Cantidad de caracteres [1 - "<<TAM<<"]: ";cin>>n;
		cout<<endl<<endl;
		if (n<1 || n>TAM){
			cout<<"\t\tla Cantidad debe estar entre 1 y "<<TAM<<endl<<endl;
		}
	}while (n<1 || n>TAM);	
}

int main (int argc,char* argv[]){
	int opc,n;
	char arreglo[TAM];
	cout<<endl<<endl<<"\t\tDeterminar la cantidad de veces que aparece un elemento en el Arreglo"<<endl<<endl;
	validar(n);
	do{
		system("cls");
		menu(opc);
		switch (opc){
			case 1:system("cls");ingreso(n,arreglo);break;
			case 2:system("cls");listado(n,arreglo);cout<<endl<<endl<<"\t\tPresione una tecla para continuar ";getch();break;
			case 3:system("cls");repeticionDato1(n,arreglo);cout<<endl<<endl<<"\t\tPresione una tecla para continuar ";getch();break;
			case 4:system("cls");repeticionDato2(n,arreglo);cout<<endl<<endl<<"\t\tPresione una tecla para continuar ";getch();break;
		}
	}while (opc!=5);
	return 0;
}
