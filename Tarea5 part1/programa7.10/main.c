#include <stdio.h> //Inclusion de biblioteca de funciones
#include <stdlib.h> //Inclusion de biblioteca de funciones

void main(void)
{
    char c, cad[10];
    int i = 0;
    float sum = 0.0;

    printf("\nDesea ingresar una cadena de caracteres (S/N)? "); //imprime texto en consola
    c = getchar();
    // Consumir el carácter de nueva línea que queda en el búfer
    while ((getchar()) != '\n'); //lee caracteres de la entrada estándar utilizando getchar() hasta que se encuentra con un salto de línea

    while (c == 'S' || c == 's') //bucle while que se ejecutará mientras la variable c sea igual a 'S' (mayúscula) o 's' (minúscula)
    {
        printf("\nIngrese la cadena de caracteres: "); //imprime texto en consolapreguntando por 1 de 2 caracteres
        fgets(cad, sizeof(cad), stdin); //lee la cadena de caracteres ingresada
        // Eliminar el carácter de nueva línea si está presente
        size_t len = strlen(cad); // cuenta cuántos caracteres hay antes del carácter nulo
        if (len > 0 && cad[len - 1] == '\n') // Verifica si el arreglo tiene caracter de salto de pagina
            cad[len - 1] = '\0'; // Cambia el salto de pagina por el caracter nulo '\0'

        i++; //suma 1 al valor de i
        sum += atof(cad); //convierte la cadena cad a un número de punto flotante y suma este número al valor actual de sum.

        printf("\nDesea ingresar otra cadena de caracteres (S/N)? "); //imprime texto en consola preguntando por 1 de 2 caracteres
        c = getchar();
        // Consumir el carácter de nueva línea que queda en el búfer
        while ((getchar()) != '\n');

    }

    if (i > 0) //verifica si i es mayor que 0
    {
        printf("\nSuma: %.2f", sum); //imprime texto en consola
        printf("\nPromedio: %.2f", sum / i); //imprime texto en consola
    }
    else
    {
        printf("\nNo se ingresaron cadenas de caracteres.\n"); //imprime texto en consola
    }
}
