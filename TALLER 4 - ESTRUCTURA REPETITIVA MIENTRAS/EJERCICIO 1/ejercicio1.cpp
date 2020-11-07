#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int num, i, max, min, sum;
	double med;
	i=0;
	num=0;
	sum=0;
	max=0;
	min=999999;
	
	cout<<"\nCalcular el minimo, el maximo, y la media de una lista de numeros enteros positivos"<<endl<<endl;
	
	while (num>=0)
	{
		cout<<"Digite un numero: ";cin>>num;
			if (num>0)
			{
			i++;
			sum+=num;
			}
			if (num>max)
			{
				max=num;
			}
			
			if (num>=0 && num<min)
			{
				min=num;
			}
				
	}
	med=sum/i;
	cout<<endl<<"\tRESULTADOS"<<endl<<endl;
	cout<<endl<<"_La media es: "<<med;
	cout<<endl<<endl<<"_El Maximo valor es: "<<max;
	cout<<endl<<endl<<"_El Minimo valor es: "<<min<<endl<<endl;
	return 0;
}
