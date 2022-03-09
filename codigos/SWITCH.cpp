#include<iostream>
using namespace std;

int main(){//sirve para que el usuario este en libertad de ver cualquier opcion del menu
	int opcion;
	float n1, n2, suma, resta, multiplicacion, division;
	cout<<" MENU DE OPCIONES "<<endl;
	cout<<" 1.Sumar "<<endl;
	cout<<" 2.Restar "<<endl;
	cout<<" 3.Multiplicar "<<endl;
	cout<<" 4.Dividir "<<endl;
	cout<<"Elige una opcion del menu";
	cin>>opcion;
	
	switch(opcion){
		case 1:
			cout<<"Ingrese primer numero";
			cin>>n1;
			cout<<"Ingrese segundo numero";
			cin>>n2;
			suma = n1 + n2;
			cout<<"La suma es "<<suma;
		break;
		case 2:
			cout<<"Ingrese primer numero";
			cin>>n1;
			cout<<"Ingrese segundo numero";
			cin>>n2;
			resta = n1 - n2;
			cout<<"La resta es "<<resta;
		break;
		case 3:
			cout<<"Ingrese primer numero";
			cin>>n1;
			cout<<"Ingrese segundo numero";
			cin>>n2;
			multiplicacion = n1 * n2;
			cout<<"La multiplicacion es "<<multiplicacion;
		break;
		case 4:
			cout<<"Ingrese primer numero";
			cin>>n1;
			cout<<"Ingrese segundo numero";
			cin>>n2;
			division = n1 / n2;
			cout<<"La division es "<<division;
		break;
		default:
			cout<<"Opcion invalida";
	}	
	return 0;
}

