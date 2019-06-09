#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vetor[10], i, x;
   for (i=0; i<=9; i++)
   {
       printf("Digite um numero inteiro: ");
       scanf("%i", &vetor[i]);
            while (i>=0)
            {
                for (x=0; x<=i; x++)
                {
                    if (vetor[i+1]==vetor[x])
                    {
                         printf("Esse numero ja foi dado dentre os valores que ja tenho armazenado, infome outro: ");
                         scanf("%i", &vetor[i]);
                    }
                }
                i--;
            }
   }
   for (i=0; i<=9; i++)
   {
       printf("\nSeu numero na posicao %i: %i", i, vetor[i]);
   }
    return 0;
}
