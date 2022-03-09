#include<iostream>
using namespace std;
int main(){
	int horastrabajador;
	float costohora;
	float sueldo;
	
	cout<<"Ingrese horas trabajadas:";
	cin	>>horastrabajador;
	cout<<"Ingrese el valor de la hora";
	cin>>costohora;
	sueldo = horastrabajador * costohora;
	cout<<"El sueldo del trabajador es:"<<sueldo;
	
	cin.get();
	cin.get();
	return 0;
	
}
