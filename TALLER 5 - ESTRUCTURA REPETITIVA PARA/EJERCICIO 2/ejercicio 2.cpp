#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int i , may_ab;
	double a=0, b=0, n=0, sumatoria=0;
	char rt='n';
	
	cout<<"\n\n\t\tCalcular el valor de la sumatoria de 3 numeros enteros positivos : [n>a,n>b]"<<endl<<endl;
	cout<<"\t\t   a     a+b     a+2b     a+3b     a+nb"<<endl;
	cout<<"\t\t   -  -  ---  +  ----  -  ----  +  ----"<<endl;
	cout<<"\t\t   1      2       3         4       n+1"<<endl<<endl;
	
	do
	{
		do
		{
			cout<<"\n\tDigite el valor de a: ";cin>>a;
			cout<<"\n";
		}while(a<=0);
		
		do
		{
			cout<<"\n\tDigite el valor de b: ";cin>>b;
			cout<<"\n";
		}while(b<=0);
		
		if (a>b)
		{
			may_ab=a;
		}
		else
		{
			may_ab=b;
		}
		
		do
		{
			cout<<"\tDigite el valor de n: ";cin>>n;
			cout<<"\n";
		}while(n<=may_ab);
		
		for (i=1;i<=n+1;i++)
		{
			if (i==1)
			{
				sumatoria+=a/i;
			}
			else
			{
				if (i%2==0)
				{
					sumatoria-=((a+((i-1)*b))/i);
				}
				if (i%2!=0 && i!=1)
				{
					sumatoria+=((a+((i-1)*b))/i);
				}
			}
		}
		
		cout<<endl<<endl<<"El resultado de la sumatoria es: "<<sumatoria;
		
		cout<<endl<<endl;printf("%c",168);cout<<"Desea realizar otro calculo? [s/n]: ";cin>>rt;
		
		if (rt=='s')
		{
			a=0;
			b=0;
			n=0;
			sumatoria=0;
		}
		else
		{
			rt='n';
		}
		
		
	}while(rt!='n');
	
	
	return 0;
}
