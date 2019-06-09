#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vet[16], i, aux=0;
   for (i=0; i<=15; i++)
   {
       printf("Digite p %i o elemento de vetor - v[%i]", i, i);
       scanf("%i", &vet[i]);
   }
        for (i=0; i<=7; i++)
        {
            aux=vet[i];
            vet[i]=vet[i+8];
            vet[i+8]=aux;
        }
    for (i=0; i<=15; i++)
    {
        printf("%\n\t%io elemento de vetor - v[%i]: %i", i, i, vet[i]);
    }
    return 0;
}
