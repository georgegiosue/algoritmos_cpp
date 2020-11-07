#include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
	int num, u, d, c, m;
	cout<<"\t\tConvertir numero Arabico a Romano"<<endl<<endl;
	cout<<"\tDigite un numero: ";cin>>num;
	
	if (num>0 && num<=3999)
	{	cout<<endl<<endl<<"\tRESULTADO"<<endl<<endl;
		u=num%10;num/= 10;
		d=num%10;num/= 10;
		c=num%10;num/= 10;
		m=num%10;num/= 10;
		
		switch(m)
		{	case 1: cout<<"M";break;
			case 2: cout<<"MM"; break;
			case 3: cout<<"MMM";break;
		}
	
		switch(c)
		{	case 1: cout<<"C";break;
			case 2: cout<<"CC";break;
			case 3: cout<<"CCC";break;
			case 4: cout<<"CD";break;
			case 5: cout<<"D";break;
			case 6: cout<<"DC";break;
			case 7: cout<<"DCC";break;
			case 8: cout<<"DCCC";break;
			case 9: cout<<"CM";break;
		}
	
		switch(d)
		{	case 1: cout<<"X";break;
			case 2: cout<<"XX";break;
			case 3: cout<<"XXX";break;
			case 4: cout<<"XL";break;
			case 5: cout<<"L";break;
			case 6: cout<<"LX";break;
			case 7: cout<<"LXX";break;
			case 8: cout<<"LXXX";break;
			case 9: cout<<"XC";break;
		}
	
		switch(u)
		{	case 1: cout<<"I";break;
			case 2: cout<<"II";break;
			case 3: cout<<"III";break;
			case 4: cout<<"IV";break;
			case 5: cout<<"V";break;
			case 6: cout<<"VI";break;
			case 7: cout<<"VII";break;
			case 8: cout<<"VIII";break;
			case 9: cout<<"IX";break;
		}
		cout<<""<<endl<<endl;
			
	}
	else
	{
		cout<<endl<<endl<<"Los datos ingresados son ¡NO VALIDOS!"<<endl<<endl;
	}
	
	return 0;
}
