#include<iostream>
using namespace std;
int main(){
	cout<<"Sistema para la comparacion de edades"<<endl;
	int n1;
	cout<< "Porfavor ingrese la edad";
	cin>>n1;
	
	if(n1<=6 ){
		cout<<"el niño pertenece al grupo de la primera infancia";	
	}else if(n1 <12){
		cout<<"el niño pertenece al grupo de la segunda infancia";		
	}else if(n1 >12){
		cout<<"pertenece al grupo de adolescentes";
	}
	
	return 0; 
}
//Juan David Mendivelso Garcia
