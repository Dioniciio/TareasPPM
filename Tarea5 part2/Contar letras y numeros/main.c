#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main(void)
{
    char cad[200];
    int i, min = 0, mayus = 0, num = 0, otro = 0;

    printf("Ingrese una cadena de texto: \n");
    fgets(cad, sizeof(cad), stdin);

    for (i = 0; cad[i] != '\0'; i++)
    {
         if (cad[i] >= 'a' && cad[i] <= 'z')
            {
            min++;
        }else if (cad[i] >= 'A' && cad[i] <= 'Z')
        {
            mayus++;
        }else if (cad[i] >= '0' && cad[i] <= '9')
        {
        num++;
        }else if (cad[i] != ' ' && cad[i] != '\n')
        {
        otro++;
        }
    }
printf("\nLa cantidad de minusculas en el texto es: %d", min);
printf("\nLa cantidad de mayusclas en el texto es: %d", mayus);
printf("\nLa cantidad de digitos en el texto es: %d", num);
printf("\nLa cantidad de caracteres especiales en el texto es: %d", otro);
}
