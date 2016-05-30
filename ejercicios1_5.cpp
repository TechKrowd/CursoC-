#include <iostream>
using namespace std;

int main ()
{
	//EJERCICIO 1
	/*
	cout<<"Hello World!"<<endl;
	*/

	//EJERCICIO 2
	/*int numero;
	cout<<"Introduce en numero entero: "<<endl;
	cin >> numero;
	cout<<"El numero es: "<<numero<<endl;*/

	//EJERCICIO 3
	/*int numero1;
	int numero2;
	int resultado;
	cout<<"Introduce el primero numero: ";
	cin>>numero1;
	cout<<"Introduce el segundo numero: ";
	cin>>numero2;

	resultado = numero1 + numero2;
	cout<<"La suma es: "<<resultado<<endl;
	cout<<"La resta es: "<<numero1 - numero2<<endl;
	resultado = numero1 * numero2;
	cout<<"El producto es: "<<resultado<<endl;
	cout<<"La division es: "<<numero1 / numero2<<endl; */

	//EJERCICIO 4
	/*int n1, n2;
	int copia;
	cout<<"Introduce un numero: ";
	cin>>n1;
	cout<<"Introduce otro numero: ";
	cin>>n2;

	cout<<"Numero 1: "<<n1<<" Numero 2: "<<n2<<endl;

	copia = n1;
	n1 = n2;
	n2 = copia;

	cout<<"Numero 1: "<<n1<<" Numero 2: "<<n2<<endl;*/

	//EJERCICIO 5
	float sueldoBase;
	float ventas;
	float sueldoFinal;

	cout<<"Introduce el sueldo base: ";
	cin>> sueldoBase;
	cout<<"Introduce el importe de las ventas: ";
	cin>>ventas;

	sueldoFinal = sueldoBase + (ventas * 0.1);

	cout<<"El sueldo final es: "<<sueldoFinal<<" euros"<<endl;

	return 0;
}

