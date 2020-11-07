#include<iostream>
#include<math.h>
#include<sstream>

using namespace std;

string convertiratexto(float f);

int main(int argc, char* argv[]) 
{
	int a, cifras, i, longitud_, num, p;
	string b;
	string rt;
	a = 0;
	i = 0;
	p = 0;
	rt = "s";
	cout<<endl<<endl<<"\tCalcular cuantos digitos tiene un numero y si son pares o impares"<<endl<<endl;
	
	while (rt!="n") 
	{
		cout <<endl<<endl<<"\tDigite un numero: ";cin>>num;
		cout<<"\n\n";
		b = convertiratexto(num);
		longitud_ = b.size();
		do {
			a = a+1;
			cifras = int(num%10);
			num = int(num/10);
			cout<<"\t"<<cifras;
			if ((cifras%2==0)) {
				cout<<" : Numero par"<<endl<<endl;
				p = p+1;
			} else {
				cout<<" : Numero impar"<<endl<<endl;
				i = i+1;
			}
		} while ((a<longitud_));
		cout<<"\n\tEl Numero " << b << " tiene: " << longitud_ << " cifras."<<endl<<endl;
		cout<<"\t"<<p<<" son pares." <<endl;
		cout<<"\t"<<i<<" son impares." <<endl<<endl<<endl;
		cout<<"\t";printf("%c",168);cout<<"Desea Calcular para otro numero? [s/n] : ";cin>>rt;
	
		if (rt=="s") 
		{
			a = 0;
		} 
		else 
		{
			rt = "n";
		}
	}
	
	
	
	return 0;
}


string convertiratexto(float f) {
	stringstream ss;
	ss << f;
	return ss.str();
}


