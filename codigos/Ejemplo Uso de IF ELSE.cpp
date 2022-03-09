#include<iostream>
using namespace std;

int main(){
	int cantidad;
	float monto = 0, descuento = 0, pagoTotal = 0;
	
	cout<<"Ingrese la cantidad de telefonos que desea comprar \n"<<" "; 
	cout<<"Telefonos a comprar: ";
	cin>> cantidad;
	monto = cantidad * 200;
	
	
	if(cantidad < 10){
		cout<<"El total a pagar es"<<monto;
	}else if(cantidad < 20){//10%
		descuento = monto * 0.10;
		pagoTotal = monto - descuento;
		cout<<"El total a pagar es"<<pagoTotal<<"con un descuento de : "<<descuento;
	}else if(cantidad < 30){//20%
		descuento = monto * 0.20;
		pagoTotal = monto - descuento;
		cout<<"El total a pagar es"<<pagoTotal<<"con un descuento de : "<<descuento;
	}else{//40%
		descuento = monto * 0.40;
		pagoTotal = monto - descuento;
		cout<<"El total a pagar es"<<pagoTotal<<"con un descuento de : "<<descuento;
		
	}
	
	return 0;
}

