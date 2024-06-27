#include <stdio.h> //Inclusion de biblioteca de funciones
#include <string.h> //Inclusion de biblioteca de funciones

/* Prototipo de función */
void inverso(char *);

void main(void)
{
    char fra[50]; //Declara cadena de caracteres con 50 espacios

    printf("\nIngrese la lInea de texto: "); //imprime texto en consola
    fgets(fra, sizeof(fra), stdin); // Lee la línea de texto de manera segura

    // Eliminar el carácter de nueva línea si está presente
    size_t len = strlen(fra); // cuenta cuántos caracteres hay antes del carácter nulo
    if (len > 0 && fra[len - 1] == '\n')  // Verifica si el arreglo tiene caracter de salto de pagina
        fra[len - 1] = '\0'; // Cambia el salto de pagina por el caracter nulo '\0'

    printf("\nEscribe la lInea de texto en forma inversa: "); //imprime texto en consola
    inverso(fra);  // Llama a la función inverso con la cadena introducida por el usuario
    printf("\n");
}

void inverso(char *cadena) /* prototipo de funcion */
{
    if (*cadena != '\0') //Condicion de que la direccion a la q apunta *cadena sea distinta del caracter nulo
    {
        inverso(cadena + 1);  // Llama recursivamente a inverso con el siguiente caracter de la cadena
        putchar(*cadena);    // Imprime el caracter apuntado por cadena
    }
}

