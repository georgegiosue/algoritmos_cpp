#include <iostream>
#include <string.h>

using namespace std;

int main (int argc, char* argv[])
{
	double pesoT, pesoF;
	char letra1, letra2, n_cuerpo[16];
	cout<<"\t\tCalcular su peso relativo en varios cuerpos del sistema solar"<<endl<<endl;
	cout<<"Digite su peso en Kg: ";cin>>pesoT;
	cout<<endl<<endl<<"Hallar su peso en: "<<endl<<endl;
	cout<<"\t_Sol\t_Mercurio\t_Venus\t  _Luna"<<endl<<endl;
	cout<<"_Marte\t_Jupiter\t_Saturno\t_Urano\t _Neptuno"<<endl<<endl;
	cout<<"Digite la primera letra en minusculas del lugar en donde necesita saber el peso: ";cin>>letra1;
	
	if (pesoT>0 && letra1=='s' || letra1=='m' || letra1=='v' || letra1=='l' || letra1=='j' || letra1=='u' || letra1=='n')
	{
		switch (letra1)
		{
			case 's':cout<<endl<<endl<<"Ah ocurrido una ambiguedad"<<endl<<endl;cout<<"Digite la segunda letra en minusculas del lugar que selecciono: ";cin>>letra2;
						switch (letra2)
						{
							case 'o':pesoF=pesoT*27.94;strcpy(n_cuerpo,"el Sol");break;
							case 'a':pesoF=pesoT*1.15;strcpy(n_cuerpo,"Saturno");break;
							default:pesoF=0;break;
						};break;
			case 'm':cout<<endl<<endl<<"Ah ocurrido una ambiguedad"<<endl<<endl;cout<<"Digite la segunda letra en minusculas del lugar que selecciono: ";cin>>letra2;
						switch (letra2)
						{
							case 'e':pesoF=pesoT*0.37;strcpy(n_cuerpo,"Mercurio");break;
							case 'a':pesoF=pesoT*0.38;strcpy(n_cuerpo,"Marte");break;
							default:pesoF=0;break;
						};break;
			case 'v':pesoF=pesoT*0.88;strcpy(n_cuerpo,"Venus");break;
			case 'l':pesoF=pesoT*0.17;strcpy(n_cuerpo,"La Luna");break;
			case 'j':pesoF=pesoT*2.64;strcpy(n_cuerpo,"Jupiter");break;
			case 'u':pesoF=pesoT*1.17;strcpy(n_cuerpo,"Urano");break;
			case 'n':pesoF=pesoT*0.88;strcpy(n_cuerpo,"Neptuno");break;	
			
		}
		if (pesoF!=0)
		{
		cout<<endl<<endl<<"RESULTADOS"<<endl<<endl;
		cout<<"Su peso en "<<n_cuerpo<<" es de: "<<pesoF<<" Kg."<<endl<<endl;
		}
		else
		{
			cout<<endl<<endl<<"Los datos ingresados son ¡NO VALIDOS!"<<endl<<endl;
		}
	}
	else
	{
		cout<<endl<<endl<<"Los datos ingresados son ¡NO VALIDOS!"<<endl<<endl;
	}
		
	return 0;
}
