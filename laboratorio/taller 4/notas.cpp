#include<iostream>
using namespace std;
int main(){
	float n1, n2, n3, n4, promedio;
	cout<<"Ingrese porfavor la primera nota";
	cin>>n1;
	cout<<"Ingrese porfavor la segunda nota";
	cin>>n2;
	cout<<"Ingrese porfavor la tercera nota";
	cin>>n3;
	cout<<"Ingrese porfavor la cuarta nota";
	cin>>n4;
	promedio = (n1 + n2 + n3+ n4)/4;
	
	if(promedio > 3){
		if(promedio > 3.5){
			cout<<"Aprobado";
		}else{
			cout<<"En este momento no tiene aprobada la materia de tecnología, pero tiene la oportunidadde recuperar.";
		}
	}else if(promedio < 3){
		cout<<"No aprobado";
	}
	return 0;
}

/*Juan David Mendivelso Garcia*/
