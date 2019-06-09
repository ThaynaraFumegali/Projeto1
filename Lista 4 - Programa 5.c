#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetA[7]={1,2,3,4,5,6,7}, vetB[7], i, aux;
    for (i=0; i<6; i++)
    {
        aux=vetA[i];
        vetB[i]=vetA[6-i];
        vetB[6-i]=aux;
    }
        for(i=0; i<=6; i++)
        {
            printf("\n%i x %i = %i", vetA[i], vetB[i], (vetA[i]*vetB[i]));
        }

    return 0;
}
