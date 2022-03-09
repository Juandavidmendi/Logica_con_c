//Escriba un programa que lo solicite pies y le envíe a la pantalla su equivalencia en pulgadas, yardas, metros ycentímetros.
#include <iostream>
#include <ios>
using namespace std;

int main(){
	int opcion;
	float pies, pulgadas, yardas, metros, centimetros, operacion;
	cout<<" MENU DE OPCIONES "<<endl;
	cout<<" 1.pulgadas "<<endl;
	cout<<" 2.yardas "<<endl;
	cout<<" 3.metros "<<endl;
	cout<<" 4.centimetros "<<endl;
	cout<<"Elige una opcion del menu";
	cin>>opcion;
	
	switch(opcion){
		case 1:
			cout<<"Ingrese la medida en pies para convertir";
			cin>>pies;
			pulgadas = 12;
			operacion = pies * pulgadas ;
			cout<<"La conversion es "<<operacion<<" Pulgadas";
		break;
		case 2:
			cout<<"Ingrese la medida en pies para convertir";
			cin>>pies;
			yardas = 3;
			operacion = pies / yardas ;
			cout<<"La conversion es "<<operacion<<" yardas";
		break;
		case 3:
			cout<<"Ingrese la medida en pies para convertir";
			cin>>pies;
			metros = 3,281;
			operacion = pies / metros ;
			cout<<"La conversion es "<<operacion<<" Metros";
		break;
		case 4:
			cout<<"Ingrese la medida en pies para convertir";
			cin>>pies;
			centimetros = 30,48;
			operacion = pies * centimetros ;
			cout<<"La conversion es "<<operacion<<" centimetros";
		break;
		default:
			cout<<"Opcion invalida";
	}	
	return 0;
}
