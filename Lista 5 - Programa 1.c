#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[6], B[6], C[6], D[6], i;
    for (i=0; i<=5; i++)
    {
              printf("Digite o numero %i do elemento do vetor A: ", i+1);
              scanf("%i", &A[i]);
                if (A[i]%2!=0)
                {
                    C[i]=A[i];
                }else
                {
                    D[i]=A[i];
                }
    }
    for (i=0; i<=5; i++)
    {
          printf("Digite o numero %i do elemento do vetor B: ", i+1);
          scanf("%i", &B[i]);
            if (B[i]%2!=0)
            {
                C[i]=B[i];
            }else
            {
                D[i]=B[i];
            }
    }
    for (i=0; i<=5; i++)
    {
    printf("\nOs numeros impares digitados sao: %i", C[i]);
    printf("\nOs numeros pares digitados sao: %i", D[i]);
    }
    return 0;
}
