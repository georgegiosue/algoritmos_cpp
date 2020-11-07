#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void eliminarElemento (int n_a,int pos,int A_a[]);
void diferenciaArreglos (int n_a,int n_b,int &n_c,int A_a[],int A_b[],int A_c[]);
void mostrardatos (int n_a,int n_b,int A_a[],int A_b[],int n_c, int A_c[]);
void ingresodatos (int n_a,int n_b,int A_a[],int A_b[]);
void validar (int &n_a,int &n_b);
void menu (int &opc);
const int TAM=30;

void eliminarElemento (int n_a,int pos,int A_aux[]){
    int a;
    for (a=pos;a<=n_a-2;a++){
        A_aux[a]=A_aux[a+1];
    }
}
void diferenciaArreglos (int n_a,int n_b,int &n_c,int A_a[],int A_b[],int A_c[]){
    int i,j,k,A_aux[TAM];
    for (i=0;i<n_a;i++){
        for (j=0;j<n_b;j++){
            if (A_a[i]==A_b[j]){
                n_c++;
            }
        }
    }
    n_c=n_a-n_c;
    for (i=0;i<n_a;i++){
        A_aux[i]=A_a[i];
    }
    for (i=0;i<n_a;i++){
        for (j=0;j<n_b;j++){
            if(A_aux[i]==A_b[j]){
                eliminarElemento(n_a,i,A_aux);
            }
        }
    }
    for (i=0;i<n_c;i++){
        A_c[i]=A_aux[i];
    }
    mostrardatos(n_a,n_b,A_a,A_b,n_c,A_c);
}

void mostrardatos (int n_a,int n_b,int A_a[],int A_b[],int n_c, int A_c[]){
    int i,j;
    
    cout<<endl<<"\t\t\t\t\t\t\t\t\tLISTADO DE DATOS"<<endl<<endl;
    for (i=0;i<3;i++){
       switch (i){
           case 0: cout<<"\t\t\t\t\t\t\t\t\tArreglo [A]"<<endl<<endl;for (j=0;j<n_a;j++){
	               cout<<"\t\t\t\t\t\t\t\t\tA["<<j<<"]"<<"-->"<<A_a[j]<<endl;
	               }break;
	               
            case 1: cout<<"\n\t\t\t\t\t\t\t\t\tArreglo [B]"<<endl<<endl;for (j=0;j<n_b;j++){
                	cout<<"\t\t\t\t\t\t\t\t\tB["<<j<<"]"<<"-->"<<A_b[j]<<endl;
                	}break;
    
            case 2: cout<<"\n\t\t\t\t\t\t\t\t\tArreglo [C]"<<endl<<endl;
					if (n_c==0){
                	cout<<"\t\t\t\t\t\t\t\tEl arreglo C no esta inicializado"<<endl<<endl;
					}
	                else{
	                	for (j=0;j<n_c;j++){
	                    	cout<<"\t\t\t\t\t\t\t\t\tC["<<j<<"]"<<"-->"<<A_c[j]<<endl;
	                    }
	                }break;
        }
	}
	
}

void ingresodatos (int n_a,int n_b,int A_a[],int A_b[]){
	int i,j;
	system("cls");
	for (i=0;i<2;i++){
		switch (i){
			case 0: cout<<endl<<endl<<"\t\t\t\tIngreso de Datos en Arreglo [A]";
					for (j=0;j<n_a;j++){
						do{
							cout<<endl<<endl<<"\t\tDigite un numero entero: ";cin>>A_a[j];
						}while (A_a[j]<0);
					};break;
			case 1: cout<<endl<<endl<<"\t\t\t\tIngreso de Datos en Arreglo [B]";
					for (j=0;j<n_b;j++){
						do{
							cout<<endl<<endl<<"\t\tDigite un numero entero: ";cin>>A_b[j];
						}while (A_b[j]<0);
					}break;
		}
	}	
}

void validar (int &n_a,int &n_b){
	int i;
	char letraArreglo;
	for (i=0;i<2;i++){
		do{
			switch (i){
				case 0:letraArreglo='A';break;
				case 1:letraArreglo='B';break;
			}
			cout<<endl<<endl<<"\t\tARREGLO ["<<letraArreglo<<"]"<<endl<<endl;
			cout<<"\t\tDigite la cantidad de numeros que tendra el arreglo [1 - "<<TAM<<"] : ";
			switch (i){
				case 0:cin>>n_a;break;
				case 1:cin>>n_b;break;
			}
			if (n_a<1 || n_a>TAM || n_b<1 || n_b>TAM){
				cout<<"\t\tLa cantidad no es valida"<<endl<<endl;
			}
		}while ((n_a<1 || n_a>TAM) || (n_b<1 || n_b>TAM));
	}
}

void menu (int &opc){
	cout<<endl<<endl<<"\t\t\t\t\t\tMENU"<<endl<<endl;
	cout<<"\t\t1. Ingresar datos\n\t\t2. Listar datos\n\t\t3. Crear Arreglo con elementos [A-B]\n\t\t4. Salir\n\n\t\tDigite el numero correspondiente para seleccionar: ";cin>>opc;
}

int main (int argc, char* argv[]){
	int A_a[TAM],A_b[TAM],A_c[TAM],n_a=2,n_b=2,n_c=0,opc;
	cout<<endl<<endl<<"\t\t\t\tArreglo de numero enteros"<<endl<<endl;
	cout<<"\t\tDados dos arreglos numericos A y B, de N1 y N2 elementos \n\t\trespectivamente; se creara un arreglo C que cumpla [A-B]"<<endl<<endl;
	validar(n_a,n_b);system("cls");
	do{
		menu(opc);
		switch (opc){
			case 1: ingresodatos(n_a,n_b,A_a,A_b);system("cls");break;
			case 2: mostrardatos(n_a,n_b,A_a,A_b,n_c,A_c);break;
			case 3: diferenciaArreglos(n_a,n_b,n_c,A_a,A_b,A_c);break;
		}
	}while (opc!=4);
	return 0;
}


