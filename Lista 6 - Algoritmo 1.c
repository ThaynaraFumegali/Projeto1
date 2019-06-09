#include <stdio.h>
#include <stdlib.h>

int main()
{
    int latas, garrafas, pet;
    printf("Quantas latas voce comprou? ");
    scanf("%i", &latas);
    printf("Quantas garrafas (600ml)? ");
    scanf("%i", &garrafas)
    printf("Quantas pets (2l)? ");
    scanf("%i", &pet);
    printf("Total gasto em litros nas latas: %.2f\nTotal gasto nas garrafas(600ml): %.2f\nTotal adquirido em litros nas pets(2l): %.2f\n Total adquirido em litros: %.2f", ((latas*350)/1000), ((garrafas*600)/1000), (pet/2),(((latas*350)/1000)+((garrafas*600)/1000)+(pet/2)));
    return 0;
}
