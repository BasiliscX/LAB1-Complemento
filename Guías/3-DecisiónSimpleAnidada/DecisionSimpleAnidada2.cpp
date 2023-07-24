/*
Hacer un programa para ingresar un caracter y determinar:
Si el caracer es '+':
        debe emitir el cartel "ES +".

Si el caracer NO es '+' PERO es '-':
        debe emitir el cartel "ES -".
ADEMAS:
Si el caracer NO es '+' NI '-' PERO es '*':
        debe emitir el cartel "ES *".

Si el caracer NO es '+', NO es '-' y NO es '*':
        debe emitir el cartel "NO ES +, NI -, NI *".
*/
#include<iostream>
using namespace std;

int main(){

    char caracter;

        cout<<"Caracter: ";
        cin>>caracter;
        cout<<endl;

/// Ejemplo de decisi�n simple anidada:
//  Se evalua la expresi�n:
    if(caracter=='+'){
        cout<<"ES +"<<endl;
    }
// Si el resultado fue FALSO, se evalua la siguiente expresi�n:
    else if(caracter=='-'){
        cout<<"ES -"<<endl;
    }
// Si el resultado fue FALSO, se evalua la siguiente expresi�n:
    else if(caracter=='*'){
        cout<<"ES *"<<endl;
    }
// Si todos las evaluaciones dieron FALSO:
    else{
        cout<<"NO ES +, NI -, NI *"<<endl;
    }
/// El programa solo ejecutar� el bloque donde la condici�n sea VERDADERA

return 0;
}
/// programa en limpio:
/*
int main(){

    char caracter;

        cout<<"Caracter: ";
        cin>>caracter;
        cout<<endl;

    if(caracter=='+'){
        cout<<"ES +"<<endl;
    }
    else if(caracter=='-'){
        cout<<"ES -"<<endl;
    }
    else if(caracter=='*'){
        cout<<"ES *"<<endl;
    }
    else{
        cout<<"NO ES +, NI -, NI *"<<endl;
    }

return 0;
}
*/
