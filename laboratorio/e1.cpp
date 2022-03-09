#include<iostream>
using namespace std;

int main(){
	int cinco, diez, veinte, dolar, conversion, suma, m1, m2, m3;
	cout<<"Ingrese las monedas de Cinco pesos que tenga";
	cin>>cinco;
	m1=cinco*cinco;
	cout<<"Ingrese las monedas de Diez pesos que tenga";
	cin>>diez;
	m2=diez*diez;
	cout<<"Ingrese las monedas de Veinte pesos que tenga";
	cin>>veinte;
	m3=veinte*veinte;
	dolar = 100;
	suma = m1 + m2 + m3;
	conversion = suma / dolar;
	
	cout<<"La cantidad de monedas de 5 pesos que tiene son:"<<cinco
	<<"La cantidad de monedas de 10 pesos son:"<<diez<<"la cantidad de monedas de 20 pesos son: "<<veinte<<" "
	<<"La suma total de dolares es="<<conversion;
	
} 
