#include <stdio.h> //Biblioteca estandar de funciones


void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
    float P, S, R; //Representa variables que pueden tener parte decimal
    printf("\nIngrese las ventas de los tres vendedores: "); //Imprime un texto
    scanf("%f %f %f", &P, &S, &R);//Permite ingresar valores para las 3 variables dadas
    if (P > S) // Establece una condicion
        if (P > R) // Establece una condicion
            if (S > R) // Establece una condicion
                printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R); //Imprime un texto con las variables ordenadas segun la condicion
            else // Se activa y ejecuta la linea de abajo al no cumplirse la condicion anterior
                printf("\n\n El orden es P, R y S: %8.2f %8.2f %8.2f", P, R, S); //Imprime un texto con las variables ordenadas segun la condicion
        else // Se activa y ejecuta la linea de abajo al no cumplirse la condicion anterior (Arriba y alineada con esta)
            printf("\n\n El orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S); //Imprime un texto con las variables ordenadas segun la condicion
    else if (S > R) //Si la condicion anterior de if es falsa se proporciona una ruta alternativa con una nueva condicion
        if (P > R) // Establece una condicion
            printf("\n\n El orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R); //Imprime un texto con las variables ordenadas segun la condicion
        else  // Se activa y ejecuta la linea de abajo al no cumplirse la condicion anterior
            printf("\n\n El orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P); //Imprime un texto con las variables ordenadas segun la condicion
    else // Se activa y ejecuta la linea de abajo al no cumplirse la condicion anterior (Arriba y alineada con esta)
        printf("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f", R, S, P); //Imprime un texto con las variables ordenadas segun la condicion
}
