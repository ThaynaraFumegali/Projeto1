#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tinf[15]={3,5,6,7,9,54,32,12,67,89,324,12,13,90,4}, i=0, num=0;
    while (i<=14)
    {
        if (tinf[i]>10 && tinf[i]%2!=0)
        {
            num++;
        }
    i++;
    }
    printf("%i", num);
    return 0;
}
