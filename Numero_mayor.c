#include <stdio.h>

int main(void)
{
    int num1;
    int num2;

    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);
    if (num1 > num2)
        printf("El número mayor es el primero\n");
    else if (num2 > num1)
        printf("El número mayor es el segundo\n");
    else
        printf("Los dos números son iguales\n");
}