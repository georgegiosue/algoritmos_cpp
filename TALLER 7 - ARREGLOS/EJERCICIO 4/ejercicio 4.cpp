#include <iostream>

using namespace std;

void modaArreglo (int n,char arreglo[]);
void listado (int n,char arreglo[]);
void ingreso (int n,char arreglo[]);
void menu (int &opc);
void validar (int &n);
const int TAM=30;

void modaArreglo (int n,char arreglo[]){
	int i,j,a,mayor_=-999999,moda_p;
	system("cls");
	for (i=0;i<n;i++){
		a=0;
		for(j=0;j<n;j++){
			if (arreglo[i]==arreglo[j]){
				a++;
				if (a>mayor_){
					mayor_=a;
					moda_p=i;
				}
			}
		}
	}
	cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\tLa moda es --> "<<arreglo[moda_p]<<endl<<endl;
}

void listado (int n,char arreglo[]){
	int i;
	system("cls");
	cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\tLISTADO DE DATOS"<<endl<<endl;
	for (i=0;i<n;i++){
		cout<<"\t\t\t\t\t\t\t\t\t\tA["<<i<<"]:  "<<arreglo[i]<<endl<<endl;
	}	
}

void ingreso (int n,char arreglo[]){
	int i;
	system("cls");
	cout<<endl<<endl<<"\t\tINGRESO DE DATOS"<<endl<<endl;
	for (i=0;i<n;i++){
		cout<<"\t\tDigite un caracter: ";cin>>arreglo[i];
	}
}

void menu (int &opc){
	cout<<"\t\t\t\t\t\tMENU"<<endl<<endl;
	cout<<"\t\t\t1. Ingresar datos\n\t\t\t2. Listar datos\n\t\t\t3. Hallar la moda\n\t\t\t4. Salir\n\n\t\t\tDigite el numero correspondiente para seleccionar: ";cin>>opc; 
	cout<<endl<<endl;
}

void validar (int &n){
	do{
		cout<<endl<<endl<<"\t\tDigite la Cantidad de caracteres [1 - "<<TAM<<"] : ";cin>>n;
		if (n<1 || n>TAM){
			cout<<endl<<endl<<"\t\tLa cantidad debe estar entre 1 y "<<TAM<<endl<<endl;
		}
		
	}while (n<1 || n>TAM);
}

int main (int argc,char* argv[]){
	int opc,n;
	char arreglo[TAM];
	cout<<endl<<endl<<"\t\t\t\tHallar la moda en un arreglo de caracteres"<<endl<<endl;
	validar(n);
	do{
		menu(opc);
		switch (opc){
			case 1:ingreso(n,arreglo);break;
			case 2:listado(n,arreglo);break;
			case 3:modaArreglo(n,arreglo);break;
		}
	}while (opc!=4);
	return 0;
}






