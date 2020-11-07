#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

void medianaArray (int n,int arreglo[],double &mediana);
void ordenarElementos (int n,int arreglo[]);
void mostrardatos (int n,int arreglo[]);
void ingresodatos (int n,int arreglo[]);
void menu (int &opc);
void validar (int &n);
const int TAM=30;

void medianaArray (int n,int arreglo[],double &mediana){
	float f=1,g=1;
	ordenarElementos (n,arreglo);
	if (n%2==0){
		f=(n/2);
		g=f-1;
		mediana=((arreglo[int (f)])+(arreglo[int (g)]));
		mediana/=2;
	}
	else{
		f=(n/2);
		mediana=arreglo[int (f)];
	}
}

void ordenarElementos (int n,int arreglo[]){
	int i,j,aux;
	for (i=0;i<n;i++){
		for (j=i+1;j<n;j++){
			if (arreglo[i]>arreglo[j]){
				aux=arreglo[i];
				arreglo[i]=arreglo[j];
				arreglo[j]=aux;
			}
		}
	}
}

void mostrardatos (int n,int arreglo[]){
	int i;
	cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\tLISTADO DE DATOS"<<endl<<endl;
	for (i=0;i<n;i++){
		cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\tA["<<i<<"] --> "<<arreglo[i];
	}	
}

void ingresodatos (int n,int arreglo[]){
	int i;
	system("cls");
	cout<<endl<<endl<<"\t\t\t\t\tINGRESO DE DATOS"<<endl<<endl;
	for (i=0;i<n;i++){
		do{
			cout<<"\t\t\t\tDigite un numero entero: ";cin>>arreglo[i];
			cout<<endl<<endl;
		}while (arreglo[i]<0);
	}
}

void menu (int &opc){
	cout<<endl<<endl<<"\t\t\t\t\t\tMENU"<<endl<<endl;
	cout<<"\t\t\t1. Ingresar datos\n\t\t\t2. Listar datos\n\t\t\t3. Hallar la mediana\n\t\t\t4. Salir\n\n\t\t\tDigite el numero correspondiente para seleccionar: ";cin>>opc; 
	cout<<endl<<endl;
}

void validar (int &n){
	do{
		cout<<endl<<endl<<"\t\tDigite la cantidad de numeros que tendra el arreglo [1 - "<<TAM<<"] : ";cin>>n;
		if (n<1 || n>TAM){
			cout<<endl<<"\t\tLa cantidad no es valida"<<endl<<endl;
		}
	}while (n<1 || n>TAM);
}

int main (int argc,char* argv[]){
	int arreglo[TAM],opc,n;
	double mediana;
	cout<<endl<<endl<<"\t\t\t\tCalcular la mediana en un Arreglo de numeros enteros"<<endl<<endl;
	validar(n);system("cls");
	do{
		menu(opc);
		switch (opc){
			case 1:system("cls");ingresodatos(n,arreglo);break;
			case 2:system("cls");mostrardatos(n,arreglo);break;
			case 3:medianaArray(n,arreglo,mediana);
					cout<<endl<<endl<<"\t\t\t\t\t\t\tLa mediana del arreglo es ---> "<<mediana;
					cout<<endl<<endl<<"\t\tPresiona una tecla para continuar";getch();system("cls");break;
		}
	}while (opc!=4);
	return 0;
}


