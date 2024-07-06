#include <stdio.h>

int main(void)
{
    float   nbr1;
    float   nbr2;
    char     op;

    printf("Introduce el primer número: ");
    scanf("%f", &nbr1);
    getchar();
    printf("Introduce un operador: ");
    scanf("%c", &op);
    getchar();
    printf("Introduce el segundo número: ");
    scanf("%f", &nbr2);

    if (op == '+')
        printf("Resultado: %.2f\n", nbr1 + nbr2);
    if (op == '-')
        printf("Resultado: %.2f\n", nbr1 - nbr2);
    if (op == '*')
        printf("Resultado: %.2f\n", nbr1 * nbr2);
    if (op == '/')
        printf("Resultado: %.2f\n", nbr1 / nbr2);
}
