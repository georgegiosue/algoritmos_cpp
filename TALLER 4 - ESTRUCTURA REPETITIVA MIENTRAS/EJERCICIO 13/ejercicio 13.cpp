#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int num, s1, s2, p, i=0, j, m=0;
    char rt='s';
    cout<<endl<<endl<<" Leer un numero positivo y partirlo en 2 sumandos de forma que su producto tenga un valor maximo"<<endl<<endl;
	while (rt!='n')
	{
	
	cout<<endl<<endl<<"\tDigite un numero: ";cin>>num;
    j=num;

    do
    {
        i++;
        j-=1;
        p=i*j;
        if (p>=m)
        {
            m=p;
            s1=i;
            s2=j;
        }
    } while (j>1);
	cout<<endl<<endl<<"RESULTADOS"<<endl;
    cout<<endl<<endl<<"Sumando 1: "<<s1<<endl<<endl<<"Sumando 2: "<<s2<<endl<<endl<<"Su producto es: "<<m<<endl<<endl;
    cout<<endl<<endl<<"Digite [s/n] para probar con otro numero o finalizar: ";cin>>rt;
    if (rt=='s')
    {
    	i=0;
    	m=0;
	}
	else
	{
		rt='n';
	}
	
    }
	return 0;
}
