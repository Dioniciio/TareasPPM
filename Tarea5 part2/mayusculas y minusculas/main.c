#include <stdio.h>
#include <string.h>

void main(void)
{
    char cad[100];
    int i, min = 0, mayus = 0;

    printf("Ingrese una cadena de caracteres: \n");
    fgets(cad, sizeof(cad), stdin);

    for (i = 0; cad[i] != '\0'; i++)
    {
        if (cad[i] >= 'a' && cad[i] <= 'z')
        {
            min++;
            cad[i] = cad[i] - ('a' - 'A'); // Convertir minúscula a mayúscula restando la diferencia en ASCII
        }
        else if (cad[i] >= 'A' && cad[i] <= 'Z')
        {
            mayus++;
            cad[i] = cad[i] + ('a' - 'A'); // Convertir mayúscula a minúscula sumando la diferencia en ASCII
        }
    }

    printf("\nLa nueva cadena de caracteres es: \n%s", cad);
    printf("\nLa cantidad de minúsculas convertidas a mayusculas es: %d", min);
    printf("\nLa cantidad de mayúsculas convertidas a minusculas es: %d\n", mayus);
}
