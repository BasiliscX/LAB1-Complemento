/// Operadores lógicos:
//      AND Y = &&
//      OR O  = ||
/// Ejemplo de uso AND:
// V = VERDADERO, F = FALSO
//      if(V || V || V) Es un conjunto VERDADERO porque TODAS las expresiones son verdaderas.
//      if(V || V || F) Es un conjunto FALSO porque hay al menos UNA expresión falsa.
//  (Lo mismo con el 'else if').
/// Ejercicio:
/*
Hacer un programa para ingresar TRES caracteres y determinar:
Si LOS CARACTERES fueron '+' Y '-' Y '+':
        debe emitir el cartel "SON OPERADORES ARITMETICOS VALIDOS".

Si LOS CARACTERES NO fueron '+' Y '-' y '*':
        debe emitir el cartel "NO SON OPERADORES ARITMETICOS VALIDOS".
*/
#include<iostream>
using namespace std;

int main(){

    char caracter1, caracter2, caracter3;

        cout<<"Caracter +: ";
        cin>>caracter1;
        cout<<endl;

        cout<<"Caracter -: ";
        cin>>caracter2;
        cout<<endl;

        cout<<"Caracter *: ";
        cin>>caracter3;
        cout<<endl;

//                   '&&' = AND (Si TODAS las expresiónes son verdaderas, entonces el resultado es VERDADERO)
    if(caracter1=='+' && caracter2=='-' && caracter3=='*'){
        cout<<"SON OPERADORES ARITMETICOS VALIDOS"<<endl;
    }
// Si en el conjunto de expresiones unidas por el '&&' hubo al menos UNA o más expresiones falsas, entonces el conjunto es FALSO
    else{
        cout<<"NO SON OPERADORES ARITMETICOS VALIDOS"<<endl;
    }

return 0;
}
///     EJERCICIO:
// Pensar en los posibles resultados de los siguientes ingresos y escribirlos.
// Luego comparar los resultados escritos con los que emita la consola.
//   ingreso  |  Resultado (¿V/F?)
//  {-, -, *} =
//  {i, -, j} =
//  {+, -, *} =
//  {i, j, k} =
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
