#include <stdio.h>

void academias()
{
    float viva = 12 * 39.99;
    float saude = 12 * 48.99;
    float fitness = 12 * 58.99;

    printf("\n--- PLANOS ANUAIS ---");
    printf("\nViva Saude: R$ %.2f", viva);
    printf("\nSaude em Dia: R$ %.2f", saude);
    printf("\nFitness Pro: R$ %.2f", fitness);

    if (viva < saude && viva < fitness)
    {
        printf("\nA academia mais enconta é a Viva Saude.");
    }
    else if (saude < viva && saude < fitness)
    {
        printf("\nAcademia mais perto de você é a Saude em Dia");
    }
    else if
    {
        printf("\nA academia mais equipada é a Fitness Pro");
    }

    printf("\n-------- BENEFICIOS------");
    printf("Viva Saude - 3 vezes por semana");
    printf("\nSaude em Dia - 4 vezes por semana");
    printf("\nFitness Pro - Quantos dias você quiser");
}

int main (){
    academias();

    return 0;
}