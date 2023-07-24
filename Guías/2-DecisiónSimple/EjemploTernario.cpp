/// Operador ternario
// ((expresión booleana)?instrucción VERDADERO:instrucción FALSO);
// El operador ternario se utiliza en los casos en donde SABEMOS que:
//  o El resultado de una evaluación incluirá una instrucción en el falso.
//  o Tanto VERDADERO como FALSO contendrán UNA sola instrucción.
/// Contras:
// Debido a que solo se ejecutará una sola instrucción en cada resultado
// si en algún momento decidimos que haya un bloque de instrucciones
// no podremos hacerlo con un operador ternario y debemos pasarnos
// a una estructura más adecuada.
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

//  '(caracter=='+')?' = Expresión booleana
    ((caracter=='+')?cout<<"ES +"<<endl:cout<<"NO ES +"<<endl);
//                   |   VERDADERO    | |       FALSO        |

return 0;
}
