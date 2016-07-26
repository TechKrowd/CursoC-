#include <iostream>
using namespace std;

int main() {

    /* EJERCICIO 1*/
    /*
    int numero1, numero2;
    
    cout<<"Introduce primero numero: ";
    cin>>numero1;
    do{
        cout<<"Introduce segundo numero: ";
        cin>>numero2;
    }while(numero2<numero1);
    
    //VERSIÓN CON FOR
    for(int i=numero1; i<=numero2; i++){
        cout<<i<<endl;
    }
      
    
    //VERSION CON WHILE
    int i = numero1;
    while(i<=numero2){
        cout<<i<<endl;
        i++;
    } 
     */
    
    
    /* EJERCICIO 2 */
    /*
    int numero;
    do{
        cout<<"Introduce un numero: ";
        cin>>numero;
    }while(numero<=0);
    
    for(int i=1; i<=10; i++){
        cout<<numero<<" x "<<i<<" = "<<(numero * i)<<endl;
    }*/
    
    /* EJERCICIO 3 */
    
    /*int suma = 0;
    //float media = 0;
    int numero;
    
    for(int i=0; i<10; i++){
        cout<<"Introduce un numero: ";
        cin>>numero;
        suma = suma + numero;
    }
    
    cout<<"La suma es: "<<suma<<endl;
    //media = (float)suma / 10;
    cout<<"La media es: "<<((float)suma / 10)<<endl;*/
    
    /* EJERCICIO 4 */
    
    int numero=0;
    int contador=0;
    
    while(numero>=0){
        cout<<"Introduce un numero: ";
        cin>>numero;
        if(numero>=0){
            contador++;
        }
    }
    
    do{
        cout<<"Introduce un numero: ";
        cin>>numero;
        if(numero>=0){
            contador++;
        }
    }while(numero>=0);
    
    cout<<"Se han introducido "<<contador<<" numeros"<<endl;
    return 0;
}

