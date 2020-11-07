#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int r, saldo=2000, d, operacion;
    
    do
    {
        cout<<endl<<"\tMENU DE OPCIONES DEL CAJERO AUTOMATICO" <<endl<<endl<<" 1 : Retiro"<<endl<<" 2 : Saldo"<<endl<<" 3 : Deposito"<<endl<<" 4 : Salir"<<endl;

        cout<<endl<<"Digite el numero correspondiente para seleccionar: ";cin>>operacion;
        
        switch (operacion)
        {
        case 1:
            if (saldo==0)
                cout<<endl<<"Su saldo ya no tiene fondos para hacer retiros"<<endl;
            else
            {
                do
                {
                    cout<<endl<<"Digite la cantidad de su retiro: ";cin>>r;
                    
                    if (r>saldo)
                    {
                        do
                        {
                            cout<<endl<<"No puede retirar una cantidad mayor que su saldo"<<endl;
                            cout<<endl<< "Digite la cantidad de su retiro: ";cin>>r;
                        } while (r>saldo);
                    }
                } while (r<0);
                saldo-=r;
                cout<<"Su saldo es: S/."<<saldo<<endl<<endl;break;
            }

        case 2:
            cout<<endl<<"Su saldo es: S/."<<saldo<<endl;break;

        case 3:
            do
            {
                cout<<endl<<"Digite su deposito: ";cin>>d;
            } while (d<=0);
            saldo+=d;
            cout<<"Su deposito fue de: S/."<<d<<endl;
            cout << "Su saldo es de: S/."<<saldo<<endl;break;
        }
    } while (operacion!=4);
    cout<<endl<<"Su Sesion a finalizado. "<<endl<<endl;

    return 0;
}
