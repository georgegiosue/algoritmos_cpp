#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	float num1, num2, num3;										// Declaracion de variables
	cout<<"\t\t\t3 Numeros en orden Ascendente"<<endl<<endl;
	cout<<"Digite el primer numero: ";cin>>num1;
	cout<<endl<<"Digite el segundo numero: ";cin>>num2;
	cout<<endl<<"Digite el tercer numero: ";cin>>num3;
	
	if (num1<=num2 and num2<=num3)
	{
		cout<<endl<<"El resultado es:"<<endl;
		cout<<endl<<num1<<", "<<num2<<", "<<num3<<endl<<endl;	
	}	
	else
	{
		if (num3<=num2 and num2<=num1)
		{
			cout<<endl<<"El resultado es:"<<endl;
			cout<<endl<<num3<<", "<<num2<<", "<<num1<<endl<<endl;
		}
		else
		{
			if (num2<=num1 and num1<=num3)
			{
				cout<<endl<<"El resultado es:"<<endl;
				cout<<endl<<num2<<", "<<num1<<", "<<num3<<endl<<endl;
			}
			else
			{
				if (num3<=num1 and num1<=num2)
				{
					cout<<endl<<"El resultado es:"<<endl;
					cout<<endl<<num3<<", "<<num1<<", "<<num2<<endl<<endl;
				}
				else
				{
					if (num2<=num3 and num3<=num1)
					{
						cout<<endl<<"El resultado es:"<<endl;
						cout<<endl<<num2<<", "<<num3<<", "<<num1<<endl<<endl;
					}
					else
					{
						cout<<endl<<"El resultado es:"<<endl;
						cout<<endl<<num1<<", "<<num3<<", "<<num2<<endl<<endl;
					}
				}
			}
		}
	}

	return 0;
}
