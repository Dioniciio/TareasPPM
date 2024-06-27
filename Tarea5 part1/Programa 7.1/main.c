#include <stdio.h> // Inclusi�n de biblioteca de funciones para entrada y salida est�ndar
#include <stdlib.h> // Inclusi�n de biblioteca de funciones est�ndar

void main(void)
{
    char p1, p2, p3 = '$'; // Declara variables de tipo caracter, inicializa p3 con '$'

    printf("\nIngrese un caracter: "); // Imprime texto en consola solicitando un car�cter
    p1 = getchar(); // Lee un car�cter desde la entrada est�ndar y lo almacena en p1
    putchar(p1); // Imprime el car�cter almacenado en p1
    printf("\n"); // Imprime una l�nea en blanco (salto de l�nea)
    fflush(stdin); // Limpia el b�fer de entrada

    printf("\nEl caracter p3 es: "); // Imprime texto en consola indicando que se va a mostrar el valor de p3
    putchar(p3); // Imprime el car�cter almacenado en p3
    printf("\n"); // Imprime una l�nea en blanco (salto de l�nea)

    printf("\nIngrese otro caracter: "); // Imprime texto en consola solicitando otro car�cter
    fflush(stdin); // Limpia el b�fer de entrada

    scanf("%c", &p2); // Lee un car�cter desde la entrada est�ndar y lo almacena en p2
    printf("%c", p2); // Imprime el car�cter almacenado en p2
}
