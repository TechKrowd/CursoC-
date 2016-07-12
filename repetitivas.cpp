#include <iostream>
using namespace std;


int main() {
    /* EJEMPLO FOR */
    /*
    int i;
    //0 1 2 3 4 5 6 7 8 9
    for (i=0; i<10; i++){
        cout<<i<<endl;
    }
    
    cout<<"Fin del bucle"<<endl;
    */
    
    /* EJEMPLO WHILE */
    /*int x=-5;
    cout<<"Introduce un numero positivo: ";
    cin>>x;
    while (x<0){
        cout<<"Introduce un numero positivo: ";
        cin>>x;
    }
    
    cout<<"Fin while"<<endl;*/
    /*
    int i=0;
    while(i<10){
        cout<<i<<endl;
        i++;
    }
    cout<<"Fin while"<<endl;
    */
    
    
    /* EJEMPLO DO WHILE*/
    
    int x;
    do{
        cout<<"Introduce un numero positivo: ";
        cin>>x;
    }while(x<0);
    cout<<"Fin do while"<<endl;
    return 0;
}

