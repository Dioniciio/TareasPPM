#include <stdio.h> //Indica que se usara la biblioteca de comandos basica
#include <math.h> //Incluye la biblioteca matematica estandar


void main(void)
{
int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO; //Representa variable de tipo numero entero
float PO1, PO2, PO3, PO4, PO5, PON; //Establece variables de tipo real
printf("Ingrese el primer voto: "); //Imprime un texto
scanf("%d", &VOT); //Permite asignar valores a las variables
while (VOT) //Crea un bucle con la condicion de que vot sea verdadera
{
switch(VOT) //Crea una estructura selectiva de varios casos segun el valor de las variables
{
case 1: C1++; break; // indica qu cuando la variable vot vale 1 a c1 se le suma 1 y rompe el ciclo de switch
case 2: C2++; break; // indica qu cuando la variable vot vale 2 a c2 se le suma 1 y rompe el ciclo de switch
case 3: C3++; break; // indica qu cuando la variable vot vale 3 a c3 se le suma 1 y rompe el ciclo de switch
case 4: C4++; break; // indica qu cuando la variable vot vale 4 a c4 se le suma 1 y rompe el ciclo de switch
case 5: C5++; break; // indica qu cuando la variable vot vale 5 a c5 se le suma 1 y rompe el ciclo de switch
default: NU++; break; //De no cumplirse ningun caso a la varible nu se le suma uno y se rompe el ciclo
}
printf("Ingrese el siguiente voto (0) para terminar: "); //Imprime un texto
scanf("%d", &VOT); //Permite asignar valores a las variables
}
SVO = C1 + C2 + C3 + C4 + C5 + NU; //Indica q el valor de svo es la suma de las variables desde c1 hasta c5 y nu
PO1 = ((float) C1 / SVO) * 100;//hace que la variable "po1" sea igual al producto, del cociente de la variable "c1" por la variable "svo", por 100
PO2 = ((float) C2 / SVO) * 100;//hace que la variable "po2" sea igual al producto, del cociente de la variable "c2" por la variable "svo", por 100
PO3 = ((float) C3 / SVO) * 100;//hace que la variable "po3" sea igual al producto, del cociente de la variable "c3" por la variable "svo", por 100
PO4 = ((float) C4 / SVO) * 100;//hace que la variable "po4" sea igual al producto, del cociente de la variable "c4" por la variable "svo", por 100
PO5 = ((float) C5 / SVO) * 100;//hace que la variable "po5" sea igual al producto, del cociente de la variable "c5" por la variable "svo", por 100
PON = ((float) NU / SVO) * 100;//hace que la variable "pon" sea igual al producto, del cociente de la variable "nu" por la variable "svo", por 100
printf("\nTotal de votos: %d", SVO); //Im[rime en pantalla un texto con variables
printf("\n\nCandidato 1: %d votos -- Porcentaje: %5.2f", C1, PO1); //Imprime en pantalla un texto con variables
printf("\nCandidato 2: %d votos -- Porcentaje: %5.2f", C2, PO2); //Imprime en pantalla un texto con variables
printf("\nCandidato 3: %d votos -- Porcentaje: %5.2f", C3, PO3); //Imprime en pantalla un texto con variables
printf("\nCandidato 4: %d votos -- Porcentaje: %5.2f", C4, PO4); //Imprime en pantalla un texto con variables
printf("\nCandidato 5: %d votos -- Porcentaje: %5.2f", C5, PO5); //Imprime en pantalla un texto con variables
printf("\nNulos: %d votos -- Porcentaje: %5.2f", NU, PON); //Imprime en pantalla un texto con variables
}
