/*desarrolle una aplicaci�n que solicite al
usuario un n�mero entero y como resultado muestre la tabla de multiplicar de dicho
n�mero.*/
#include<iostream>
using namespace std;

int main() {
	int n1;
	do{
		cout<<"Ingrese la tabla de multiplicar que desea ver ";
		cin>>n1;
		
	}while((n1<1) || (n1>10));
	//Ciclo for para contar e incrementar el valor inicial.
	for(int i=1; i<=10; i++){
		cout<<n1<<" * "<<i<<" = "<<n1 * i<<endl;
	}
	return 0;
}
//Juan David Mendivelso Garcia 
