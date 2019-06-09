#include <stdio.h>
#include <stdlib.h>

int main()
{
    float morango, maca;
    printf("Olá!\nQuantos Kg de morango voce comprou? ");
    scanf("%f", &morango);
    printf("Quantos Kg de maca? ");
    scanf("%f", &maca);
        if (morango>8)
        {
            printf("Voce devera pagar em morangos: R$ %.2f"(((morango*4)-((morango*4)*0.2))));
        }
        else (morango<8);
        {
            if (morango>5)
            {
                printf("O preco a ser pago pelos morangos e de: R$ %.2f", (morango*4));
            }
            else (morango<=5);
            {
                printf("O preco a ser pago pelos morangos e de: R$ %.2Ff", (morango*5));
            }
        }
        if (maca>8)
        {
            printf("O preco a ser pago pelas macas e de: R$ %.2f", ((maca*2)-((maca*2)*0.2)));
        }
        else
        {
            if (maca>5)
            {
                printf("O preco a ser pago pelas macas e de: R$ %.2f", (maca*2));
            }
            else (maca<=5);
            {
                printf("O preco a ser pago pelas macas e de: R$ %.2f", (maca*3));
            }
        }
    return 0;
}
