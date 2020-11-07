#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int cantidad, marca, descuento;
	const int PRECIO=16;
	double imp_bruto, imp_pagar;
	
	cout<<"\t\tVenta de Diskettes S/.16 c/u"<<endl<<endl;
	cout<<"\tMARCAS"<<endl<<endl;
	cout<<"1: 3M         4: Burrougths"<<endl;
	cout<<"2: NCR        5: GoldStar"<<endl;
	cout<<"3: Sentinel"<<endl<<endl;
	cout<<"Digite el Numero correspondiente para seleccionar la marca: ";cin>>marca;
	cout<<endl<<endl<<"Digite la cantidad: ";cin>>cantidad;
	
	if (cantidad>0 && marca>=1 && marca<=5)
	{
		imp_bruto=cantidad*PRECIO;
		
		switch (marca)
		{
			case 1:descuento=10;imp_pagar=imp_bruto-(imp_bruto*0.10);break;
			case 2:descuento=15;imp_pagar=imp_bruto-(imp_bruto*0.15);break;
			case 3:descuento=20;imp_pagar=imp_bruto-(imp_bruto*0.20);break;
			case 4:descuento=25;imp_pagar=imp_bruto-(imp_bruto*0.25);break;
			case 5:descuento=30;imp_pagar=imp_bruto-(imp_bruto*0.30);break;
		}
		
		cout<<endl<<endl<<"RESULTADO"<<endl<<endl;
		cout<<"Descuento: "<<descuento<<"%"<<endl;
		cout<<"Importe bruto: S/."<<imp_bruto<<endl;
		cout<<"Importe a pagar: S/."<<imp_pagar<<endl<<endl;
		
	}
	else
	{
		cout<<endl<<"Los datos ingresados son ¡NO VALIDOS!";
	}

	return 0;
}
