#include <stdio.h>
#include <stdlib.h>

int main()
{
    float quantidade;
    printf("Qual a quantidade de sanduiches que voc quer fazer? ");
    scanf("%f", &quantidade);
    printf("\nQuantidade de queijo necessaria: %.2f Kg\nQuntidade de presunto necesssaria: %.2f Kg\nQuantidade de carne moida do hamburguer: %.2f Kg\n",((quantidade*2)*(50)/1000),((quantidade*50)/1000),(quantidade*100)/1000);
    return 0;
}
