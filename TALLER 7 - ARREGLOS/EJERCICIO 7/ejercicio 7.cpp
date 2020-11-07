#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void eliminarElemento (int &n,int pos,int datos[]);
void eliminarocurrencia (int &n,int array[]);
void mostrardatos (int n,int datos[]);
void validar (int &n);
void ingresodatos (int n,int datos[]);
void menu (int &opc);
const int TAM=254;

void eliminarElemento (int &n,int pos,int datos[]){
	int cont;
	for (cont=pos;cont<=n-2;cont++) {
		datos[cont] = datos[cont+1];
	}
	n--;
}

void eliminarocurrencia (int &n,int array[]){
	int a=0,elim,i;
	system("cls");
	cout<<endl<<endl<<"\t\tDigite el numero que desea eliminar: ";cin>>elim;
	cout<<endl<<endl<<endl;
	for (i=0;i<n;i++) {
		if (elim==array[i]){
			a++;
		}
	}
	if (a>1) {
		for (i=n-1;i>=0;i--) {
			if (array[i]==elim){
				eliminarElemento(n,i,array);
				i=0;
			}
		}
		cout<<"\t\tEl numero " << elim << " tiene "<<a+1<<" ocurrencias"<<endl<<endl;
		cout<<"\t\tEl nuevo arreglo ahora es: "<<endl<<endl;
		mostrardatos(n,array);
	} else {
		cout<<endl<<endl<<"\t\tEl numero "<< elim<<" no tiene ocurrencia en el arreglo" <<endl<<endl;
	}
}

void mostrardatos (int n,int datos[]){
	int i;
	system("cls");
	cout<<"\t\t\t\t\t\t\t\tDATOS DEL ARREGLO"<<endl<<endl;
	for (i=0;i<n;i++) {
		cout << "\t\t\t\t\t\t\t\t    A[" << i << "]" << "-->  " << datos[i]<<endl<<endl;
	}
}

void validar (int &n){
	do {
		cout<<endl<<endl<<"\t\tDigite la cantidad de numeros que tendra el arreglo [1 - "<<TAM<<"]: ";cin>>n;
		cout<<endl<<endl;
		if (n<1 || n>TAM) {
			cout<<"\t\tLos cantidad no es valida"<<endl<<endl;
		}
	} while (n<1 || n>TAM);system("cls");
}

void ingresodatos (int n,int datos[]) {
	int i;
	system("cls");
	for (i=0;i<n;i++) {
		cout<<endl<<endl<<"\t\tDigite un numero entero: ";cin>>datos[i];
		cout<<endl<<endl;
	}
	system("cls");
}

void menu (int &opc){
	cout <<endl<<endl<< "                    MENU"<<endl<<endl;
	cout << "           1. Ingresar datos"<<endl;
	cout << "           2. Listar datos"<<endl;
	cout << "           3. Eliminar la ultima ocurrencia de un elemento"<<endl;
	cout << "           4. Salir"<<endl;
	cout<<endl<< "           Digite el numero correspondiente para seleccionar: ";cin>>opc;
	cout<<endl<<endl;
}

int main (int argc,char* argv[]){
	int array[TAM],n,opc;
	cout<<endl<<endl<<"\tEliminar de un arreglo de numero enteros, la ultima ocurrencia de un numero dado"<<endl<<endl;
	validar(n);
	do {
		menu(opc);
		switch (opc) {
		case 1:ingresodatos(n,array);break;
		case 2:mostrardatos(n,array);cout<<endl<<endl<<"\t\tPresione una tecla para continuar" <<endl<<endl;getch();break;
		case 3:eliminarocurrencia(n,array);cout<<endl<<endl<<"\t\tPresione una tecla para continuar" <<endl<<endl;getch();break;
		}
	} while ((opc!=4));
	return 0;
}
