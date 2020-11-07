#include<iostream>
using namespace std;


float factorial(float n);
void sucecion(int arrayletras[]);
void ingresodatos(int array[]);

float factorial(float n) {
	float factorialresult;
	int i;
	factorialresult=1;
	for (i=n;i>=1;i--) {
		factorialresult=factorialresult*i;
	}
	return factorialresult;
}

void sucecion(int arrayletras[]) {
	int a=arrayletras[0],b=arrayletras[1],i,j,n=arrayletras[2];
	float arraypos[n+1],aux,sumatoria,sumatoria1;
	sumatoria=0;
	for (i=0;i<=n;i++) {
		if (i==0) {
			sumatoria=(factorial(n))/(a+(n*b));
			aux=sumatoria;
			arraypos[i]=sumatoria;
		}
		if (i%2==0 && i!=0) {
			sumatoria = sumatoria-((factorial(n-i))/(a+((n-i)*b)));
			arraypos[i]=(sumatoria-aux);
			aux=sumatoria;
		}
		if (i%2!=0) {
			sumatoria=sumatoria+((factorial(n-i))/(a+((n-i)*b)));
			arraypos[i]=sumatoria-aux;
			aux=sumatoria;
		}
		if (i==n-1) {
			sumatoria1=sumatoria;
		}
	}
	for (j=0;j<=n-1;j++) {
		cout<<endl<< "TERMINO DE LA SUCECION NUMERO : " << j+1 << " es igual a -> " << arraypos[j]<<endl<<endl;
	}
	cout<<endl<<endl<< "La sumatoria es: "<< sumatoria1<<endl;
}

void ingresodatos(int array[]) {
	int i,mayor_=-999999;
	char letra;
	for (i=0;i<=2;i++) {
		switch (i) {
		case 0:
			letra = 'a';break;
		case 1:
			letra = 'b';break;
		case 2:
			letra = 'n';break;
			break;
		}
		do {
			cout<<"Digite el valor de "<<letra<<": ";cin>>array[i];
			cout<<endl<<endl;
			if (i==2) {
				if (array[i]<=mayor_) {
					array[i]=-1;
				}
			}
			if (array[i]>mayor_) {
				mayor_=array[i];
			}
		} while (array[i]<0);
	}
}

int main(int argc,char* argv[]) {
	int arrayletras[3];
	cout<<endl<<endl<<"Programa que permite leer 3 numeros enteros positivos a,b y n (n>a,n>b). Calcula su sumatoria y muestra el valor de cada termino"<<endl<<endl<<endl;
	ingresodatos(arrayletras);
	sucecion(arrayletras);
	return 0;
}

