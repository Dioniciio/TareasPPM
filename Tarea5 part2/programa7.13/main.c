#include <stdio.h> //Inclusion de biblioteca de funciones

int cuenta(char *); // Prototipo de la funci�n cuenta

void main(void)
{
    int i;
    char cad[50];

    printf("\nIngrese la cadena de caracteres: "); // Imprime texto en consola
    fgets(cad, sizeof(cad), stdin); // Lee una cadena de caracteres desde la entrada est�ndar

    i = cuenta(cad); // Llama a la funci�n cuenta para obtener la longitud de la cadena

    printf("\nLongitud de la cadena: %d", i); // Imprime la longitud de la cadena en consola
}

int cuenta(char *cadena)
{
    if (cadena[0] == '\0') // Verifica si el primer caracter es el fin de la cadena ('\0')
        return 0; // Retorna 0 si la cadena est� vac�a
    else
        return (1 + cuenta(&cadena[1])); // Retorna 1 m�s la longitud del resto de la cadena recursivamente
}
