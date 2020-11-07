#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	float sueldoBM, sueldo_n, jefe10, titulo10, postgrado10, jefe15, titulo15, postgrado15;
	int anios, jefe, titulo, postgrado;
	cout<<"\t\t\tDeterminar el sueldo Neto"<<endl<<endl;
	cout<<"Digite su sueldo basico mensual: ";cin>>sueldoBM;
	cout<<endl<<endl<<"ANIOS DE SERVICIOS"<<endl<<endl;
	cout<<"Digite sus anios de servicio: ";cin>>anios;
	cout<<endl<<endl<<"OTROS CONCEPTOS; digite [ (1) para SI / (0) para NO]"<<endl<<endl;
	cout<<"¿Usted es Jefe? : ";cin>>jefe;
	cout<<endl<<endl<<"¿Tiene titulo Universitario? : ";cin>>titulo;
	cout<<endl<<endl<<"¿Tiene Estudios de Postgrado? : ";cin>>postgrado;
	
	if (sueldoBM>0 && anios>0 && jefe==1 || jefe==0 && titulo==1 || titulo==0 && postgrado==1 || postgrado==0)
	{
		
		if(anios>=1 && anios<=5)
		{
			sueldo_n=sueldoBM+(sueldoBM*0.10);
			
			if (jefe==1 || titulo==1 || postgrado==1)
			{
				
				if (jefe==1 && titulo==0 && postgrado==0)
				{
					
					jefe10=sueldo_n+(sueldoBM*0.10);
					cout<<endl<<"Su sueldo neto es: S/."<<jefe10;
				}
				
				if (jefe==0 && titulo==1 && postgrado==0)
				{
					
					titulo10=sueldo_n+(sueldoBM*0.05);
					cout<<endl<<"Su sueldo neto es: S/."<<titulo10;
					
				}
				
				if (jefe==0 && titulo==0 && postgrado==1)
				{
					
					postgrado10=sueldo_n+(sueldoBM*0.12);
					cout<<endl<<"Su sueldo neto es: S/."<<postgrado10;
					
				}
				
				if (jefe==1 && titulo==1 && postgrado==1)
				{
					
					sueldo_n=sueldo_n+(sueldoBM*0.10)+(sueldoBM*0.05)+(sueldoBM*0.12);
					cout<<endl<<"Su sueldo neto es: S/."<<sueldo_n;
					
				}
				
				if (jefe==1 && titulo==1 && postgrado==0)
				{
					
					sueldo_n=sueldo_n+(sueldoBM*0.10)+(sueldoBM*0.05);
					cout<<endl<<"Su sueldo neto es: S/."<<sueldo_n;
				}
				
				if (jefe==0 && titulo==1 && postgrado==1)
				{
					
					sueldo_n=sueldo_n+(sueldoBM*0.05)+(sueldoBM*0.12);
					cout<<endl<<"Su sueldo neto es: S/."<<sueldo_n;
				}
				
				if (jefe==1 && titulo==0 && postgrado==1)
				{
					
					sueldo_n=sueldo_n+(sueldoBM*0.10)+(sueldoBM*0.12);
					cout<<endl<<"Su sueldo neto es: S/."<<sueldo_n;
				}
				
			}
			
			else
			{
				cout<<endl<<"Su sueldo neto es: S/."<<sueldo_n;
			}
			
		}
		
		
		
		if (anios>=6)
		{
			sueldo_n=sueldoBM+(sueldoBM*0.15);
			
			if (jefe==1 || titulo==1 || postgrado==1)
			{
				
				if (jefe==1 && titulo==0 && postgrado==0)
				{
					
					jefe15=sueldo_n+(sueldoBM*0.10);
					cout<<endl<<"Su sueldo neto es: S/."<<jefe15;
					
				}
				
				if (jefe==0 && titulo==1 && postgrado==0)
				{
					
					titulo15=sueldo_n+(sueldoBM*0.05);
					cout<<endl<<"Su sueldo neto es: S/."<<titulo15;
					
				}
				
				if (jefe==0 && titulo==0 && postgrado==1)
				{
					
					postgrado15=sueldo_n+(sueldoBM*0.12);
					cout<<endl<<"Su sueldo neto es: S/."<<postgrado15;
					
				}
				
				if (jefe==1 && titulo==1 && postgrado==1)
				{
					
					sueldo_n=sueldo_n+(sueldoBM*0.10)+(sueldoBM*0.05)+(sueldoBM*0.12);
					cout<<endl<<"Su sueldo neto es: S/."<<sueldo_n;
					
				}
				
				if (jefe==1 && titulo==1 && postgrado==0)
				{
					sueldo_n=sueldo_n+(sueldoBM*0.10)+(sueldoBM*0.05);
					cout<<endl<<"Su sueldo neto es: S/."<<sueldo_n;
					
				}
				
				if (jefe==0 && titulo==1 && postgrado==1)
				{
					
					sueldo_n=sueldo_n+(sueldoBM*0.05)+(sueldoBM*0.12);
					cout<<endl<<"Su sueldo neto es: S/."<<sueldo_n;
				}
				
				if (jefe==1 && titulo==0 && postgrado==1)
				{
					
					sueldo_n=sueldo_n+(sueldoBM*0.10)+(sueldoBM*0.12);
					cout<<endl<<"Su sueldo neto es: S/."<<sueldo_n;
					
				}
				
			}
			
			else
			{
				cout<<endl<<"Su sueldo neto es: S/."<<sueldo_n;
			}
			
		
		}
	
		
				
	}
	
	else
		{
		cout<<endl<<"Los datos ingresados son incorreptos";
		}
	
	return 0;
}
