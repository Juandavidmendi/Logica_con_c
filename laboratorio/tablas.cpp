#include<iostream>
using namespace std;

int main() {
	int n1;
	do{
		cout<<"Ingrese la tabla de multiplicar que desea ver ";
		cin>>n1;
		
	}while((n1<1) || (n1>10));//El while es una condicion que dice: mientras n1 sea menor a 1 o n1 sea mayor que 10
	//Ciclo for para contar e incrementar el valor inicial.
	for(int i=1; i<=10; i++){//el ciclo for nos permite contar e incrementar el valor inicial
		cout<<n1<<" * "<<i<<" = "<<n1 * i<<endl;//Se concatenan los valores que se mostraran en pantalla
	}
	return 0;// se debe usar return como buena practica en C++
}

