///EJERCICIO :
///AUTOR     :
///FECHA     : DD/MM/AAAA
///COMENTARIO: -

//  Esto es un ejemplo de comentario en una linea.
/// Esto es un ejemplo de comentario resaltado en una linea.

/* Esto es la apretura de comentario.

   Aqu� podes escribir parrafos.
   Lo que est� comentado no afecta al c�digo fuente
   porque en el proceso de preprocesamiento
   estos espacios ser�n eliminados.

   Esto es el cierre de comentario.
*/
#include<iostream>      // Incluir la biblioteca est�ndar de entrada/salida de C++ (iostream):
using namespace std;    // Alcance (scope) de los nombres en el c�digo.
                        // Es una "delimitaci�n" de las herramientas y funciones de la biblioteca.

/// Ejercicio:
/*
Hacer un programa que solicite por pantalla el ingreso por teclado de dos enteros
y que emita por pantalla la suma de ambos.
*/

// Bloque de c�digo principal (main):
int main(){
/*
 Declaramos las variables que utilizaremos para operar y su tipo de dato:
*/
// 'int' = Tipo de dato (Entero)
    int numero1, numero2;
//     'numero1'/'numero2' = Declaraci�n compuesta de las variables separadas por la coma (,)
    int resultado;
//     'resultado' = Declaraci�n simple de la variable 'resultado'
//                                                     'resultado' es el identificador o nombre de la variable
/*
 Tambien se nos pide que nuestro programa solicite por pantalla el ingreso por teclado:
*/
//               salida de caracteres          salto de l�nea
//     'cout' = "character output" - 'endl' = "end line"
        cout<<"Ingrese dos numeros:"<<endl;
//         '<<' = operador de inserci�n

//     'cin' = "character input" (entrada de caracteres) - Aguarda el ingreso con un 'ENTER'
        cin>>numero1;
//        '>>' = operador de extracci�n
        cin>>numero2;
//          'numero2' recibe el valor ingresado por teclado y lo almacena en el espacio de memoria de la variable
/*
 El programa debe operar una suma con los dos valores
*/
// 'resultado' almacena el resultante de la operaci�n
    resultado = numero1 + numero2;
//                     '+' = operador de suma
/*
 Por ultimo, el programa debe emitir por pantalla la suma resultante
*/
//                        '<<' Concatena la cadena de caracteres con la variable
        cout<<"La suma es "<<resultado;
//                          'resultado' Emitir� por pantalla el valor que contenga

// Intrucci�n final del programa:
return 0;
}

/// programa en limpio:
/*
int main(){
    int numero1, numero2;
    int resultado;

        cout<<"Ingrese dos numeros:"<<endl;
        cin>>numero1;
        cin>>numero2;

    resultado = numero1 + numero2;

        cout<<"La suma es "<<resultado;

return 0;
}
*/
