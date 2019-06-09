#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[15], i=0, media=0;
    while (i<=14)
    {
        printf("Digite o numero da posicao %i: ", i);
        scanf("%i", &vet[i]);
            while (vet[i]<0)
            {
                printf("===================== ERRO! ==========================\n======================================================\n\tACEEITO SOMENTE NUMEROS POSITIVOS!\nDigite novamente seu numero da posicao %i: ", i);
                scanf("%i", &vet[i]);
            }
        media=(media+vet[i]);
        i++;
    }
    printf("\nA media de seus numeros digitados eh de: %i", (media/15));
    return 0;
}
