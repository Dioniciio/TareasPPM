#include <stdio.h>

const int MAX=100;
void Lectura(int, int);
int Binaria(int *, int, int);
void main(void)
{
int RES, ELE, TAM, VEC[MAX];
do
{
printf("Ingrese el tama�o del arreglo: ");
scanf("%d", &TAM);
}
while (TAM>MAX || TAM<1);
Lectura(VEC, TAM);
printf("\nIngrese el elemento a buscar: ");
scanf("%d", &ELE);
RES = Binaria(VEC, TAM, ELE);
if (RES)

printf("\nEl elemento se encuentra en la posici�n: %d", RES);
else
printf("\nEl elemento no se encuentra en el arreglo");
}
void Lectura(int A[], int T)

{
int I;
for (I=0; I<T; I++)
{
printf("Ingrese el elemento %d: ", I+1);
scanf("%d", &A[I]);
}
}
int Binaria(int A[], int T, int E)
