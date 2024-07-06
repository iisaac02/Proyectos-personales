#include <stdio.h>

int main(void)
{
    int num1;

    printf ("Introduce un número: ");
    scanf("%d", &num1);
    if (num1 % 2 == 0)
        printf ("El número %d es par\n", num1);
    else
        printf ("%d no es un número par\n", num1);
}