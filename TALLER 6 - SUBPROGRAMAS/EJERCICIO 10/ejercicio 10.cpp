#include <iostream>

using namespace std;

void hora_despues (int h, int m, int s, int dps);
int validar_hora (int h);
int validar_min (int m);
int validar_sec (int s);

void hora_despues (int h, int m, int s, int dps)
{
	s=s+dps;
	
	if (s>=60)
	{
		m++;
		s=0+(s-60);
	}
	if (m==60)
	{
		h++;
		m=0;
	}
	if (h==24)
	{
		h=0;
	}
	cout<<endl<<endl<<"\t"<<h<<" h : "<<m<<" m : "<<s<<" s"<<endl<<endl;
}

int validar_hora (int h)
{
	int a;
	
	if (h>=0 && h<=23)
	{
		a=1;
	}
	else
	{
		a=0;
	}
	
	return a;
}

int validar_min (int m)
{
	int a;
	
	if (m>=0 && m<=59)
	{
		a=1;
	}
	else
	{
		a=0;
	}
	
	return a;
}

int validar_sec (int s)
{
	int a;
	
	if (s>=0 && s<=59)
	{
		a=1;
	}
	else
	{
		a=0;
	}
	
	return a;
}

int main (int argc, char* argv[])
{
	int hora, minutos, sec;
	
	cout<<endl<<endl<<"\t\tLa Hora 30 segundos despues, en Formato [24 horas]"<<endl<<endl;
	
	do
	{
		cout<<"\tDigite la Hora: ";cin>>hora;
	}while (validar_hora(hora)==0);
	
	do
	{
		cout<<"\n\n\tDigite los Minutos: ";cin>>minutos;
	}while (validar_min(minutos)==0);
	
	do
	{
		cout<<"\n\n\tDigite los Segundos: ";cin>>sec;
	}while (validar_sec(sec)==0);
	
	cout<<endl<<endl<<"\tLa Hora "<<30<<" segundos despues es: "<<endl<<endl;
	cout<<"\t";hora_despues(hora,minutos,sec,30);cout<<endl<<endl;
	return 0;
}
