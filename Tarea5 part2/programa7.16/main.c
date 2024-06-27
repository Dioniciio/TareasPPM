#include <stdio.h> //Inclusion de biblioteca de funciones
#include <string.h> //Inclusion de biblioteca de funciones

/* Prototipo de función */
void main(void)
{
    char cad1[50], cad2[50], *cad0; //declara 2 cadenas de 50 espacios
    int i = 0; //declara un entero de valor 0

    printf("\nIngrese la primera cadena de caracteres: "); //imprime texto en consola
    fgets(cad1, sizeof(cad1), stdin); //lee la cadena de caracteres ingresada y pone un tamaño limite
    // Eliminar el carácter de nueva línea si está presente
    size_t len = strlen(cad1); // cuenta cuántos caracteres hay antes del carácter nulo
    if (len > 0 && cad1[len - 1] == '\n') // Verifica si el arreglo tiene caracter de salto de pagina
        cad1[len - 1] = '\0'; // Cambia el salto de pagina por el caracter nulo '\0'

    printf("\nIngrese la cadena a buscar: "); //imprime texto en consola
    fgets(cad2, sizeof(cad2), stdin); //lee la cadena de caracteres ingresada y pone un tamaño limite
    // Eliminar el carácter de nueva línea si está presente
    len = strlen(cad2); // cuenta cuántos caracteres hay antes del carácter nulo
    if (len > 0 && cad2[len - 1] == '\n') // Verifica si el arreglo tiene caracter de salto de pagina
        cad2[len - 1] = '\0'; // Cambia el salto de pagina por el caracter nulo '\0'


    cad0 = strstr(cad1, cad2); //Busca la cad2 en la cad1, de no encontrarlo cad0 sera NULL


    while (cad0 != NULL) //bucle que se repetira mientras cad0 sea distinta del nulo
    {
        i++; //suma 1 al valor de i
        // Mover el puntero cad0 una posición adelante para buscar la siguiente ocurrencia
        cad0 = strstr(cad0 + 1, cad2);
    }

    printf("\nEl nUmero de veces que aparece la segunda cadena es: %d\n", i); //imprime texto en consola
}
