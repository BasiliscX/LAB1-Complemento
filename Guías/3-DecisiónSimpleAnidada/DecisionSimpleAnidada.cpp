/// if / else if:
// En los casos en los que debemos evaluar desde el FALSO del 'if' utilizamos 'else if':
//
//  if(expresión1){
//  (...);
//  }
/// else if(expresión2){
//  (...);
//  }
//  else{
//  (...);
//  }
//
// En los casos en los que debemos evaluar desde el VERDADERO del 'if' utilizamos otro 'if':
//  if(expresión1){
///     if(expresión2){
///     (...);
///     }
//  }
//  else{
//  (...);
//  }
//
/*
Hacer un programa para ingresar un caracter y determinar:
Si el caracer es '+':
    debe emitir el cartel "ES +".
ADEMAS:
Si el caracer NO es '+' PERO es '-':
        debe emitir el cartel "ES -".

Si el caracer NO es '+' y NO es '-':
        debe emitir el cartel "NO ES + NI -".
*/
#include<iostream>
using namespace std;

int main(){

    char caracter;

        cout<<"Caracter: ";
        cin>>caracter;
        cout<<endl;

//  Se evalua la expresión:
    if(caracter=='+'){
        cout<<"ES +"<<endl;
    }
// Si el resultado fue FALSO, se evalua la siguiente expresión:
    else if(caracter=='-'){
        cout<<"ES -"<<endl;
    }
// Si tambien el resultado fue FALSO:
    else{
        cout<<"NO ES + NI -"<<endl;
    }
/// El programa solo ejecutará el bloque '{...}' donde la expresión sea VERDADERA

return 0;
}
