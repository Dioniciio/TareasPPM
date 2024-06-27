#include <stdio.h> //Inclusion de biblioteca de funciones
#include <stdlib.h> //Inclusion de biblioteca de funciones

int main(void)
{
    int i; // Declaración de una variable entera
    double d; // Declaración de una variable de punto flotante de doble precisión
    long l; // Declaración de una variable entera larga
    char cad0[20], *cad1 = NULL; // Declaración de un arreglo de caracteres y un puntero a char inicializado a NULL

    printf("\nIngrese una cadena de caracteres: "); // Imprime texto en consola
    fgets(cad0, sizeof(cad0), stdin); // Lee una cadena de caracteres y la almacena en cad0
    i = atoi(cad0); // Convierte la cadena cad0 a un entero y lo almacena en i
    printf("\n%s \t %d", cad0, i + 3); // Imprime la cadena cad0 y el valor entero i incrementado en 3

    printf("\nIngrese una cadena de caracteres: "); // Imprime texto en consola
    fgets(cad0, sizeof(cad0), stdin); // Lee una cadena de caracteres y la almacena en cad0
    d = atof(cad0); // Convierte la cadena cad0 a un número de punto flotante y lo almacena en d
    printf("\n%s \t %.2lf", cad0, d + 1.50); // Imprime la cadena cad0 y el valor de d incrementado en 1.50 con 2 decimales

    d = strtod(cad0, &cad1); // Convierte la cadena cad0 a un número de punto flotante y almacena el resto de la cadena en cad1
    printf("\n%s \t %.2lf", cad0, d + 1.50); // Imprime la cadena cad0 y el valor de d incrementado en 1.50 con 2 decimales
    if (cad1 != NULL) { // Si cad1 no es NULL
        puts(cad1); // Imprime la cadena apuntada por cad1
    }

    l = atol(cad0); // Convierte la cadena cad0 a un número entero largo y lo almacena en l
    printf("\n%s \t %ld", cad0, l + 10); // Imprime la cadena cad0 y el valor de l incrementado en 10

    l = strtol(cad0, &cad1, 0); // Convierte la cadena cad0 a un número entero largo según la base indicada y almacena el resto de la cadena en cad1
    printf("\n%s \t %ld", cad0, l + 10); // Imprime la cadena cad0 y el valor de l incrementado en 10
    if (cad1 != NULL) { // Si cad1 no es NULL
        puts(cad1); // Imprime la cadena apuntada por cad1
    }

    return 0; // Devuelve 0 indicando que el programa terminó correctamente
}
