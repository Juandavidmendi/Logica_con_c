/*Ejercicio para solicitar cantidad de notas 
y sacar el promedio de las mismas*/
#include<iostream>
using namespace std;


int main(){
	int total;
	float notas, suma, prom, i;
	cout<<"Porfavor ingrese el total de notas a las que desea sacar el promedio"<<endl;
	cin>>total;
	/*ciclo FOR
		  (  Condicion )         
			 (inicio; Fin ;contador) */	
	for (i=1;i<=total;i++){
		cout<<"Ingrese la nota: "<<i<< endl;
		cin>>notas;
	/*condicional IF
		si	(Condicion)*/
	if(notas>=0.0<=5.0 ){
		suma = notas+suma;
		prom = suma/notas;		
		}		
	}
	cout<<"El promedio total de las notas es: "<<prom;
	
	return 0;
}

/*Juan David Mendivelso Garcia*/
