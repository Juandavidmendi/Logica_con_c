#include <iostream>
#include <ios>
using namespace std;

int main(){
    string n; //= "REVERSE";;
    cout<<"iNGRESE UN CARACTER A INVERTIR";
    cin>>n;
		
	//int main(){
    cout << n << endl;

    string n_reversed (n.rbegin(), n.rend());
    cout << n_reversed << endl;

    return 0;
}

