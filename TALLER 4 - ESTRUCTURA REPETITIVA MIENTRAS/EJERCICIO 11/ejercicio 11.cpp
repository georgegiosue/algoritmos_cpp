#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    int c, tc;
    tc=0;
    char nombre[21];
    cout<<endl<<endl<<"\t\tSistema de matricula"<<endl<<endl;
    do
    {	cout<<endl<<" Digite el nombre del curso: ";cin>>nombre;
        cout<<endl<<"\n Digite el numero de creditos: ";cin>>c;
        
        tc=tc+c;
        if (tc>22)
        {
            tc=tc-c;
            
            cout<<endl<<endl<<"\t\t"<<nombre<<" ,Curso NO MATRICULADO; Usted a sobrepasado el limite de los 22 creditos" <<endl<<endl;
        	cout<<"[MATRICULESE EN OTRO CURSO]"<<endl<<endl;
        }
        else
        {	
            cout<<endl<<endl<<"\t\t"<<nombre<<" ,Curso MATRICULADO"<<endl<<endl;
            cout<<"\t\tTotal de creditos acumulados: " <<tc<<endl<<endl;
            
        }
        if (tc==22)
        {
        	cout<<endl<<"\t\tSu matricula a finalizado con EXITO."<<endl<<endl;
		}
    } while (tc<22);
    return 0;
}
