# include <stdio.h> //Inclusion de biblioteca de funciones
# include <ctype.h> //Inclusion de biblioteca de funciones

void main(void)
{
char p, cad[50];
int n; //declara variable entera
printf("\nIngrese la cadena de caracteres (mAximo 50): "); //imprime texto en consola
fgets(cad, sizeof(cad), stdin); //lee la cadena de texto ingresada
printf("\nIngrese la posiciOn en la cadena que desea verificar: "); //imprime texto en consola
scanf("%d", &n); //lee el valor ingresado
if ((n >= 0) && (n < 50)) //verifica que n sea 0 o mayor y menor que 50
{
p = cad[n-1]; //asigna a p el valor almacenado un espacio antes de n
if (islower(p)) //verifica si la letra es minuscula
printf("\n%c es una letra minUscula", p); //imprime texto en consola
else
printf("\n%c no es una letra minUscula", p); //imprime texto en consola
}
else
printf("\nEl valor ingresado de n es incorrecto"); //imprime texto en consola
}
