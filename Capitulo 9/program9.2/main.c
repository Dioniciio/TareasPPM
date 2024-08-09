#include <stdio.h>
#include <stdlib.h>

void main(void)
{


char p1;
FILE *ar;
ar = fopen("C:\\Users\\Dioni\\Desktop\\Tareas de programacion\\Capitulo 9\\Program9.1\\zapato.txt", "r");
if (ar != NULL)
{
    while (!feof(ar))
        /* Se leen caracteres del archivo mientras no se detecte el fin del
        ➥archivo. */
    {
        p1 = fgetc(ar); /* Lee el caracter del archivo. */
        putchar(p1); /* Despliega el caracter en la pantalla. */
    }
    fclose(ar);
}
else
    printf("No se puede abrir el archivo");
}
