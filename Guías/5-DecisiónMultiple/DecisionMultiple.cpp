/// Sintaxis del switch:
//
//  VARIABLE (Puede contener el valor x, y, z, (...))
//
//  switch(VARIABLE){
//      case 'x':
//          instrucción1;
//          break;
//      case 'y':
//          instrucción2;
//          break;
//      case 'z':
//          instrucción3;
//          break;
//      default:
//          instrucción0;
//          break;
//  }
//
///  Con la estructura switch evaluamos un conjunto de valores CONOCIDOS
///  que pueda contener la variable.
//  El programa ingresará al bloque de código contenido entre llaves '{}' del switch
//  para determinar el 'case' VERDADERO.
//  La evaluación comenzará desde el primer 'case' hasta el final del bloque
//  es por eso que debemos introducir en cada 'case' como intrucción final un 'break'
//  de otra forma, el programa tomará el 'case' siguiente también como VERDADERO
//  y ejecutará las instrucciones contenidas
//  hasta encontrar un 'break' o el fin del bloque de código '}'.
///  default:
//  Es un tipo de 'case' indeterminado que se ejecutará
//  cuando ningún otro 'case' haya resultado en VERDADERO.
//  Ejecutará las instrucciones contenidas en su bloque
//  hasta la instrucción 'break' o el fin del bloque del switch '}'.
///  A saber:
//  Cada bloque de instrucciones de 'case' o 'default' puede contener
//  todo tipo de instrucción, desde una simple asignación hasta otro switch si es necesario.
//  tampoco hay un limite de instrucciones como en el caso de operador ternario.
//  Lo que debemos tener en cuenta es que cualquier posible valor asignado a la variable
//  debe ser previamente conocido para poder programar cada caso.
//
/// Ejercicio:
/*
Hacer un programa para ingresar un caracter y determinar:
Si el caracer es '+':
        debe emitir el cartel "ES +".

Si el caracer es '-':
        debe emitir el cartel "ES -".

Si el caracer es '*':
        debe emitir el cartel "ES *".

Si el caracer es '/':
        debe emitir el cartel "ES /".

Si el caracer NO es '+', NO es '-', NO es '*' Y NO es '/':
        debe emitir el cartel "NO ES UN OPERADOR ARITMETICO VALIDO".
*/
#include<iostream>
using namespace std;

int main(){

    char caracter;

        cout<<"Caracter: ";
        cin>>caracter;
        cout<<endl;

// Se evalua el contenido de la variable:
    switch(caracter){/* { = Inicio del bloque de código*/
// Al tratarse de un char, el contenido irá entre ' '.
// Si se tratara de un valor numerico entonces el valor a evaluar se coloca sin ' ' (case 1, case 2, (...)).
        case '+': /*   :   = Inicio del bloque de instrucciones*/
            cout<<"ES +";
            break;/* break = Fin del bloque de instrucciones*/
        case '-':
            cout<<"ES -";
            break;
        case '*':
            cout<<"ES *";
            break;
        case '/':
            cout<<"ES /";
            break;
        default:
            cout<<"NO ES UN OPERADOR ARITMETICO VALIDO";
            break;
    }/* } = Fin del bloque de código*/

return 0;
}
/// Código en limpio:
/*
int main(){

    char caracter;

        cout<<"Caracter: ";
        cin>>caracter;
        cout<<endl;

    switch(caracter){
        case '+':
            cout<<"ES +";
            break;
        case '-':
            cout<<"ES -";
            break;
        case '*':
            cout<<"ES *";
            break;
        case '/':
            cout<<"ES /";
            break;
        default:
            cout<<"NO ES UN OPERADOR ARITMETICO VALIDO";
            break;
    }

return 0;
}
*/
