#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{   
    int n, i, i_2, i_3, i_4, a, b, c=0, d=0;
	cout<<endl<<endl<<"\t\t\t\tCalcular Numeros Amigos menores que [N]\n"<<endl<<endl;
	cout<<"\t";printf("%c",168);cout<<"Que son los numeros amigos?"<<endl<<endl;
	cout<<"\tLos numeros amigos son 2 numeros el cual la suma de los divisores de uno de ellos es igual al otro y viceversa."<<endl<<endl;
    cout<<"\n\tDigite el valor de [N]: ";cin>>n;
    
    for (i=1;i<n;i++)
    {
        a=0;
            for (i_2=1;i_2<i;i_2++)
            {
            if (i%i_2==0)
                a+=i_2;
            }

            for (i_3=1;i_3<n;i_3++)
            {
                b=0;
                    for (i_4=1;i_4<i_3;i_4++)
                    {
                            if (i_3%i_4==0)
                            {
                            	b+=i_4;
                        	}
                    }

                if (a==i_3 && b==i)
                {
                        if (i!=d && i_3!=c)
                        {
                            cout<<endl<<"\t"<<i<<" y "<<i_3<<" son numeros amigos."<<endl<<endl;
                                
                            c = i;
                            d = i_3;
                        }
                }       
            }
    }
    
    return 0;
}
