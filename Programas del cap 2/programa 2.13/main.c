void main(void) //Es el punto de entrada del programa, no tiene parametros y no arroja resultados de tipo dato
{
    float X; //Representa variables que pueden tener parte decimal
    int Y; //Representa variable de tipo numero entero
    printf("Ingrese el valor de Y: "); //Imprime un texto
    scanf("%d", &Y); //Permite ingresar un valor para la variable Y
    if (Y < 0 || Y > 50) //Establece una condicion
        X = 0; //Le da un valor a la variable X
    else if (Y <= 10) //Presenta una alternativa con una condicion si no se cumple la condicion anterior
        X = 4 / Y - Y; //Le da un valor a la variable X
    else if (Y <= 25) //Presenta una alternativa con una condicion si no se cumple la condicion anterior
        X = pow(Y, 3) - 12;  //Le da un valor a la variable X con una operacion matematica
    else //Presenta una alternativa si la condicion anterior no se cumple
        X = pow(Y, 2) + pow(Y, 3) - 18;  //Le da un valor a la variable X con una operacion matematica
    printf("\n\nY = %d\tX = %8.2f", Y, X); //Imprime un texto quye incluye las variables
}
