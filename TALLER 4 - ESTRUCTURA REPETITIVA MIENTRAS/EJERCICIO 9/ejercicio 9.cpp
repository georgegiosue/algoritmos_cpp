#include<iostream>

using namespace std;

int main(int argc, char* argv[]) 
{	int i=1, j, num;
	char rt='s';

	while (rt!='n') {
		cout<<endl<<endl<<"Digite un numero para mostrar en pantalla de forma piramidal: ";cin>>num;
		
		if (num>=1) 
		{	do {
				j = 1;
				do {
					cout << j <<" ";
					j = j+1;
				} while ((j<=i));
				cout <<" "<< endl;
				i = i+1;
			} while ((i<=num));
			cout <<"Desea digitar otro numero?: [s/n] "<< endl;
			cin >> rt;
			if (rt=='s') 
			
			{
				i = 1;
			} 
			else 
			{
				rt ='n';
			}
		} else 
			{
			cout <<"Los datos ingresados son incorreptos"<< endl;
			}
	}
	return 0;
}

