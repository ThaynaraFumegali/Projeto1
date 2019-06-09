#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod[5], opc, codi=0, i=0, val[5];
    while (opc!=0)
    {
    printf("\n\t\t\t\tPRODUTOS\n--------------------------------------------------------------------------------\n\nSeu Menu:\n1.Cadastrar produto e valor.\n2.Alterar valor de produto.\n3.Mostrar todos os produtos.\n0.Sair\n\nDigite sua resposta: ");
    scanf("%i", &opc);
        switch (opc)
        {
            case 1:
            {
                for (i=0; i<=4; i++)
                {
                    printf("\n\tDigite o codigo  do produto: ");
                    scanf("%i", &cod[i]);
                    printf("\tDigite o preco do produto: ");
                    scanf("%i", &val[i]);
                }
            break;
            }
            case 2:
            {
                    printf("Digite o codigo do produto: ");
                    scanf("%i", &codi);
                    i=0;
                        while (codi!=cod[i])
                        {
                            i++;
                        }
                    printf("Digite o novo preco do produto %i: ", cod[i]);
                    scanf("%i", &val[i]);
            break;
            }
            case 3:
            {
                    for (i=0; i<=4; i++)
                    {
                            printf("\nO produto %i custa R$ %.2f.", cod[i], (val[i]*0.1)+val[i]);
                    }
            break;
            }
        }
    }
}
