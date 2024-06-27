#include <stdio.h> //Inclusion de biblioteca de funciones
#include <ctype.h> //Inclusion de biblioteca de funciones


void interpreta(char *); /*prototipo de funcion*/

void main(void)
{
    char cad[50]; //declara cadena de caracteres con 50 espacios
    printf("\nIngrese la cadena de caracteres: "); //imprime texto en consola
    fgets(cad, sizeof(cad), stdin); //lee la cadena de caracteres ingresada y pone un tamaño limite

    size_t len = strlen(cad); // cuenta cuántos caracteres hay antes del carácter nulo
    if (len > 0 && cad[len - 1] == '\n') // Verifica si el arreglo tiene caracter de salto de pagina
        cad[len - 1] = '\0'; // Cambia el salto de pagina por el caracter nulo '\0'
    interpreta(cad); //llama la funcion interpreta
}

void interpreta(char *cadena) /*prototipo de funcion*/

{
int i = 0, j, k; // Declara las variables enteras i, j y k
while (cadena[i] != '\0') // Recorre la cadena hasta encontrar el carácter nulo ('\0') que indica el final de la cadena
{
    if (isalpha(cadena[i])) // Verifica si el carácter en la posición i de la cadena es una letra
    {
        k = cadena[i - 1] - '0'; // Convierte el carácter anterior a un número entero restando el valor ASCII del '0'

        for (j = 0; j < k; j++) // Repite el siguiente bloque k veces
            putchar(cadena[i]); // Imprime el carácter en la posición i de la cadena
    }
    i++; // Incrementa i para pasar al siguiente carácter en la cadena
}
putchar('\n'); // Imprime una nueva línea al final del bucle
}
