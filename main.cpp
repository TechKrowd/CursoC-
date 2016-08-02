#include <iostream>
using namespace std;

int main() {
    
    int numeros[5];
    int numeros2[]={3, 8, 34, -3, 87};
    
    /*numeros[0]=5;
    numeros[1]=60;
    numeros[2]=-3;
    numeros[3]=78;
    numeros[4]=23;*/
    
    for(int i=0; i<5; i++){
        cout<<"Introduce un numero: ";
        cin>>numeros[i];
    }
    
    
    /*
    cout<<numeros2[0]<<endl;
    cout<<numeros2[1]<<endl;
    cout<<numeros2[2]<<endl;
    cout<<numeros2[3]<<endl;
    cout<<numeros2[4]<<endl;*/
    
    for(int i=0;i<5; i++){
        cout<<numeros[i]<<endl;
    }
    
    cout<<numeros[5]<<endl;
    
    return 0;
}

