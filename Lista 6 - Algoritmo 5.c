#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    printf("Digite um numero positivo maior que zero, por favor: ");
    scanf("%i", &num);
    printf("\nO numero elavado ao quadrado e: %.2f\nO numero elevado ao cubo e: %.2f\nA raiz quadrada do numero e: %f\nA raiz cubica do numero e de: %f\n", pow(num,2), pow(num,3), pow(num,1/2), pow(num,1/3);
    return 0;
}
