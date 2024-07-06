#include <stdio.h>

int main(void)
{
    float   num1;
    float   num2;
    float   num3;

    printf("Introduce el primer número: ");
    scanf("%f", &num1);
    printf("Introduce el segundo número: ");
    scanf("%f", &num2);
    printf("Introduce el tercer número: ");
    scanf("%f", &num3);
    num1 += num2;
    num1 += num3;
    num1 /= 3;
    printf ("La media es: %.2f\n", num1);
}