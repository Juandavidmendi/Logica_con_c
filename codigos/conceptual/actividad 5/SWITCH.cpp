#include<iostream>

using namespace std;

//Variables
int ref, tal, cos, costototal, preu, preciototal, utilidadtotal;
char dis;
char des[200];
float PO, can, utilidad, cien, POR, opcion;


int main(){ //la funcion principal
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
	

	costototal = can * cos;
	
	cout<<"precio"<<endl;
	cin>>preu;
	
	preciototal = can * preu;
	
	utilidad =  preu - cos;
	
	utilidadtotal = preciototal - costototal;		
		
	cout<<"Costo unidad"<<endl;
	cout<<" 1.menor a 30000"<<endl;
	cout<<" 2.Mayor de 30000 menor de 60000 "<<endl;
	cout<<" 3.Mayor de 60000"<<endl;
	int opcion = 0;
	cin >> opcion;
	
	switch(opcion){
		case 1:
			PO = (utilidad/cos);
			POR = (PO/50)/100;
		break;
		case 2:
			PO = (utilidad/cos);
			POR = (PO/40)/100;
		
		break;
		case 3:
			PO = (utilidad/cos);
			POR = (utilidad/30)/100;
			
		break;
		default:
			cout<<"Opcion invalida";
	}
	POR = opcion;	
	system("cls");
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
	
	cout<<"PORCENTAJE DE UTILIDAD"<<" "<<POR<<endl;
	
	cout<<"Gracias por digitar la informacion";
	return 0;
}

///Juan David Mendivelso Garcia
