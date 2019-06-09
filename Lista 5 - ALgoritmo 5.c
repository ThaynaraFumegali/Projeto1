#include <stdio.h>
#include <stdlib.h>

int main()
{
    int frangos;
    printf("Quantos frangos a granja possui? ");
    scanf("%i", &frangos);
    printf("Para marcar todos seus frangos a granja ira gastar R$ %i ", (frangos*11));
    return 0;
}
