#include <iostream>
#include <math.h>
 
 using namespace std;
 
 int main(int argc, char*argv[])
 {
 	// DEFINIR VARIABLES
 	
 		// Cuadrado
 		
		 double lado_cuadrado, area_cuadrado, perimetro_cuadrado;
 		
 		// Rombo
 		
		 double diagonal1_rombo, diagonal2_rombo, lado_rombo, area_rombo, perimetro_rombo;
 		
 		// Trapecio
 		
		 double baseMayor_trapecio, baseMenor_trapecio, altura_trapecio, lado_trapecio, area_trapecio, perimetro_trapecio;
 		
 		// Paralepipedo
 		
		 double ancho_paralepipedo, altura_paralepipedo, profundidad_paralepipedo, area_paralepipedo, volumen_paralepipedo;
 		
 		//Seleccion
 		
 		float asignacion;
 		
	// INICIO
		
		cout<<endl<<endl<<"\t\t\tCalculo de Area y Perimetro de Figuras Geometricas en (cm)"<<endl;
 		cout<<"1 :Cuadrado"<<endl<<endl;
 		cout<<"2 :Rombo"<<endl<<endl;
 		cout<<"3 :Trapecio"<<endl<<endl;
 		cout<<"4 :Paralepipedo"<<endl<<endl;
 		cout<<endl<<"Escribir el numero correspondiente para seleccionar la figura; ejemplo '1' para seleccionar cuadrado: "<<endl;
 		cin>>asignacion;
 		
 		// Area y Perimetro del Cuadrado
 		
 			if (asignacion==1) 
			 	{
 				cout<<endl<<"\t\t\t\tCalculo de Area y Perimetro de un Cuadrado"<<endl;
 				cout<<endl<<"Introdusca la medida del lado del cuadrado: ";
 				cin>>lado_cuadrado;
 				area_cuadrado=pow(lado_cuadrado,2);
 				perimetro_cuadrado=lado_cuadrado*4;
 				cout<<endl<<endl<<"El area del Cuadrado es: "<<area_cuadrado<<" cm^2"<<" y su perimetro es: "<<perimetro_cuadrado<<" cm";
			 	}
			 	
 			
 		// Area y Perimetro del Rombo
 			
 			if (asignacion==2) 
			 	{
 				cout<<endl<<"\t\t\t\tCalculo de Area y Perimetro de un Rombo"<<endl;
 				cout<<endl<<"Introdusca la medida de la diagonal mayor del rombo: ";
 				cin>>diagonal1_rombo;
 				cout<<endl<<"Introdusca la medida de la diagonal menor del rombo: ";
 				cin>>diagonal2_rombo;
 				cout<<endl<<"Introdusca la medida del lado del rombo: ";
 				cin>>lado_rombo;
 				area_rombo=(diagonal1_rombo*diagonal2_rombo)/2;
 				perimetro_rombo=lado_rombo*4;
 				cout<<endl<<endl<<"El area del Rombo es: "<<area_rombo<<" cm^2"<<" y su perimetro es: "<<perimetro_rombo<<" cm";
			 	}
 		
 		// Area y Perimetro de un Trapecio
 		
 			if (asignacion==3) 
			 	{
 				cout<<endl<<"\t\t\t\tCalculo de Area y Perimetro de un Trapecio"<<endl;
 				cout<<endl<<"Introdusca la medida de la base mayor del trapecio: ";
 				cin>>baseMayor_trapecio;
 				cout<<endl<<"Introdusca la medida de la base menor del trapecio: ";
 				cin>>baseMenor_trapecio;
 				cout<<endl<<"Introdusca la medida de la altura del trapecio: ";
 				cin>>altura_trapecio;
 				cout<<endl<<"Introdusca la medida del lado del trapecio: ";
 				cin>>lado_trapecio;
 				area_trapecio=((baseMayor_trapecio+baseMenor_trapecio)*altura_trapecio)/2;
 				perimetro_trapecio=baseMayor_trapecio+baseMenor_trapecio+2*lado_trapecio;
 				cout<<endl<<endl<<"El area del Trapecio es: "<<area_trapecio<<" cm^2"<<" y su perimetro es: "<<perimetro_trapecio<<" cm";
			 	}
 	
 		// Area y Volumen del Paralelepipedo
 		
 			if (asignacion==4) 
			 	{
 				cout<<endl<<"\t\t\tCalculo de Area y Volumen de un Paralelepipedo"<<endl;
 				cout<<endl<<"Introdusca la medida del ancho del paralelepipedo: ";
 				cin>>ancho_paralepipedo;
 				cout<<endl<<"Introdusca la medida de la altura del paralelepipedo: ";
 				cin>>altura_paralepipedo;
 				cout<<endl<<"Introdusca la medida de la profundidad del paralelepipedo: ";
 				cin>>profundidad_paralepipedo;
 				area_paralepipedo=(2*profundidad_paralepipedo*ancho_paralepipedo)+(2*profundidad_paralepipedo*altura_paralepipedo)+(2*ancho_paralepipedo*altura_paralepipedo);
 				volumen_paralepipedo=ancho_paralepipedo*altura_paralepipedo*profundidad_paralepipedo;
 				cout<<endl<<endl<<"El area del Paralelepipedo es: "<<area_paralepipedo<<" cm^2"<<" y su volumen es: "<<volumen_paralepipedo<<" cm^3";
			 	}
 }
