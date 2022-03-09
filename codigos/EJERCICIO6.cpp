#include<iostream>
using namespace std;
int main(){
	int i;
	cout<<"Deseas iniciar el sistema?"<<endl<<"1.Si"<<endl<<"2.NO"<<endl;
	cin>>i;
	if(i == 1){
	
	for(i=1;i<10;i++){
	float n1, n2, n3, n4, promedio;
	cout<<"Ingrese porfavor la primera nota"<<endl;
	cin>>n1;
	cout<<"Ingrese porfavor la segunda nota"<<endl;
	cin>>n2;
	cout<<"Ingrese porfavor la tercera nota"<<endl;
	cin>>n3;
	cout<<"Ingrese porfavor la cuarta nota"<<endl;
	cin>>n4;
	promedio = (n1 + n2 + n3+ n4)/4;
	
	if(promedio > 3){
		if(promedio > 3.5){
			cout<<"Aprobado";
			return 0;
		}else{
			cout<<"En este momento no tiene aprobada la materia de tecnología, pero tiene la oportunidad de recuperar.";
			return 0;
		}
	}else if(promedio < 3){
		cout<<"No aprobado";
		return 0;
	}

	}

	}else if(i != 1){
		cout<<"Gracias por utilizar mi sistema";
		
	}
	return 0;	
}
//Juan David Mendivelso
