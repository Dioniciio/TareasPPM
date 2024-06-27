#include <stdio.h> //Inclusion de biblioteca de funciones
#include <string.h>//Inclusion de biblioteca de funciones

void intercambia(char FRA[][30], int); /* Prototipo de función */

void main(void)
{
    int i, n; //declara variables de tipo entero
    char FRA[20][30]; //Declaracion de un arreglo bidimensional tipo caracter con 20 filas y 30 columnas

    printf("\nIngrese el nUmero de filas del arreglo: "); //Imprime texto en pantalla
    scanf("%d", &n); //Permite ingresar un valor a una variable

    for (i = 0; i < n; i++) //Crea un bucle con i = 0 y la condicion para repetirse de que i sea menor que n, con cada vuelta suma 1 a i
    {
        printf("Ingrese la lInea de texto nUmero %d:\n ", i+1); //Imrpime texto en pantalla
        fflush(stdin); //Limpia el bufer de entrada, nos permite ingresar un dato por vez
        fgets(FRA[i], sizeof(FRA[i]), stdin); // Utilizar fgets para leer la línea a introducir y establece el tama;o maximo

        /* Eliminar el salto de línea si existe al final de la cadena*/
        size_t len = strlen(FRA[i]); // cuenta cuántos caracteres hay antes del carácter nulo
        if (FRA[i][len - 1] == '\n') // Verifica si el arreglo tiene caracter de salto de pagina
            FRA[i][len - 1] = '\0'; // Cambia el salto de pagina por el caracter nulo '\0'

    }

    printf("\n\n"); //Imprime dos lineas en blanco para dejar un espacio entre datos
    intercambia(FRA, n); //Llama a la funcion intercambia

    for (i = 0; i < n; i++) //Crea un bucle con la condicion de que i valga menos que n y suma 1 a i con cada vuelta
    {
        printf("ImpresiOn de la lInea de texto %d: ", i+1); //Imprime un texto
        puts(FRA[i]); //Imprime la cadena de texto guardada en la fila FRA[i] del arreglo FRA
    }
}

void intercambia(char FRA[][30], int n) //Prototipo de funcion
{
    /* Esta función intercambia las filas del arreglo */
    int i, j; //Declara 2 variables enteras
    j = n - 1; //Establece el valor de J
    char cad[30]; // declara un arreglo de caracteres con un tamanio de 30

    for (i = 0; i < (n / 2); i++) //Crea un bucle con la condicion de que i valga menos que la mitad n y va sumando 1 a i
    {
        strcpy(cad, FRA[i]); // Copia el contenido de la cadena FRA[i] en la variable "cad"
        strcpy(FRA[i], FRA[j]); //Copia el contenido de la cadena FRA[j] en FRA[i]
        strcpy(FRA[j], cad); //copia el contenido de cad de vuelta en FRA[j]
        j--; /* Corregir la decrementación de j */ //decrementa el índice j para que apunte a la siguiente posición hacia la izquierda en el arreglo FRA
    }
}
