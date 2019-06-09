#include <stdio.h>
#include <stdlib.h>

int main()
{
    int (opc);
    float (alt);
    printf("Qual seu sexo?\n 1-Para muheres\n0-Para homens\n\nDigite: ");
    scanf("%i", &opc);
    printf("Qual sua altura? ");
    scanf("%f", &alt);
        if (opc=1)
        {
            printf("Seu peso ideal e de: %f Kg", ((62.1*alt)–(44.7)));
        }
        else (opc=0);
        {
            printf("Seu peso ideal e de: %f Kg", ((72.7*alt)–58));
        }
        return 0;
}
