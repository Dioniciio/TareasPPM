#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char nombre[50];
    char matricula[20];
    int edad;
    char carrera[50];
    float promedio;

} Alumno;


void grabarDatos();
void leerDisco();
void imprimirAlumnos(Alumno* alumnos, int numAlumnos);
void liberarMemoria(Alumno* alumnos);

int main() {
    int opcion;

    while (1) {

        printf("\nMenu:\n");
        printf("1. Leer disco\n");
        printf("2. Grabar dato\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                leerDisco();
                break;
            case 2:
                grabarDatos();
                break;
            case 3:
                printf("Saliendo del programa...\n");
                return 0;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }
    }

    return 0;
}


void grabarDatos() {
    FILE *archivo;
    Alumno *alumnos = NULL;
    int numAlumnos = 0;
    char continuar;

    do {
        numAlumnos++;
        alumnos = (Alumno*) realloc(alumnos, numAlumnos * sizeof(Alumno));
        if (alumnos == NULL) {
            printf("Error al reservar memoria\n");
            exit(1);
        }

        printf("Ingrese el nombre del alumno: ");
        scanf("%s", alumnos[numAlumnos - 1].nombre);
        printf("Ingrese la matricula del alumno: ");
        scanf("%s", alumnos[numAlumnos - 1].matricula);
        printf("Ingrese la edad del alumno: ");
        scanf("%d", &alumnos[numAlumnos - 1].edad);
        printf("Ingrese la carrera del alumno: ");
        scanf("%s", alumnos[numAlumnos - 1].carrera);
        printf("Ingrese el promedio del alumno: ");
        scanf("%f", &alumnos[numAlumnos - 1].promedio);


        printf("¿Desea ingresar otro registro? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    archivo = fopen("alumnos.dat", "wb");
    if (archivo == NULL) {
        printf("Error al abrir el archivo\n");
        free(alumnos);
        exit(1);
    }

    fwrite(alumnos, sizeof(Alumno), numAlumnos, archivo);
    fclose(archivo);

    printf("Datos grabados en disco correctamente.\n");
    free(alumnos);
}


void leerDisco() {
    FILE *archivo;
    Alumno *alumnos = NULL;
    int numAlumnos = 0;
    size_t resultado;

    archivo = fopen("alumnos.dat", "rb");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo o el archivo no existe.\n");
        return;
    }

    fseek(archivo, 0, SEEK_END);
    long tamArchivo = ftell(archivo);
    rewind(archivo);

    if (tamArchivo == 0) {
        printf("El archivo está vacío.\n");
        fclose(archivo);
        return;
    }

    numAlumnos = tamArchivo / sizeof(Alumno);
    alumnos = (Alumno*) malloc(numAlumnos * sizeof(Alumno));
    if (alumnos == NULL) {
        printf("Error al reservar memoria\n");
        fclose(archivo);
        exit(1);
    }

    resultado = fread(alumnos, sizeof(Alumno), numAlumnos, archivo);
    if (resultado != numAlumnos) {
        printf("Error al leer el archivo\n");
        free(alumnos);
        fclose(archivo);
        exit(1);
    }

    fclose(archivo);

    imprimirAlumnos(alumnos, numAlumnos);
    liberarMemoria(alumnos);
}


void imprimirAlumnos(Alumno* alumnos, int numAlumnos) {
    printf("\nDatos de los alumnos:\n");
    for (int i = 0; i < numAlumnos; i++) {
        printf("Nombre: %s, Edad: %d, Carrera: %s, Promedio: %.2f, Matrícula: %s\n",
               alumnos[i].nombre, alumnos[i].edad, alumnos[i].carrera, alumnos[i].promedio, alumnos[i].matricula);
    }
}


void liberarMemoria(Alumno* alumnos) {
    free(alumnos);
}
