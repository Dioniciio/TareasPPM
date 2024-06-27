#include <stdio.h> //Inclusion de biblioteca de funciones
#include <string.h> //Inclusion de biblioteca de funciones
#include <ctype.h> //Inclusion de biblioteca de funciones

void minymay(char *cad);
void main(void)
{
    int i, n;
    char FRA[20][50];

    printf("\nIngrese el nUmero de filas del arreglo: "); //imprime texto en consola
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {

        printf("Ingrese la lInea %d de texto: ", i+1); //imprime texto en consola
        fgets(FRA[i], 50, stdin); //lee la cadena de caracteres ingresada
    }
    printf("\n\n"); //Imprime 2 lineas ne blanco
    for (i=0; i<n; i++) //ejecuta un bucle n veces
        minymay(FRA[i]);
}
void minymay(char *cadena)

{
    int i = 0, mi = 0, ma = 0;
    while(cadena[i] != '\0')
    {
        if (islower(cadena[i]))
            mi++;
        else if (isupper(cadena[i]))
            ma++;
        i++;
    }
    printf("\n\nNUmero de letras minUsculas: %d", mi); //imprime texto en consola
    printf("\nNUmero de letras mayUsculas: %d", ma); //imprime texto en consola
}
