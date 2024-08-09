#include <stdio.h>
#include <stdlib.h>

typedef struct /* Declaración de la estructura alumno. */
{
int matricula;
char nombre[20];
int carrera;
float promedio;
}alumno;
void escribe(FILE *); /* Prototipo de función. */
void main(void)
{
    FILE *ar;
if ((ar = fopen ("ad1.dat", "w")) != NULL)
escribe(ar);
else
printf("\nEl archivo no se puede abrir");
fclose(ar);
}
void escribe(FILE *ap)
/* Esta función sirve para leer los datos de los alumnos utilizando una
➥estructura tipo alumno, que se almacenará posteriormente en un archivo. */
{
alumno alu;
int i = 0, r;
printf("\nDesea ingresar informaciOn sobre alumnos? (Si-1 No-0): ");
scanf("%d", &r);
while (r)
{
i++;
printf("MatrIcula del alumno %d: ", i);
scanf("%d", &alu.matricula);
printf("Nombre del alumno %d: ", i);
fflush(stdin);
gets(alu.nombre);
printf("Carrera del alumno %d: ", i);
scanf("%d", &alu.carrera);
fflush(stdin);
printf("Promedio del alumno %d: ", i);
fflush(stdin);
scanf("%f", &alu.promedio);
fflush(stdin);
fwrite(&alu, sizeof(alumno), 1, ap);

printf("\nDesea ingresar informaciOn sobre mas alumnos? (Si-1 No-0): ");
scanf("%d", &r);
}
}
