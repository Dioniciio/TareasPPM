#include <stdio.h> //Inclusion de biblioteca de funciones
#include <string.h> //Inclusion de biblioteca de funciones

int longitud(char *cad); /* Prototipo de función */

void main(void)
{
    int i, n, l = -1, p = 0, t; //Declarar variables de tipo entero
    char cad[50], FRA[20][50]; //Declarar 2 arreglos, siendo uno de tipo bidimensional

    printf("\nIngrese el nUmero de filas del arreglo: "); //Imprime un texto en consola
    scanf("%d", &n); //Permite ingresar un valor a una variable

    for (i = 0; i < n; i++) //Crea un bucle con la condicion para repetirse de que i sea menor q n
    {
        printf("Ingrese la lInea %d de texto. Maximo 50 caracteres: ", i + 1); //Imprime un texto en consola
        fflush(stdin);//Limpia el bufer de entrada
        fgets(FRA[i], sizeof(FRA[i]), stdin); /* Utilizar fgets para leer la línea */

        // Eliminar el salto de línea si existe al final de la cadena
        size_t len = strlen(FRA[i]); // cuenta cuántos caracteres hay antes del carácter nulo
        if (FRA[i][len - 1] == '\n') // Verifica si el arreglo tiene caracter de salto de pagina
            FRA[i][len - 1] = '\0'; // Cambia el salto de pagina por el caracter nulo '\0'
    }

    printf("\n"); //Imprime una linea en blanco para dejar un espacio entre datos

    for (i = 0; i < n; i++) //Inicia un bucle que se repetira mientras i sea menor que n
    {
        strcpy(cad, FRA[i]); // Copia el contenido de la cadena FRA[i] en la variable "cad"
        t = longitud(cad); //Asigna a la variable t el valor que devuelve la funcion longitud
        if (t > l) //Pone la condicion de que t sea mayor que uno
        {
            l = t; //Asigna a l el mismo valor de t
            p = i; //Asigna a p el mismo valor de i
        }
    }

    printf("\nLa cadena con mayor longitud es: "); //Imprime un texto en consola
    puts(FRA[p]); //Imprime la cadena de texto guardada en la fila FRA[i] del arreglo FRA
    printf("Longitud: %d\n", l); //Imprime un texto en consola
}

int longitud(char *cadena) /* Prototipo de función */

{
    /* Esta función calcula la longitud de la cadena */
    int cue = 0; //declara variable tipo entero con valor de 0
    while (cadena[cue] != '\0') //Crea un bucle que se repetir mientras cadena[cue] sea diferente del caracter nulo
        cue++; //suma 1 al valor de la variable
    return cue; //La funcion devuelve el valor de la variable
}
