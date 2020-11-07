#include<iostream>
#include<math.h>
#include<sstream>

using namespace std;
string convertiratexto(float f);

void base8 (int num_1, string i, int num);
int validar();

void base8(int num_1, string i, int num) {
	if (num_1>7) 
	{
		do {
			i=convertiratexto(int((num_1/8-int(num_1/8))*8+.5))+i;
			if (num_1>=8) 
			{
				num_1=int(num_1/8);
			}
		} while (num_1>8);
	}
	i = convertiratexto(num_1)+i;
	cout <<"\t\tEl Numero "<<num<<" a [BASE 8] es "<<i<<endl;
}

int validar() {
	int num;
	do {
		cout<<endl<<endl<<"\t\tDigite un numero entero [BASE 10] para su conversion a BASE 8 : ";cin >> num;
		cout<<endl<<endl;
	} while (num<=0);
	return num;
}

int main() 
{
	string i;
	int num;
	int num_1;
	i="";
	num=validar();
	num_1=num;
	base8(num_1,i,num);
	return 0;
}

string convertiratexto(float f) {
	stringstream ss;
	ss << f;
	return ss.str();
}

