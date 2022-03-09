//Escriba un programa que convierta grados Fahrenheit a grados Centígrados.
#include <iostream>
#include <ios>
using namespace std;

int main(){
	float Fahrenheit, centigrados, conversion;
	cout<<"Ingrese los grados que desea convertir a centigrados";
	cin>>Fahrenheit ;
	centigrados = 32;
	conversion = (Fahrenheit - centigrados) * 5/9;
	cout<<"los "<<Fahrenheit<<" "<<"En grados centigrados son: "<<conversion;
	return 0;
}
