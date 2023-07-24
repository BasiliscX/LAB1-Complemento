/// Sintaxis del 'if' / 'if_else':

// Si solo se prentenden instrucciones para el VERDADERO de una expresión
// y no se prentenden instrucciones en el FALSO, usar solamente 'if'
///  if(Expresión booleana){ == VERDADERO
///  Instruccion;
///  }
// Siempre que utilicemos 'else' el programa tendrá que ejecutar un bloque '{...}' del 'if'
// tanto del VERDADERO (if) como del FALSO (else).
//
// Casos en los que el programa debe ejecutar instrucciones
// sí el resultado de la evaluación 'if' es FALSO:
///  if(Expresión booleana){ == VERDADERO
///  Instruccion;
///  }
///  else{ == FALSO
///  Instruccion;
///  }
// En este ejemplo el programa ejecutará O el bloque del VERDADERO O el bloque del FALSO
/*
Operadores relacionales
Para realizar proposiciones lógicas necesitamos:

Operador Descripción
  ==        Igual que
  !=        Distinto que
  >         Mayor que
  <         Menor que
  >=        Mayor o igual que
  <=        Menor o igual que
*/
#include<iostream>
using namespace std;
/*
Hacer un programa para ingresar un caracter y determinar:
Si el caracer es '+':
        debe emitir el cartel "ES +".
Si el caracer NO es '+':
        debe emitir el cartel "NO ES +".
*/
int main(){

/*
Se declaran primero las variables a utilizar para resolver el problema
*/
// 'char' = Tipo de dato que almacena un caracter
    char caracter;
//      'caracter' = Variable que recibirá el caracter en el flujo 'cin'
/*
Se solicita el ingreso de un caracter
*/
        cout<<"Ingresar caracter: ";
        cin>>caracter;
//     'cout<<endl' = Salto de línea visto en la consola
        cout<<endl;
/*
Se evalua por comparación el caracter ingresado con el que se espera que sea
*/
// Si el resultado de la evaluación es VERDADERO se ejecuta el siguiente bloque de código:
    if(caracter=='+'){/*Inicio del bloque de código*/
        cout<<"ES +"<<endl;
    }/*Fin del bloque de código*/
// Si el resultado de la evaluación es FALSO se ejecuta el siguiente bloque de código:
    else{/*'else' = De otra forma:*/
        cout<<"NO ES +"<<endl;
    }

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
    else{
        cout<<"NO ES +"<<endl;
    }

return 0;
}
*/
