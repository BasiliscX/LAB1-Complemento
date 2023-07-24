/// Sintaxis del switch:
//
//  VARIABLE (Puede contener el valor x, y, z, (...))
//
//  switch(VARIABLE){
//      case 'x':
//          instrucci�n1;
//          break;
//      case 'y':
//          instrucci�n2;
//          break;
//      case 'z':
//          instrucci�n3;
//          break;
//      default:
//          instrucci�n0;
//          break;
//  }
//
///  Con la estructura switch evaluamos un conjunto de valores CONOCIDOS
///  que pueda contener la variable.
//  El programa ingresar� al bloque de c�digo contenido entre llaves '{}' del switch
//  para determinar el 'case' VERDADERO.
//  La evaluaci�n comenzar� desde el primer 'case' hasta el final del bloque
//  es por eso que debemos introducir en cada 'case' como intrucci�n final un 'break'
//  de otra forma, el programa tomar� el 'case' siguiente tambi�n como VERDADERO
//  y ejecutar� las instrucciones contenidas
//  hasta encontrar un 'break' o el fin del bloque de c�digo '}'.
///  default:
//  Es un tipo de 'case' indeterminado que se ejecutar�
//  cuando ning�n otro 'case' haya resultado en VERDADERO.
//  Ejecutar� las instrucciones contenidas en su bloque
//  hasta la instrucci�n 'break' o el fin del bloque del switch '}'.
///  A saber:
//  Cada bloque de instrucciones de 'case' o 'default' puede contener
//  todo tipo de instrucci�n, desde una simple asignaci�n hasta otro switch si es necesario.
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
    switch(caracter){/* { = Inicio del bloque de c�digo*/
// Al tratarse de un char, el contenido ir� entre ' '.
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
    }/* } = Fin del bloque de c�digo*/

return 0;
}
/// C�digo en limpio:
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
