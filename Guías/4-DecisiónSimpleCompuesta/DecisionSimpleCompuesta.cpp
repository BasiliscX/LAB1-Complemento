/// Operadores lógicos:
//      AND Y = &&
//      OR  O = ||
// Los usaremos para unir n cantidad de expresiones relacionadas en un solo 'if' o 'else if'.
/// uso:
// Serán utilizados en el parentesis del if/else if para unir expresiones y poder evaluarlas en conjunto.
/// ventajas:
// Evita la redundancia de instancias de evaluación relacionadas pero no agrupadas:
//      if(x){
//          if(y){
//              if(z){
//                  (...);  Bloque Hadouken :)
//              }
//          }
//      }
// Por ejemplo, mismo ejemplo pero con AND:
//      if(x && y && z){
//          (...);
//      }
/// Importante!
//  OR  - Si ALGUNA expresión es verdadera, entonces el conjunto de expresiones resulta en VERDADERO.
//      - Si NINGUNA expresión es verdadera, entonces el conjunto de expresiones resulta en FALSO.
//
//  AND - Si TODAS las expresiones son verdaderas, entonces el conjunto de expresiones resulta en VERDADERO.
//      - Si ALGUNA expresión es falsa, entonces el conjunto de expresiones resulta en FALSO.
//
/// Ejercicio:
/*
Hacer un programa para ingresar un caracter y determinar:
Si el caracer es '+' O es '-' O es '+':
        debe emitir el cartel "ES UN OPERADOR ARITMETICO VALIDO".

Si el caracer NO es '+', NO es '-' y NO es '*':
        debe emitir el cartel "NO ES OPERADOR ARITMETICO VALIDO".
*/
#include<iostream>
using namespace std;

int main(){

    char caracter;

        cout<<"Caracter: ";
        cin>>caracter;
        cout<<endl;

//                  '||' = OR (Si UNA expresión es verdadera, entonces el resultado es VERDADERO)
    if(caracter=='+' || caracter=='-' || caracter=='*'){
        cout<<"ES UN OPERADOR ARITMETICO VALIDO"<<endl;
    }
// Si en el conjunto de expresiones unidas por el '||' no hubo NINGUNA verdadera, entonces el conjunto es FALSO
    else{
        cout<<"NO ES UN OPERADOR ARITMETICO VALIDO"<<endl;
    }

return 0;
}
/// Código en limpio:
/*
int main(){

    char caracter;

        cout<<"Caracter: ";
        cin>>caracter;
        cout<<endl;

    if(caracter=='+' || caracter=='-' || caracter=='*'){
        cout<<"ES UN OPERADOR VALIDO"<<endl;
    }
    else{
        cout<<"NO ES UN OPERADOR VALIDO"<<endl;
    }

return 0;
}
*/
