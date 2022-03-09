#include<iostream>

using namespace std;
int main(){ //la funcion principal
	long int referencia, costo, precio;
	char descripcion, respuesta, talla;
	
	cout<<"ADMINISTRAR VENTA DE ZAPATOS"<<endl;
	cout<<"Digite la referencia del zapato.."<<endl;
	cin>>referencia;
	cout<<"Digite una descripcion del zapato.."<<endl;
	cin>>descripcion;
	
	cout<<"Digite la talla del zapato"<<endl;
	cin>>talla;
	
	cout<<"Digite la letra si esta disponible o no para la venta S/N";
	cin>>respuesta;
	
	cout<<"Digite el costo del zapato"<<endl;
	cin>>costo;
	cout<<"Digite el precio de venta del zapato"<<endl;
	cin>>precio;
	cout<<"LOS DATOS REGISTRADOS SON LOS SIGUIENTES"<<endl;
	cout<<"Referencia"<<" "<<referencia;
	cout<<"Descripcion"<<" "<<descripcion;
	cout<<"Talla"<<" "<<talla;
	cout<<"disponibilidad"<<" "<<respuesta;
	cout<<"Costo"<<" "<<costo;
	cout<<"precio"<<" "<<precio;
	cout<<"Gracias por digitar la informacion";
	
}
