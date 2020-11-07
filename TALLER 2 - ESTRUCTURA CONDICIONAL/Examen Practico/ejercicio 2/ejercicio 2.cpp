#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int num1, num2, num3, num4, num5;
	cout<<"\t\t\tEl mayor de 5 numeros enteros"<<endl<<endl;
	cout<<"Digite el primer numero: ";cin>>num1;
	cout<<endl<<"Digite el segundo numero: ";cin>>num2;
	cout<<endl<<"Digite el tercer numero: ";cin>>num3;
	cout<<endl<<"Digite el cuarto numero: ";cin>>num4;
	cout<<endl<<"Digite el quinto numero: ";cin>>num5;
	
	if (num1>=num2 && num1>=num3 && num1>=num4 && num1>=num5)
	{
		cout<<endl<<endl<<"El mayor numero es: "<<num1<<endl<<endl;		
	}
	
	else
	{
		if (num2>=num1 && num2>=num3 && num2>=num4 && num2>=num5)
		{
			cout<<endl<<endl<<"El mayor numero es: "<<num2<<endl<<endl;
		}
		
		else
		{
			if (num3>=num1 && num3>=num2 && num3>=num4 && num3>=num5)
			{
				cout<<endl<<endl<<"El mayor numero es: "<<num3<<endl<<endl;	
			}
			
			else
			{
				if (num4>=num1 && num4>=num2 && num4>=num3 && num4>=num5)
				{
					cout<<endl<<endl<<"El mayor numero es: "<<num4<<endl<<endl;
				}
				
				else
				{
					cout<<endl<<endl<<"El mayor numero es: "<<num5<<endl<<endl;
				}
			}
		}
	}
	return 0;
}
