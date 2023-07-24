///EJERCICIO : Calculadora
///AUTORES   : Sin limite de integrantes (recomendable > 1).
///FECHA     : dd/mm/aaaa
///COMENTARIO: -

/// Calculadora de suma, resta, multiplicación y división.
//
///  Con este proyecto vas a lograr:
//      o Incorporar de manera practica conceptos teóricos vistos hasta el momento.
//      o Mejorar tu técnica con el IDE.
//      o Mejorar tu creatividad con las estructuras vistas.
//      o Incorporar habilidades blandas como trabajo en equipo.
//      o Aprender y enseñar lo aprendido con tu equipo.
//      o Incorporar el hábito de desarrollar proyectos.
//      o Ademas de poseer tu primer proyecto para compartir en GitHub y Linkedin.
//
/// Que no es este proyecto:
//      o NO es obligatorio.
//      o NO es una instancia evaluativa.
//      o NO va a repercutir negativamente el que lo tengas que abandonar.
//
/// Consigna:
/*
Deben programar una calculadora que:
        o Pida por pantalla un número (int o float)
        o Luego pida por pantalla un operador aritmetico (+, -, *, /)
        o Pida nuevamente otro número (del mismo tipo que el anterior)
        o Emita por pantalla el resultado de la operación

    por ejemplo:

    INGRESE UN NUMERO                   : 4
    INGRESE UN OPERADOR VALIDO (+,-,*,/): +
    INGRESE EL PROXIMO NUMERO           : 4

    LA SUMA ES 8

Opcional:
        o Pueden agregar calculo de resto o porcentaje
        o Pueden agregar operaciones con más números
        o Pueden proponer otro modelo visual al del ejemplo o de la consigna
        o Todo lo que vean en el paso que suma viene bien, hasta minijuegos :)
*/

#include<iostream>
using namespace std;

int main(){
/// Herramientas system (solo funcionales en Windows).
//
/// Cambiar tamaño de consola:
//            Columnas=80|Lineas=30
system("mode con: cols=80 lines=30");

/// Cambiar el nombre de la consola:
//            Borrar y renombrar
system("title INGRESAR UN NOMBRE");

/// Cambiar el color de texto y fondo de la consola:
//            70 son dos valores unidos, el primero se encarga del fondo y el segundo del texto.
system("color 70");


return 0;
}
///Códigos de colores aplicables para el fondo y el texto:
/*
0: Negro
1: Azul oscuro
2: Verde oscuro
3: Aguamarina oscuro
4: Rojo oscuro
5: Púrpura oscuro
6: Amarillo oscuro
7: Gris claro
8: Gris oscuro
9: Azul claro
A: Verde claro
B: Aguamarina claro
C: Rojo claro
D: Púrpura claro
E: Amarillo claro
F: Blanco
*/
