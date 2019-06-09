#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabuada[2]={1,1}, i;

    for (i=0; i<10; i++)
    {
        printf("\n%i x %i= %i", tabuada[0], (tabuada[1]+i), (tabuada[0]*(tabuada[1]+i)));
    }
    return 0;
}
