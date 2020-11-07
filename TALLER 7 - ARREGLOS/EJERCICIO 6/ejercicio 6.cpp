#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

void minus_array (char array[],char aux[],int n);
void mayus_array (char array[],char aux[],int n);
void listado (int n,char aux[]);
void ingreso (char array[],int &n,char aux[]);
void menu (int &opc);

void minus_array (char array[],char aux[],int n){
	int i;
	cout<<endl<<endl<<"\t\tCADA UNO DE LOS CARACTERES DE LA CADENA CONVERTIDO A MINUSCULAS"<<endl<<endl;
	for (i=0;i<n;i++){
		aux[i]=tolower(aux[i]);
	}
	listado(n,aux);

	cout<<endl<<endl<<"\t\tCADENA DE CARACTERES CONVERTIDO A MINUSCULAS"<<endl<<endl;
	cout<<"\t\t\t\t";
	for (i=0;i<n;i++){
		cout<<aux[i];
	}
}
void mayus_array (char array[],char aux[],int n){
	int i;
	cout<<endl<<endl<<"\t\tCADA UNO DE LOS CARACTERES DE LA CADENA CONVERTIDO A MAYUSCULAS"<<endl<<endl;
	for (i=0;i<n;i++){
		aux[i]=toupper(aux[i]);
	}
	listado(n,aux);

	cout<<endl<<endl<<"\t\tCADENA DE CARACTERES CONVERTIDO A MAYUSCULAS"<<endl<<endl;
	cout<<"\t\t\t\t";
	for (i=0;i<n;i++){
		
		cout<<aux[i];
	}
	
}
void listado (int n,char aux[]){
	int i;
	system("cls");
	cout<<endl<<endl<<"\t\t\t\t\t\t\t\tMOSTRAR DATOS DE CADA CARACTER DE LA CADENA"<<endl<<endl;
	for (i=0;i<n;i++){
		if (i!=0){
			cout<<endl<<"\t\t\t\t\t\t\t\t\tA["<<i-1<<"] --> "<<aux[i]<<endl<<endl;
		}
		
	}	
}
void ingreso (char array[],int &n,char aux[]){
	int i;
	cout<<endl<<endl<<"\t\t\t\t\t\tINGRESO DE DATOS"<<endl<<endl;
	cout<<"\t\t**Despues de terminar de ingresar los datos, tabule y luego presione enter**"<<endl<<endl;
	cout<<"\t\t\t\tDigite los datos en la cadena de caracteres: ";scanf("%[^\t]",array);
	n=strlen(array);
	for (i=0;i<n;i++){
		aux[i]=array[i];
    }

}
void menu (int &opc){
	cout<<endl<<endl<<"\t\t\t\t\t\tMENU"<<endl<<endl;
	cout<<"\t\t\t1. Ingresar datos\n\t\t\t2. Listar datos\n\t\t\t3. Convertir Cadena a Mayusculas\n\t\t\t4. Convertir Cadena a Minusculas\n\t\t\t5. Salir\n\n\t\t\tDigite el numero correspondiente para seleccionar: ";cin>>opc; 
	cout<<endl<<endl;
	
}

int main(int argc, char const *argv[])
{
	int opc,n;
	char array[1000],aux[1000];
	cout<<endl<<endl<<"\t\t\t    Convertir cadena de caracteres a Mayusculas y Minusculas"<<endl<<endl;
	do{
		menu(opc);
		switch (opc){
			case 1:ingreso(array,n,aux);break;
			case 2:listado(n,aux);
					cout<<"\t\t\t\tDigite una tecla para continuar"<<endl<<endl;getch();system("cls");break;
			case 3:mayus_array(array,aux,n);
					cout<<"\t\t\t\tDigite una tecla para continuar"<<endl<<endl;getch();system("cls");break;
			case 4:minus_array(array,aux,n);
					cout<<"\t\t\t\tDigite una tecla para continuar"<<endl<<endl;getch();system("cls");break;
		}
	}while (opc!=5);
	return 0;
}
