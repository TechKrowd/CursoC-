#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int opc;
    char cadena [250];
    char caracter;
    int contador=0;
    do{
        cout<<"1. Contar veces caracter"<<endl;
        cout<<"2. Palindromo"<<endl;
        cout<<"0. Salir"<<endl;
        
        cin>>opc;
        
        switch(opc){
            case 1:
                cout<<"Introduce una cadena"<<endl;
                cin.ignore(256, '\n');
                cin.getline(cadena, 250);
                //cin>>cadena;
                cout<<"Introduce el caracter a contar"<<endl;
                cin>>caracter;
                contador=0;
                for (int i=0; i<strlen(cadena);i++){
                    if(cadena[i]==caracter){
                        contador++;
                    }
                }
                cout<<"El caracter "<<caracter<<" aparece "<<contador<<" veces"<<endl;
                break;
                
            case 2:
                cout<<"Introduce una cadena"<<endl;
                cin.ignore(256, '\n');
                cin.getline(cadena, 250);
                for(int i=0; i<strlen(cadena); i++){
                    if(cadena[i]==' '){
                        for(int j=i+1; j<=strlen(cadena);j++){
                            cadena[j-1]=cadena[j];
                        }
                        i--;
                    }
                }
                cout<<cadena<<endl;
                int j= strlen(cadena)-1;
                bool enc=false;
                for(int i=0; i<strlen(cadena)/2; i++){
                    if(cadena[i]!=cadena[j]){
                        enc=true;
                        cout<<"No es palindromo"<<endl;
                        break;
                    }
                    j--;
                }
                if(enc==false){
                    cout<<"Es palindromo"<<endl;
                }
                break;
        }
        
    }while(opc!=0);
    return 0;
}

