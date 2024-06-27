#include <stdio.h> //Inclusion de biblioteca de funciones
#include <string.h> //Inclusion de biblioteca de funciones

/* Prototipo de funci�n */
int cuentap(char *);

void main(void)
{
    int i; //declara una variable tipo entero
    char fra[50]; //declara una cadena de caracteres de tamanio 5

    printf("\nIngrese la lInea de texto: "); //Imprime un texto en consola
    fgets(fra, sizeof(fra), stdin); // Lee la l�nea de texto de manera segura

    // Eliminar el car�cter de nueva l�nea si est� presente
    size_t len = strlen(fra); // cuenta cu�ntos caracteres hay antes del car�cter nulo
    if (len > 0 && fra[len - 1] == '\n') // Verifica si el arreglo tiene caracter de salto de pagina
        fra[len - 1] = '\0'; // Cambia el salto de pagina por el caracter nulo '\0'

    strcat(fra, " "); // Se agrega un espacio en blanco al final de la cadena
    i = cuentap(fra); //Asigna a la variable i el valor que devuelve la funcion
    printf("\nLa lInea de texto tiene %d palabras\n", i); //imprime texto en consola
}

int cuentap(char *cad) /* Prototipo de funcion */
{
    /* La funci�n cuenta el n�mero de palabras que hay en la cadena de caracteres. */
    char *cad0; //Declaracion de cadena
    int i = 0; //declaracion de entero con valor 0

    cad0 = strstr(cad, " "); // Se localiza el primer espacio en blanco en la cadena

    while (cad0 != NULL) //Bucle que se repetira mientras la cad0 sea diferente del nulo
    {
        strcpy(cad, cad0 + 1); // Copia la parte restante de la cadena despu�s del espacio
        i++; //suma 1 a la variable
        cad0 = strstr(cad, " "); // Se busca el pr�ximo espacio en blanco en la cadena
    }

    return i; //la funcion devuelve el valor de la variable i
}
