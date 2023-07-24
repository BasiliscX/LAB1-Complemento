/// Operador ternario
// ((expresi�n booleana)?instrucci�n VERDADERO:instrucci�n FALSO);
// El operador ternario se utiliza en los casos en donde SABEMOS que:
//  o El resultado de una evaluaci�n incluir� una instrucci�n en el falso.
//  o Tanto VERDADERO como FALSO contendr�n UNA sola instrucci�n.
/// Contras:
// Debido a que solo se ejecutar� una sola instrucci�n en cada resultado
// si en alg�n momento decidimos que haya un bloque de instrucciones
// no podremos hacerlo con un operador ternario y debemos pasarnos
// a una estructura m�s adecuada.
/*
Hacer un programa para ingresar un caracter y determinar:
Si el caracer es '+':
        debe emitir el cartel "ES +".

Si el caracer NO es '+':
        debe emitir el cartel "NO ES +".
*/
#include<iostream>
using namespace std;

int main(){

    char caracter;

        cout<<"Caracter: ";
        cin>>caracter;
        cout<<endl;

//  '(caracter=='+')?' = Expresi�n booleana
    ((caracter=='+')?cout<<"ES +"<<endl:cout<<"NO ES +"<<endl);
//                   |   VERDADERO    | |       FALSO        |

return 0;
}
