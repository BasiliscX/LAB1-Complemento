/// Operadores lógicos:
//      AND Y = &&
//      OR O  = ||
/// Ejemplo de uso OR:
// V = VERDADERO, F = FALSO
//      if(V || F || F) Es un conjunto VERDADERO porque al menos UNA expresión es verdadera.
//      if(F || F || F) Es un conjunto FALSO porque NINGUNA expresión es verdadera.
//  (Lo mismo con el 'else if').
/// Ejercicio:
/*
Hacer un programa para ingresar TRES caracteres y determinar:
Si LOS CARACTERES fueron '+' O '-' O '+':
        debe emitir el cartel "SON/HAY OPERADORES ARITMETICOS VALIDOS".

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

//                   '||' = OR (Si al menos UNA expresión es verdadera, entonces el resultado es VERDADERO)
    if(caracter1=='+' || caracter2=='-' || caracter3=='*'){
        cout<<"SON/HAY OPERADORES ARITMETICOS VALIDOS"<<endl;
    }
// Si en el conjunto de expresiones unidas por el '||' no hubo ninguna verdadera, entonces el conjunto es FALSO
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
//  {+, i, *} =
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
