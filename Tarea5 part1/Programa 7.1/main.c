#include <stdio.h> // Inclusión de biblioteca de funciones para entrada y salida estándar
#include <stdlib.h> // Inclusión de biblioteca de funciones estándar

void main(void)
{
    char p1, p2, p3 = '$'; // Declara variables de tipo caracter, inicializa p3 con '$'

    printf("\nIngrese un caracter: "); // Imprime texto en consola solicitando un carácter
    p1 = getchar(); // Lee un carácter desde la entrada estándar y lo almacena en p1
    putchar(p1); // Imprime el carácter almacenado en p1
    printf("\n"); // Imprime una línea en blanco (salto de línea)
    fflush(stdin); // Limpia el búfer de entrada

    printf("\nEl caracter p3 es: "); // Imprime texto en consola indicando que se va a mostrar el valor de p3
    putchar(p3); // Imprime el carácter almacenado en p3
    printf("\n"); // Imprime una línea en blanco (salto de línea)

    printf("\nIngrese otro caracter: "); // Imprime texto en consola solicitando otro carácter
    fflush(stdin); // Limpia el búfer de entrada

    scanf("%c", &p2); // Lee un carácter desde la entrada estándar y lo almacena en p2
    printf("%c", p2); // Imprime el carácter almacenado en p2
}
