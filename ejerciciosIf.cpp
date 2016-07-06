#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	/* EJERCICIO 1 */
	/*
	int numero1, numero2;

	cout<<"Introduce un numero: "<<endl;
	cin>>numero1;

	cout<<"Introduce el segundo numero: "<<endl;
	cin>>numero2;

	if (numero1 > numero2){
		cout<<numero1<<" es mayor que "<<numero2<<endl;
	} else if(numero2 > numero1){
		cout<<numero2<<" es mayor que "<<numero1<<endl;
	} else {
		cout<<numero1<<" es igual que "<<numero2<<endl;
	}
	*/

	/* EJERCICIO 2 */
	/*
	int lado1, lado2, lado3;

	cout<<"Introduce el primer lado: "<<endl;
	cin>>lado1;

	cout<<"Introduce el segundo lado: "<<endl;
	cin>>lado2;

	cout<<"Introduce el tercer lado: "<<endl;
	cin>>lado3;

	if (lado1 == lado2 && lado1 == lado3){
		cout<<"Equilatero"<<endl;
	}else if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
		cout<<"Escaleno"<<endl;
	}else{
		cout<<"Isosceles"<<endl;
	}
	*/


	/* EJERCICIO 3 */
	/*
	int nota;

	cout<<"Introduce la nota: "<<endl;
	cin>>nota;

	if(nota>=0 && nota<5){
		cout<<"Suspenso"<<endl;
	}else if (nota >=5 && nota < 7){
		cout<<"Aprobado"<<endl;
	}else if(nota>=7 && nota < 9){
		cout<<"Notable"<<endl;
	}else if(nota>=9 && nota <=10) {
		cout<<"Sobresaliente"<<endl;
	}else{
		cout<<"Nota incorrecta (0-10)"<<endl;
	}*/


	/* EJERCICIO 4 */
	/*float a, b, c;
	float radicando;
	float raiz;
	float x1, x2;

	cout<<"Introduce termino a: "<<endl;
	cin>>a;
	cout<<"Introduce termino b: "<<endl;
	cin>>b;
	cout<<"Introduce termino c: "<<endl;
	cin>>c;

	//pow (7, 14)
	//radicando = (b * b) - (4 * a * c);
	radicando = pow(b, 2) - (4 * a * c);

	if(radicando < 0){
		cout<<"No hay soluciones reales"<<endl;
	}else{
		raiz = sqrt(radicando);
		if(raiz==0){
			//solo una solución
			cout<<"x = "<<-b/(2*a)<<endl;
		}else{
			x1 = (-b + raiz) / (2 * a);
			x2 = (-b - raiz) / (2 * a);
			cout<<"Primera solucion: "<<endl;
			cout<<"x = "<< x1<<endl;
			cout<<"Segunda solucion: "<<endl;
			cout<<"x = "<< x2<<endl;
		}
	}*/

	/* EJERCICIO 5 */
	int anio;
	cout<<"Introduce el anio: "<<endl;
	cin>>anio;
	/*
	if((anio % 4) == 0 && (anio % 100)!=0){
		cout<<"Es bisiesto"<<endl;
	}else if((anio % 4) == 0 && (anio % 100)==0 && (anio % 400)==0){
		cout<<"Es bisiesto"<<endl;
	}else{
		cout<<"No es bisiesto"<<endl;
	}*/


	if(anio % 4 == 0){
		if(anio % 100 != 0){
			cout<<"Es bisiesto"<<endl;
		}else if(anio % 400 == 0){
			cout<<"Es bisiesto"<<endl;
		}else{
			cout<<"No es bisiesto"<<endl;
		}
	}else{
		cout<<"No es bisiesto"<<endl;
	}


	return 0;
}

