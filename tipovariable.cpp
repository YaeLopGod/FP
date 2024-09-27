// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
//Bibliotecas//
#include <iostream>
using namespace std; // sirve para sustituir std::cout// //Evita poner std::// 

int main()
{
	//1. Entero (int)//  //se puede poner ";" pero nunca espacio porque no sabe que significa la segunda palabra//  //se puede poner "_"//
	int numeroEntero = 42; //declaracion//
	cout << "Entero: " << numeroEntero << endl;

	// 2. Entero corto (short int)// //sus valores van desde -32,768 hasta 32,767// //los valores long van desde -9,223,372,036,854,775,808 hasta 9,223,372,036,854,775,807// 
	short int numeroCorto = 32000;
	cout << "Entero Corto: " << numeroCorto << endl;

	//3. Es un entero largo (long int)// 
	long long numeroLargo = 5573536993L; 
	cout << "Entero Largo: " << numeroLargo << endl; 

	//4. Numero sin signo// 
	unsigned int numeroSinSigno = 1208;
	cout << "Entero: " << numeroSinSigno << endl; 

	unsigned short int numeroCortoSinSigno = 29;
	cout << "Entero Corto: " << numeroCortoSinSigno << endl; 

	unsigned long long numeroLargoSinSigno = 29122003;
	cout << "Entero Largo: " << numeroLargoSinSigno << endl; 

}
