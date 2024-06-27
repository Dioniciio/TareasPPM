#include <stdio.h> //Inclusion de biblioteca de funciones
#include <string.h> //Inclusion de biblioteca de funciones

/* Prototipo de función */
char *inverso(char *);

void main(void)
{
    char fra[50], aux[50]; // declara dos cadenas de 50 espacios

    printf("\nIngrese la lInea de texto: "); //imprime texto en consola
    fgets(fra, sizeof(fra), stdin); //Lee la cadena de texto ingresada y le pone como limite su propio tamanio (50 en este caso)
    // Eliminar el carácter de nueva línea si está presente
    size_t len = strlen(fra); // cuenta cuántos caracteres hay antes del carácter nulo
    if (len > 0 && fra[len - 1] == '\n') // Verifica si el arreglo tiene caracter de salto de pagina
        fra[len - 1] = '\0'; // Cambia el salto de pagina por el caracter nulo '\0'

    strcpy(aux, inverso(fra)); /* Se copia a aux el resultado de la función inverso. */

    printf("\nEscribe la lInea de texto en forma inversa: "); //imprime texto en consola
    puts(aux);
}

char *inverso(char *cadena)
/* La función calcula el inverso de una cadena y regresa el resultado al programa principal. */
{
    int i = 0, j, lon; //declara variables de tipo entero
    char cad; //declara cadena de caracteres

    lon = strlen(cadena); //Asigna a lon la longitud de la cadena
    j = lon - 1; //asigna un valor a j

    while (i < j) //crea un bucle que se repite mientras i sea menor que j
    {
        cad = cadena[i]; // Guarda el carácter en la posición i de la cadena en la variable cad.
        cadena[i] = cadena[j]; // Guarda el carácter en la posición i de la cadena en la variable cad.
        cadena[j] = cad;Asigna el valor guardado en cad (originalmente de la posición i) a la posición j.
        i++; //suma 1 a la variable i
        j--; //resta 1 al valor de la variable j
    }

    return cadena; //la funcion devuelve le valor de cadena
}
