#include <stdio.h> // Indica la biblioteca de comandos que se utilizara

void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
    int I, MAT, MAMAT, MEMAT; //Representa variable de tipo numero entero
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0; // Introdce variables de tipo numero real con parte decimal
    printf("Ingrese la matricula del primer alumno:\t"); //Imprime un texto
    scanf("%d", &MAT); //Permite asignar valores a las variables
    while (MAT) //crea un bucle con la condicion de que la variable "mat", sea verdadera
    {
        SUM = 0; //Asigna a SUM el valor de 0
        for (I = 1; I <= 5; I++) // Crea un bucle que se repetira mientras I sea menor o igual que 5 y en cada vuelta suma 1 a I
        {
            printf("\tIngrese la calificacion del alumno: ", I); //Imprime un texto
            scanf("%f", &CAL); //Permite asignar valores a las variables
            SUM += CAL; //Indica q SUN es igual a su valor + CAL
        }
        PRO = SUM / 5; //indica que la variable "pro" es igual al cociente de la variable "sum" entre 5
        printf("\nMatricula:%d\tPromedio:%5.2f", MAT, PRO); //Imprime en pantalla un texto con variables
        if (PRO > MAPRO) // Establece una condicion para ejecutar el siguiente bloque de codigo
        {
            MAPRO = PRO; //Indica que la variable mapro sera igual a pro
            MAMAT = MAT; //Indica que el valor de mamat sera igual al de mat
        }
        if (PRO < MEPRO) // Establece una condicion para ejecutar el siguiente bloque de codigo
        {
            MEPRO = PRO; //Indica que el valor de mepro sera igual al de pro
            MEMAT = MAT; //Indica que el valor de memat sera igual al de mat
        }
        printf("\n\nIngrese la matricula del siguiente alumno: "); //Imprime un texto
        scanf("%d", &MAT); //Permite asignar valores a las variables
    }
    printf("\n\nAlumno con mejor Promedio:\t%d\t\%5.2f", MAMAT, MAPRO); //Imprime un texto que contiene variables
    printf("\n\nAlumno con peor Promedio:\t%d\t\%5.2f", MEMAT, MEPRO); //Imprime un texto que contiene variables
}
