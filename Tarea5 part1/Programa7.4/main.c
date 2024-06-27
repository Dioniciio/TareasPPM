#include <stdio.h> // Inclusión de la biblioteca estándar de entrada y salida
#include <stdlib.h> // Inclusión de la biblioteca estándar de utilidades

void main(void)
{
    char *cad0; // Declaración de un puntero a char
    cad0 = "Argentina"; // Asignación de la cadena "Argentina" al puntero cad0
    puts(cad0); // Imprime la cadena apuntada por cad0

    cad0 = "Brasil"; // Asignación de la cadena "Brasil" al puntero cad0
    puts(cad0); // Imprime la cadena apuntada por cad0

    char *cad1; // Declaración de un puntero a char
    gets(*cad1); // Error: lectura de una cadena en una dirección inválida
    gets(cad1); // Error: lectura de una cadena en una dirección inválida

    char *cad1 = ""; // Error: redeclaración de cad1 y asignación de una cadena vacía
    gets(cad1); // Error: lectura de una cadena en una dirección inválida

    char cad1[]; // Error: declaración de un arreglo sin tamaño

    char cad2[20] = "Mexico"; // Declaración de un arreglo cad2 con tamaño 20 y asignación de "Mexico"
    puts(cad2); // Imprime la cadena almacenada en cad2
    gets(cad2); // Lee una cadena de caracteres y la almacena en cad2
    puts(cad2); // Imprime la cadena almacenada en cad2
    cad2[10] = "Guatemala"; // Error: asignación incorrecta de una cadena a un elemento del arreglo
}
