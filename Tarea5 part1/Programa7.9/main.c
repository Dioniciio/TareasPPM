#include <stdio.h> //Inclusion de biblioteca de funciones
#include <string.h> //Inclusion de biblioteca de funciones

int cuenta(char *, char); /* Prototipo de función. */

void main(void)
{
    char car, cad[50];
    int res;

    printf("\nIngrese la cadena de caracteres: "); //imprime texto en consola
    fgets(cad, sizeof(cad), stdin); //lee la cadena de caracteres ingresad


    size_t len = strlen(cad); // cuenta cuántos caracteres hay antes del carácter nulo
    if (len > 0 && cad[len - 1] == '\n') // Verifica si el arreglo tiene caracter de salto de pagina
        cad[len - 1] = '\0'; // Cambia el salto de pagina por el caracter nulo '\0'

    printf("\nIngrese el caracter: "); //imprime texto en consola
    car = getchar(); //lee un carácter desde la entrada estándar y lo guarda en car.

    res = cuenta(cad, car); // llama a la función cuenta para contar cuántas veces car aparece en cad y guarda el resultado en res.
    printf("\n\n%c se encuentra %d veces en la cadena %s\n", car, res, cad); //imprime texto en consola
}

int cuenta(char *cad, char car)

{
    int i = 0, r = 0; //declara variables de tipo entero
    while (cad[i] != '\0') //se repite bucle mientras el caracter i sea distinto de NULL
    {
        if (cad[i] == car) //establece la condicion de que el caracter albergado en i sea igual a car
            r++; //suma 1 al valor de r
        i++; //suma 1 al valor de i
    }
    return r; //la funcion devuelve el valor de r
}
