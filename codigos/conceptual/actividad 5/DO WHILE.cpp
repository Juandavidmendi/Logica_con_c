#include<iostream>

using namespace std;

//Variables
int ref, tal, cos, costototal, preu, preciototal, utilidadtotal, n1;
char dis;
char des[200];
float PO, can, utilidad, cien, POR;


int main(){ //la funcion principal
	do{
	cout<<"Sistema de Zapatos"<<endl;
	cout<<"Ingrese la referencia";
	cin>>ref;
	
	cout<<"Ingrese la descripcion"<<endl;
	cin>>des;
	
	cout<<"Ingrese la talla"<<endl;
	cin>>tal;
	
	cout<<"Esta disponible s/n"<<endl;
	cin>>dis;
	
	cout<<"Cantidad"<<endl;
	cin>>can;
	
	cout<<"Costo unidad"<<endl;
	cin>>cos;
	
	costototal = can * cos;
	
	cout<<"precio"<<endl;
	cin>>preu;
	
	preciototal = can * preu;
	
	utilidad =  preu - cos;
	
	utilidadtotal = preciototal - costototal;
	
	if(cos <= 30000){
		PO = (utilidad/cos);
		POR = (PO/50)/100;
	}
	else if(cos > 30000 <=60000){
		PO = (utilidad/cos);
		POR = (PO/40)/100;
	}
	else if(cos > 60000){
		PO = (utilidad/cos);
		POR = (utilidad/30)/100;
	}
	
	/* --------------------------------------------------------------------*/
	
	cout<<"LOS DATOS REGISTRADOS SON LOS SIGUIENTES"<<endl;
	
	cout<<"REFERENCIA"<<" "<<ref<<endl;
	
	cout<<"DESCRIPCION"<<" "<<des<<endl;
	
	cout<<"TALLA"<<" "<<tal<<endl;
	
	cout<<"DISPONIBILIDAD"<<" "<<dis<<endl;
	
	cout<<"CANTIDAD DE ZAPATOS"<<" "<<can<<endl;
	
	cout<<"COSTO UNIDAD"<<" "<<cos<<endl;
	
	cout<<"COSTO TOTAL"<<" "<<costototal<<endl;
	
	cout<<"PRECIO UNIDAD"<<" "<<preu<<endl;
	
	cout<<"PRECIO TOTAL DE:"<<can<<"UNIDADES"<<" "<<preciototal<<endl;
	
	cout<<"UTILIDAD POR UNIDAD"<<" "<<utilidad<<endl;
	
	cout<<"UTILIDAD TOTAL"<<" "<<utilidadtotal<<endl;
	
	cout<<"PORCENTAJE DE UTILIDAD"<<" "<<PO<<endl;
	
	
	cout<<"1para continuar o 0 para salir"<<endl; 
	cout<<"Desea registrar un nuevo zapato? "<<endl;
	cin>>n1;
	}while(n1 = 1);
	cout<<"Gracias por digitar la informacion"<<endl;

	
	return 0;
}

///Juan David Mendivelso Garcia
