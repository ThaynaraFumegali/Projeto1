#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, num2;
    printf("Digite um numero positivo maior que zero, por favor: ");
    scanf("%i", &num);
    printf("Digite mais um, por favor: ");
    scanf("%i", &num2);
    printf("O primeiro numero elevado ou segundo, resulta em: %.0f", pow(num, num2));
    return 0;
}
