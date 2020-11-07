#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void bus_pos (int n,int array[]);
void listado (int n,int array[]);
void ingreso (int n,int array[]);
void menu (int &opc);
void validar (int &n);
const int TAM=30;

void bus_pos (int n,int array[]){
	int i,elemento,pos=-1;
	do{
		cout<<endl<<endl<<"\t\tDigite el numero a buscar: ";cin>>elemento;
		cout<<endl<<endl;
		if (elemento<0){
			cout<<"\t\tDato no valido, porfavor vuelva a intentarlo"<<endl<<endl;
		}
	}while (elemento<0);
	for (i=0;i<n;i++){
		if (array[i]==elemento){
			pos++;
			switch (pos){
				case 0:cout<<endl<<endl<<"\t\t\t\t\tEl elemento ["<<elemento<<"] se encuentra en las posiciones dentro del arreglo: "<<endl<<endl;break;
			}
			pos=i;
			cout<<endl<<endl<<"\t\t\t\t\tA["<<pos<<"]"<<endl<<endl;
		}
	}
	if (pos==-1){
		cout<<endl<<endl<<"\t\t\t\t\tEl elemento ["<<elemento<<"] no se encuentra en el arreglo"<<endl<<endl;
	}
}

void listado (int n,int array[]){
	int i;
	cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\tLISTADO DE DATOS"<<endl<<endl;
	for (i=0;i<n;i++){
		cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\tA["<<i<<"] --> "<<array[i];
	}	
}

void ingreso (int n,int array[]){
	int i;
	system("cls");
	cout<<endl<<endl<<"\t\t\t\t\tINGRESO DE DATOS"<<endl<<endl;
	for (i=0;i<n;i++){
		do{
			cout<<"\t\t\t\tDigite un numero entero: ";cin>>array[i];
			cout<<endl<<endl;
		}while (array[i]<0);
	}
}

void menu (int &opc){
	cout<<endl<<endl<<"\t\t\t\t\t\tMENU"<<endl<<endl;
	cout<<"\t\t\t1. Ingresar datos\n\t\t\t2. Listar datos\n\t\t\t3. Buscar elemento y mostrar su posicion\n\t\t\t4. Salir\n\n\t\t\tDigite el numero correspondiente para seleccionar: ";cin>>opc; 
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
	int array[TAM],opc,n;
	cout<<endl<<endl<<"\t\t\t\t\tARREGLO DE NUMEROS ENTEROS"<<endl<<endl;
	cout<<"\t\tSegun un numero dado, buscar y mostrar su posicion dentro de un arreglo"<<endl<<endl;
	validar(n);
	do{
		menu(opc);
		switch (opc){
			case 1:system("cls");ingreso(n,array);break;
			case 2:;system("cls");listado(n,array);cout<<endl<<endl<<"\t\tDigite una tecla para continuar";getch();break;
			case 3:system("cls");bus_pos(n,array);cout<<endl<<endl<<"\t\tDigite una tecla para continuar";getch();break;
		}
	}while (opc!=4);
	
	return 0;
}

