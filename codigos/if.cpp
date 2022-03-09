#include<iostream>
using namespace std;
int main(){
	float calificacion;
	cout<<"Ingrese porfavor la nota del estudiante";
	cin>>calificacion;
	if(calificacion >= 50 ){
		cout<<"Pasaste el examen";
	}else if(calificacion < 50){
		cout<<"debes repetir el examen";		
	}
}
