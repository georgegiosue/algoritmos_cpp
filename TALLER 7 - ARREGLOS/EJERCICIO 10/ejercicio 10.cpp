#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void array_pos (int array[]);
void ingresoDatos (int array[]);

void array_pos (int array[]){
	int array_p[array[2]+1],aux,i,a;
	float sumatoria=0,sumatoria_1;
	
	for (i=1;i<=array[2]+2;i++){
		if (i==1){
			sumatoria=sumatoria+array[0]/i;aux=sumatoria;
			array_p[0]=sumatoria;
		}
		else{
			if (i%2==0){
				sumatoria=sumatoria-((array[0]+((i-1)*array[1]))/i);
				array_p[i-2]=(sumatoria+aux);
				aux=sumatoria;
			}
			if (i%2!=0 && i!=1 ){
				sumatoria=sumatoria+((array[0]+((i-1)*array[1]))/i);
				array_p[i-2]=(sumatoria-aux)*(-1);
				aux=sumatoria;				
			}
		}
		if (i==array[2]-1){
			sumatoria_1=sumatoria;
			}	
	}
	for (i=0;i<=array[2]+1;i++){
		a=i;
		if (i==array[2]+1){
			a=array[2];
			cout<<endl<<endl<<"\t\tTermino Numero "<<i<<" --> "<<" "<<array_p[a]<<endl<<endl;
		}
		if (i<array[2]){
			cout<<endl<<endl<<"\t\tTermino Numero "<<a+1<<" -->"<<" "<<array_p[i];
		}
	}
	cout<<endl<<endl<<"\t\tLa Sumatoria es : "<<sumatoria_1<<endl<<endl;	
}

void ingresoDatos (int array[]){
	int i,mayor_=-999999;
	char letra;
	for (i=0;i<=2;i++){
		switch (i){
			case 0:letra='a';break;
			case 1:letra='b';break;
			case 2:letra='n';break;
		}
		do{
			cout<<endl<<endl<<"\t\tDigite el valor de "<<letra<<" : ";cin>>array[i];
			if (i==2){
				if (array[i]<=mayor_){
					array[i]=-1;cout<<endl<<endl<<"\t\tEl valor de n debe ser mayor que "<<array[0]<<" y "<<array[1]<<endl;
				}
			}
			if (array[i]>mayor_){
				mayor_=array[i];
			}
		}while (array[i]<0);
	}
}

int main (int argc,char* argv[]){
	int array_3[3];
	cout<<endl<<endl<<"\t\t\tPara 3 numeros enteros positivos a, b y n (n>a, n>b); Calcular la sumatoria:"<<endl<<endl;
	cout<<"\t\t\t         a    a+b    a+2b   a+3b           a+nb"<<endl;
	cout<<"\t\t\t        --- - ---  + ---- - ---- +  .... + -----"<<endl;
	cout<<"\t\t\t         1     2       3      4             n+1"<<endl<<endl;
	ingresoDatos(array_3);	
	array_pos(array_3);
	return 0;
}
















