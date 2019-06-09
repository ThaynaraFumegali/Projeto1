#include <stdio.h>
#include <stdlib.h>

int main()
{
    int celsius;
    printf("Digite a temperatura em Graus Celsius: ");
    scanf("%d", &celsius);
    printf("\nA temperatura neste local e de: %.2f F\n", ((celsius*1.8)+32));
    return 0;
}
