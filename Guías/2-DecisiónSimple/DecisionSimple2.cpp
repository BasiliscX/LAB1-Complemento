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
La explicación de por qué el programa se ejecuta de igual manera al anterior ejemplo es la siguiente:

    o Sí y solo sí existe UNA SOLA condición a ejecutar,
      el programa ejecutará la instrucción siguiente al 'if' o al 'else'.

    o En el caso de que necesitemos ejecutar un CONJUNTO de n instrucciones,
      estas deben estar contenidas entre llaves '{}' para que el programa las interprete
      como parte de un mismo bloque o conjunto.
*/
/// No usar llaves no hace al código más eficiente ni trae ningún tipo de ventaja,
/// al contrario, hace al código menos mantenible y puede introducir errores.
/// Una mejor practica que ésta es el uso del operador ternario (tampoco es recomendable de momento).

