#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10], y[10], i;
    for (i=0; i<=9; i++)
    {
        printf("\tDigite um numero: ");
        scanf("%i", &x[i]);
            if (x[i]%2==0)
            {
                y[i]=0;
            } else
            {
                y[i]=1;
            }
    }
     for (i=0; i<=9; i++)
    {
        printf("\nx[%i]=%i -- y[%i]=%i", i, x[i], i, y[i]);
    }
 return 0;
}
