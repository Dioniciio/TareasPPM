#include <stdio.h> //Inclusion de biblioteca de funciones
#include <string.h> //Inclusion de biblioteca de funciones

void main(void)
{
    int i; // Declaraci�n de la variable entera i

    // Declaraci�n de cadenas de caracteres y asignaci�n de valores iniciales
    char cad0[20] = "Hola M�xico";
    char cad1[20] = "Hola Guatemala";
    char cad2[20] = "Hola Venezuela";
    char cad3[20] = "Hola M�xico";

    char *c, c3; // Declaraci�n de un puntero a char y una variable char


    i = strcmp(cad0, cad1);// Comparaci�n de cadenas usando strcmp, asignaci�n del resultado a i

    printf("\nResultado de la comparacion cad0 y cad1: %d", i);// Impresi�n del resultado de la comparaci�n entre cad0 y cad1


    i = strcmp(cad0, cad2); // Comparaci�n de cadenas usando strcmp, asignaci�n del resultado a i

    printf("\nResultado de la comparacion cad0 y cad2: %d", i); // Impresi�n del resultado de la comparaci�n entre cad0 y cad2


    i = strcmp(cad0, cad3);    // Comparaci�n de cadenas usando strcmp, asignaci�n del resultado a i

    printf("\nResultado de la comparacion cad0 y cad3: %d", i);// Impresi�n del resultado de la comparaci�n entre cad0 y cad3


    i = strlen(cad0);// Calcula la longitud de la cadena cad0 y asigna el resultado a i

    printf("\nLongitud cadena cad0: %d", i);    // Impresi�n de la longitud de la cadena cad0


    i = strlen(cad1);// Calcula la longitud de la cadena cad1 y asigna el resultado a i

    printf("\nLongitud cadena cad1: %d", i); // Impresi�n de la longitud de la cadena cad1


    c = strchr(cad1, 'G');// Busca el primer car�cter 'G' en la cadena cad1 y asigna el puntero a c

    if (c != NULL) // Si se encontr� el car�cter 'G' (c no es NULL), asigna el valor de c a c3 y lo imprime
    {
        c3 = *c;
        printf("\nEl valor de c3 es: %c", c3);
    }


    c = strchr(cad2, 'V');// Busca el primer car�cter 'V' en la cadena cad2 y asigna el puntero a c

    if (c != NULL)// Si se encontr� el car�cter 'V' (c no es NULL), asigna el valor de c a c3 y lo imprime
    {
        c3 = *c;
        printf("\nEl valor de c3 es: %c", c3);
    }
}

