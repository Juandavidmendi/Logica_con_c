/*Como segundo ejercicio usted debe crear una aplicación para hallar la aceleración
de un vehículo*/

#include<iostream>
using namespace std;

int main() {
	int a, b , tiempo, resultado;
	cout<<"Ingrese la velocidad inicial del automovil";
	cin>>a;
	cout<<"/n";
	cout<<"Ingrese la velocidad final del automovil";
	cin>>b;
	cout<<"Ingrese el tiempo";
	cin>>tiempo;
	resultado = (b-a)/tiempo;
	cout<<"La aceleracion del vehiculo es:"<<resultado;
	return 0;// se debe usar return como buena practica en C++
}
//Juan David Mendivelso Garcia
