

#include <iostream>
using namespace std;

int main() {
    /* EJEMPLOS DE BREAK */
    /*
    int i = 5;
    if(i % 5 == 0){
        break; //incorrecto
        cout<<"Multiplo de 5";
    }*/

    /*int i, j;
    //1 2 3 4
    for (j = 1; j < 10; j++) {
        
        cout << j << endl;

        for (i = 1; i < 10; i++) {
            if (i % 5 == 0) {
                break;
            }
            cout<< "\t"<< i << endl;
        }

    }*/
    
    /*
    int i = 0;
    
    while(i<10){
        i++;
        if(i % 5 == 0){
            break;
        }
        
        cout<<i<<endl;
    }*/

    
    /*  EJEMPLOS DE CONTINUE */
    
    /*int i, j;
    for(j=1; j<10; j++){
        cout<<j<<endl;
        for(i=1; i<100; i++){
            if(i % 5 != 0){
                continue;
            }
            cout<<"\t"<<i<<endl;
        }
    }*/
    
    int i = 0;
    
    while(i<99){
        i++;
        if(i % 5 != 0){
            continue;
        }
        
        cout<<i<<endl;
         
    }
    return 0;
}

