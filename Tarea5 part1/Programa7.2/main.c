#include <stdio.h> //Inclusion de biblioteca de funciones
#include <ctype.h> //Inclusion de biblioteca de funciones

void main(void)
{
    char p1; //declara variable de tipo caracter
    printf("\nIngrese un caracter para analizar si este es un digito: "); //imprime texto en consola
    p1 = getchar();
    if (isdigit (p1)) //Pone la condicion de que el caracter sea un digito

        printf("%c es un digito \n", p1); //imprime texto en consola
    else //ruta alterna si la condicion correspondiente no se cumple
        printf("%c no es un digito \n", p1); //imprime texto en consola
    fflush(stdin);
    printf("\nIngrese un caracter para examinar si este es una letra: "); //imprime texto en consola
    p1 = getchar();
    if (isalpha (p1)) //Pone la condicion de que el caracter sea una letra

        printf("%c es una letra \n", p1); //imprime texto en consola
    else //ruta alterna si la condicion correspondiente no se cumple
        printf("%c no es una letra \n", p1); //imprime texto en consola
    fflush(stdin);
    printf("\nIngrese un caracter para examinar si este es una letra minuscula: "); //imprime texto en consola
    p1 = getchar();
    if (isalpha (p1)) //Pone la condicion de que el caracter sea una letra
        if (islower (p1)) //Pone la condicion de que la letra sea minuscula

            printf("%c es una letra minuscula \n", p1); //imprime texto en consola
        else //ruta alterna si la condicion correspondiente no se cumple
            printf("%c no es una letra minúscula \n", p1); //imprime texto en consola
    else //ruta alterna si la condicion correspondiente no se cumple
        printf("%c no es una letra \n", p1); //imprime texto en consola
    fflush(stdin);
    printf("\nIngrese una letra para convertirla de mayuscula a minúscula: "); //imprime texto en consola
    p1 = getchar();
    if (isalpha (p1)) //Pone la condicion de que el caracter sea una letra
        if (isupper(p1))//Pone la condicion de que la letra sea mayuscula
            printf("%c fue convertida de mayuscula a minuscula \n", tolower(p1)); //imprime texto en consola y convierte una letra mayuscula en minuscula

        else //ruta alterna si la condicion correspondiente no se cumple
            printf("%c es una letra minuscula \n", p1); //imprime texto en consola
    else //ruta alterna si la condicion correspondiente no se cumple
        printf("%c no es una letra \n", p1); //imprime texto en consola
}

