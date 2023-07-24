/// if / else if:
// En los casos en los que debemos evaluar desde el FALSO del 'if' utilizamos 'else if':
//
//  if(expresi�n1){
//  (...);
//  }
/// else if(expresi�n2){
//  (...);
//  }
//  else{
//  (...);
//  }
//
// En los casos en los que debemos evaluar desde el VERDADERO del 'if' utilizamos otro 'if':
//  if(expresi�n1){
///     if(expresi�n2){
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

//  Se evalua la expresi�n:
    if(caracter=='+'){
        cout<<"ES +"<<endl;
    }
// Si el resultado fue FALSO, se evalua la siguiente expresi�n:
    else if(caracter=='-'){
        cout<<"ES -"<<endl;
    }
// Si tambien el resultado fue FALSO:
    else{
        cout<<"NO ES + NI -"<<endl;
    }
/// El programa solo ejecutar� el bloque '{...}' donde la expresi�n sea VERDADERA

return 0;
}
