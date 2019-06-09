#include <stdio.h>
#include <stdlib.h>

int main()
{
    float primeira, segunda, terceira;
    printf("Digite a primeira nota: ");
    scanf("%f",&primeira);
    printf("Digite a segunda: ");
    scanf("%f", &segunda);
    printf("Digite a terceira nota: ");
    scanf("%f", &terceira);
    printf("Sua media ponderada e de: %.2f", (((primeira*2)+(3*segunda)+terceira)/6));
    return 0;
}
