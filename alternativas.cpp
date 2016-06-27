#include <iostream>
using namespace std;

int main ()
{
/*
	int edad;
	cout<<"Introduce tu edad:"<<endl;
	cin>>edad;

	if(edad >= 18){
		cout<<"Eres mayor de edad"<<endl;
	}else{
		cout<<"Eres menor de edad"<<endl;
	}

	cout<<"Fin del programa"<<endl;
*/
/*
	float nota;
	cout<<"Introduce la nota de tu examen: "<<endl;
	cin>>nota;

	if(nota >=0 && nota<5){
		cout<<"Suspenso"<<endl;
	}else if(nota>=5 && nota<7){
		cout<<"Bien"<<endl;
	}else if(nota>=7 && nota<9){
		cout<<"Notable"<<endl;
	}else if(nota>=9 && nota<=10){
		cout<<"Sobresaliente"<<endl;
	}else {
		cout<<"Nota incorrecta"<<endl;
	}

	cout<<"Fin del programa"<<endl;
	*/

	/*
	int mes;
	cout<<"Introduce un mes (1-12): "<<endl;
	cin>>mes;

	switch(mes){
		case 1: //enero
		case 3: //marzo
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout<<"31 dias"<<endl;
		break;

		case 4: //abril 
		case 6:
		case 9:
		case 11:
			cout<<"30 dias"<<endl;
		break;

		default: //febrero
			cout<<"28 dias"<<endl;
		break;
	}
	*/

	int edad;
	cout<<"Introduce tu edad: "<<endl;
	cin>>edad;

	cout<<((edad>=18)?"Mayor de edad":"Menor de edad");

	return 0;
}

