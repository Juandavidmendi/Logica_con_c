#include<iostream>
using namespace std;
int main(){
	cout<<"Sistema para la comparacion de numeros enteros";
	int n1, n2, n3, mayor;
	cout<< "Porfavor ingrese primer numero";
	cin>>n1;
	cout<< "Porfavor ingrese segundo numero";
	cin>>n2;
	cout<< "Porfavor ingrese tercer numero";
	cin>>n3;
	
	
	if(n1 > n2){
		if(n1 > n3){
			mayor = n1;
		}else{
			mayor = n3;
		}		
	}else{
		if(n2 > n3){
			mayor = n2;
		}else{
			mayor = n3;
		}
	}
	
	cout<<"El numero mayor es : " <<mayor;
	return 0; 
}
