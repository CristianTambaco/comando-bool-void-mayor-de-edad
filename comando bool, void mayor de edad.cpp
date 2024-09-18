#include <iostream>
using namespace std;

void edad(){
bool esMayorDeEdad;
int edad;

cout << "** Verificar si es mayor de edad **" <<endl;
cout << "Ingresa tu edad: ";
cin >> edad;

esMayorDeEdad = (edad >= 18);

if (esMayorDeEdad) {
cout << "Eres mayor de edad." << endl;
} else {
cout << "No eres mayor de edad." << endl;
}
    
}



main(){
	
edad();


	return 0;
}



