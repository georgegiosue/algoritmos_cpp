#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void convertir_num (int n,char datos[],int aux[]);
int buscardato (int n,int aux[],int valorbuscado);
void menordato (int n,int aux[],char datos[]);
void mayordato (int n,int aux[],char datos[]);
void listardatos (int n,char datos[]);
void ingresodatos (int n,char datos[]);
void validar (int &n);
void menu (int &opc);
const int TAM=254;

void convertir_num (int n,char datos[],int aux[]){
	int i;
	for (i=0;i<=n-1;i++) {
		switch ((datos[i])) {
		case '1':aux[i] = 1;break;	
		case '2':aux[i] = 2;break;	
		case '3':aux[i] = 3;break;
		case '4':aux[i] = 4;break;
		case '5':aux[i] = 5;break;
		case '6':aux[i] = 6;break;
		case '7':aux[i] = 7;break;
		case '8':aux[i] = 8;break;
		case '9':aux[i] = 9;break;
		case 'a':aux[i] = 10;break;
		case 'b':aux[i] = 11;break;
		case 'c':aux[i] = 12;break;
		case 'd':aux[i] = 13;break;
		case 'e':aux[i] = 14;break;
		case 'f':aux[i] = 15;break;
		case 'g':aux[i] = 16;break;	
		case 'h':aux[i] = 17;break;
		case 'i':aux[i] = 18;break;
		case 'j':aux[i] = 19;break;
		case 'k':aux[i] = 20;break;
		case 'l':aux[i] = 21;break;
		case 'm':aux[i] = 22;break;
		case 'n':aux[i] = 23;break;
		case 'o':aux[i] = 24;break;
		case 'p':aux[i] = 25;break;
		case 'q':aux[i] = 26;break;
		case 'r':aux[i] = 27;break;
		case 's':aux[i] = 28;break;
		case 't':aux[i] = 29;break;
		case 'u':aux[i] = 30;break;
		case 'v':aux[i] = 31;break;
		case 'w':aux[i] = 32;break;
		case 'x':aux[i] = 33;break;
		case 'y':aux[i] = 34;break;
		case 'z':aux[i] = 35;break;	
		}
	}	
}

int buscardato (int n,int aux[],int valorbuscado){
	int i,posicion=-1;
	for (i=0;i<n;i++) {
		if (valorbuscado==aux[i]){
			posicion=i;
			i=n-1;
		}
	}
	return posicion;
}

void menordato (int n,int aux[],char datos[]){
	int i,menor_=999999,resultado;
	for (i=0;i<n;i++) {
		if (aux[i]<=menor_) {
			menor_=aux[i];
		}
	}
	resultado=buscardato(n,aux,menor_);
	cout<<endl<<endl<<"\t\tEl menor dato es: "<<datos[resultado]<<endl<<endl<<endl;
}

void mayordato (int n,int aux[],char datos[]){
	int i,mayor_=-999999,resultado;
	for (i=0;i<n;i++) {
		if (aux[i]>=mayor_) {
			mayor_=aux[i];
		}
	}
	resultado=buscardato(n,aux,mayor_);
	cout<<endl<<endl<<"\t\tEl mayor dato es: "<< datos[resultado]<<endl<<endl<<endl;
}

void listardatos (int n,char datos[]){
	int i;
	cout<<"\t\tPosicion:      Dato:" << endl;
	for (i=0;i<n;i++) {
		cout<<"\t\tA["<<i<<"]"<<"      -->"<<"    " <<datos[i]<<endl<<endl;
	}
}

void ingresodatos (int n,char datos[]){
	int i;
	for (i=0;i<n;i++) {
		cout<<endl<<endl<<"\t\t\tDigite un caracter: ";cin >> datos[i];
		cout<<endl<<endl;
	}
}

void validar (int &n){
	do {
		cout<<endl<<"\t\tDigite la cantidad de caracteres que tendra el arreglo [1 - "<<TAM<<"]: ";cin>>n; 
		cout<<endl<<endl;
		if (n<1 || n>TAM) {
			cout<<"\t\tLos cantidad no es valida"<<endl<<endl;
		}
	} while (n<1 || n>TAM);
}

void menu (int &opc){
	cout<<endl<<endl<<"\t\t\tMENU"<<endl<<endl;
	cout<< "         1. Ingresar datos"<<endl;
	cout<< "         2. Listar datos"<<endl;
	cout<< "         3. Hallar el mayor dato del arreglo"<<endl;
	cout<< "         4. Hallar el menor dato del arreglo"<<endl;
	cout<< "         5. Salir"<<endl<<endl;
	cout<< "    Digite el numero correspondiente para seleccionar: ";cin>>opc;
	cout<<endl<<endl;
}

int main (int argc,char* argv[]){
	int aux[TAM],n,opc;
	char datos[TAM];
	cout<<endl<<endl<<"\t\t\tHallar el mayor y menor dato de un Arreglo de Caracteres"<<endl<<endl;
	validar(n);
	do {
		menu(opc);
		switch (opc) {
		case 1:
			system("cls");ingresodatos(n,datos);
			convertir_num(n,datos,aux);break;
		case 2:
			system("cls");listardatos(n,datos);
			cout<<"\t\t\tPresione una tecla para continuar";getch();break;
		case 3:
			system("cls");mayordato(n,aux,datos);
			cout<<"\t\t\tPresione una tecla para continuar";getch();break;
		case 4:
			system("cls");menordato(n,aux,datos);
			cout<<"\t\t\tPresione una tecla para continuar";getch();break;
		}
	} while (opc!=5);
	return 0;
}

