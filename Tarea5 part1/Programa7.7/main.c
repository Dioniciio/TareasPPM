#include <stdio.h> //Inclusion de biblioteca de funciones
#include <string.h> //Inclusion de biblioteca de funciones

void main(void)
{
    int i; // Declaración de la variable entera i

    // Declaración de cadenas de caracteres y asignación de valores iniciales
    char cad0[20] = "Hola México";
    char cad1[20] = "Hola Guatemala";
    char cad2[20] = "Hola Venezuela";
    char cad3[20] = "Hola México";

    char *c, c3; // Declaración de un puntero a char y una variable char


    i = strcmp(cad0, cad1);// Comparación de cadenas usando strcmp, asignación del resultado a i

    printf("\nResultado de la comparacion cad0 y cad1: %d", i);// Impresión del resultado de la comparación entre cad0 y cad1


    i = strcmp(cad0, cad2); // Comparación de cadenas usando strcmp, asignación del resultado a i

    printf("\nResultado de la comparacion cad0 y cad2: %d", i); // Impresión del resultado de la comparación entre cad0 y cad2


    i = strcmp(cad0, cad3);    // Comparación de cadenas usando strcmp, asignación del resultado a i

    printf("\nResultado de la comparacion cad0 y cad3: %d", i);// Impresión del resultado de la comparación entre cad0 y cad3


    i = strlen(cad0);// Calcula la longitud de la cadena cad0 y asigna el resultado a i

    printf("\nLongitud cadena cad0: %d", i);    // Impresión de la longitud de la cadena cad0


    i = strlen(cad1);// Calcula la longitud de la cadena cad1 y asigna el resultado a i

    printf("\nLongitud cadena cad1: %d", i); // Impresión de la longitud de la cadena cad1


    c = strchr(cad1, 'G');// Busca el primer carácter 'G' en la cadena cad1 y asigna el puntero a c

    if (c != NULL) // Si se encontró el carácter 'G' (c no es NULL), asigna el valor de c a c3 y lo imprime
    {
        c3 = *c;
        printf("\nEl valor de c3 es: %c", c3);
    }


    c = strchr(cad2, 'V');// Busca el primer carácter 'V' en la cadena cad2 y asigna el puntero a c

    if (c != NULL)// Si se encontró el carácter 'V' (c no es NULL), asigna el valor de c a c3 y lo imprime
    {
        c3 = *c;
        printf("\nEl valor de c3 es: %c", c3);
    }
}

