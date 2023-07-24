/// En este ejemplo del mismo ejercicio podemos ver un ejemplo
/// sin el uso de llaves '{}'

#include<iostream>
using namespace std;

int main(){

    char caracter;

        cout<<"Caracter: ";
        cin>>caracter;
        cout<<endl;

    if(caracter=='+')
        cout<<"ES +"<<endl;
    else
        cout<<"NO ES +"<<endl;

return 0;
}
/*
La explicaci�n de por qu� el programa se ejecuta de igual manera al anterior ejemplo es la siguiente:

    o S� y solo s� existe UNA SOLA condici�n a ejecutar,
      el programa ejecutar� la instrucci�n siguiente al 'if' o al 'else'.

    o En el caso de que necesitemos ejecutar un CONJUNTO de n instrucciones,
      estas deben estar contenidas entre llaves '{}' para que el programa las interprete
      como parte de un mismo bloque o conjunto.
*/
/// No usar llaves no hace al c�digo m�s eficiente ni trae ning�n tipo de ventaja,
/// al contrario, hace al c�digo menos mantenible y puede introducir errores.
/// Una mejor practica que �sta es el uso del operador ternario (tampoco es recomendable de momento).

