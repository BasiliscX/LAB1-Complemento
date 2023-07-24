/// Sintaxis del 'if' / 'if_else':

// Si solo se prentenden instrucciones para el VERDADERO de una expresi�n
// y no se prentenden instrucciones en el FALSO, usar solamente 'if'
///  if(Expresi�n booleana){ == VERDADERO
///  Instruccion;
///  }
// Siempre que utilicemos 'else' el programa tendr� que ejecutar un bloque '{...}' del 'if'
// tanto del VERDADERO (if) como del FALSO (else).
//
// Casos en los que el programa debe ejecutar instrucciones
// s� el resultado de la evaluaci�n 'if' es FALSO:
///  if(Expresi�n booleana){ == VERDADERO
///  Instruccion;
///  }
///  else{ == FALSO
///  Instruccion;
///  }
// En este ejemplo el programa ejecutar� O el bloque del VERDADERO O el bloque del FALSO
/*
Operadores relacionales
Para realizar proposiciones l�gicas necesitamos:

Operador Descripci�n
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
//      'caracter' = Variable que recibir� el caracter en el flujo 'cin'
/*
Se solicita el ingreso de un caracter
*/
        cout<<"Ingresar caracter: ";
        cin>>caracter;
//     'cout<<endl' = Salto de l�nea visto en la consola
        cout<<endl;
/*
Se evalua por comparaci�n el caracter ingresado con el que se espera que sea
*/
// Si el resultado de la evaluaci�n es VERDADERO se ejecuta el siguiente bloque de c�digo:
    if(caracter=='+'){/*Inicio del bloque de c�digo*/
        cout<<"ES +"<<endl;
    }/*Fin del bloque de c�digo*/
// Si el resultado de la evaluaci�n es FALSO se ejecuta el siguiente bloque de c�digo:
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
