#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas,  bruto, horasmais;
    float horastrabalhadas;
    printf("De quantas horas se faz tua jornada de trabalho? ");
    scanf("%i", &horas);
    printf("Quantas horas voce trabalhou? ");
    scanf("%f",&horastrabalhadas);
    bruto=(horas*10);
    horasmais=(horastrabalhadas-horas);
        if (horas<horastrabalhadas)
        {
            printf("\tVoce trabalhou a mais!\n Seu salario normal sera de R$ %.i\nPor seu horario a mais, voce ira ganhar mais R$ %i\n\tTotalizando um salario de R$ %2.f ", bruto, (horasmais*15), (bruto-((bruto+(horasmais*15))*0.1));
        }
        else
        {
            printf("Voce cumpriu seu horario normal!\nSeu salario nao ira se alterar, sera de: R$ %.2i", bruto);
        }
    return 0;
}
