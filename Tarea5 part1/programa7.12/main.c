#include <stdio.h> //Inclusion de biblioteca de funciones
#include <ctype.h> //Inclusion de biblioteca de funciones

void main(void)
{
char cad[50];
int i = 0, mi = 0, ma = 0; //declara variables enteras
printf("\nIngrese la cadena de caracteres (mAximo 50 caracteres): "); //imprime texto en consola
fgets(cad, sizeof(cad), stdin); //lee la cadena ingresada
while(cad[i] != '\0')
{
if (islower (cad[i])) //verifica que el caracter alojado en i sea una letra minuscula
mi++; //suma 1 al valor de mi
else
if (isupper (cad[i])) //verifica que el caracter alojado en i sea una letra minuscula
ma++; //suma 1 al valor de ma
i++; //suma 1 al valor de i
}
printf("\n\nNumero de letras minusculas: %d", mi); //imprime texto en consola
printf("\nNumero de letras mayusculas: %d", ma); //imprime texto en consola
}
