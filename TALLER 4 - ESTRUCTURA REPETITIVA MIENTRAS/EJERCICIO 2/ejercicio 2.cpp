#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i=1, n, suma=1;

    cout << "\tCalcular la suma de los numeros impares comprendidos entre 1 y N" <<endl<<endl;
    cout << "Ingrese el valor de [N]: ";cin>>n;

    if (n % 2 == 0)
    {
        n-=1;
    }

    while (i<n)
    {
        i += 2;
        suma += i;
    }
    cout<<endl<<endl<<"\tRESULTADO: "<<suma<<endl<<endl;
   
    return 0;
}
