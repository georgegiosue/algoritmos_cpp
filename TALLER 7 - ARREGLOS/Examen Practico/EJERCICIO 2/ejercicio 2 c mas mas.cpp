#include <iostream>

using namespace std;

void vecesrepetidas(int n,char array[]);
void ingreso (int n,char array[]);
void validar (int &n);
const int TAM=160303;

void vecesrepetidas(int n,char array[]){
	int i,j,a;
	cout<<"\t\t\t\t\t\tNUMERO DE VECES QUE SE REPITE CADA ELEMENTO DEL ARREGLO"<<endl<<endl;
	for (i=0;i<n;i++){
		a=0;
		cout<<"\t\t\t\t\t\t\t\t\tA["<<i<<"] -->"<<array[i]<<endl<<endl;
		for (j=0;j<n;j++){
			if (array[i]==array[j]){
				a++;
			}
		}
		cout<<"\t\t\t\t\t\t\t\t\t\t\tVeces repetidas: "<<a<<endl<<endl;
	}
}

void ingreso (int n,char array[]){
	int i;
	cout<<"\t\t\tINGRESO DE DATOS EN EL ARRELO"<<endl<<endl;
	for (i=0;i<n;i++){
		cout<<"\t\tDigite un caracter: ";cin>>array[i];
		cout<<endl<<endl;
	}
}

void validar (int &n){
	do {
		cout<<"\t\tDigite la Cantidad de caracteres que tendra el arreglo [1 - "<<TAM<<"]: ";cin>>n;
		cout<<endl<<endl;
		if (n<1 || n>TAM){
			cout<<"\t\tla Cantidad debe estar entre 1 y "<<TAM<<endl<<endl;
		}
	}while (n<1 || n>TAM);	
}

int main (int argc,char* argv[]){
	int n;
	char array[TAM];
	cout<<"\tDeterminar la cantidad de veces que aparece cada uno de los elementos contenidos en un arreglo"<<endl<<endl;
	validar(n);
	ingreso(n,array);
	vecesrepetidas(n,array);
	return 0;
}
