#include<iostream>

using namespace std;

int main() {

	int total,cont;

	float i, nota, suma, promedio;

	cout << "Cuantas Notas Desea Ingresar?" << endl;

	cin >> total;

for (i=1;i<=total;i++) {

 cout << "Ingrese La Nota " << i << endl;

 cin >> nota;

 if (nota>=0.0 && nota<=5.0) {

  cont=cont+1;

  suma=suma+nota;

  promedio = suma/cont;

 }

}

cout << "El Promedio Es: " << promedio << endl;

system("Pause >nul");

return 0;

}


