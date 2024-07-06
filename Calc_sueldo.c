#include <stdio.h>

int main(void)
{
    int sueldo;
    int paga;

    printf("Introduce el sueldo: ");
    scanf("%d", &sueldo);
    printf("Introduce las pagas: ");
    scanf("%d", &paga);
    paga *= 2;
    paga /= 12;
    sueldo += paga;
    printf("El sueldo final es de %d\n", sueldo);
}