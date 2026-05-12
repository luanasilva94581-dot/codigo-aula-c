/*
Você está trabalhando e gostaria de
guardar 25% do seu salário todo mês.
O banco está com um investimo que 
rende 6.8% ao mês de juros e você
vai usar esse formato de investimento.
Crie um algoritmo para calcular seu 
investimento.
*/

#include <stdio.h>

int main(){

    // Entrada
   float salario = 0;
   int meses = 0;
   const float guardar = 0.25;
   const float juros = 0.0068;

    printf("Qual o valor do Salario?");
    scanf ("%f", &salario);

    printf("Quantos meses pretende investir?");
    scanf("%i", &meses);

    // Processamento
   float totalJurosPercentual = meses * juros; // total de juros 
   float salario25 = salario * guardar; // 25% do salario
   float totalDinheiro = meses * salario25; // montante guardado
   float totalJurosValor = totalDinheiro * totalJurosPercentual;
   float totalComJuros = totalJurosValor + totalDinheiro;

    // Saída
    printf("Total juros em %.2f \n", totalJurosPercentual);
    printf("Valor guardado sem juros %.2f \n", totalDinheiro);
    printf("meses %i \n", meses);
    printf("Valor do juros do banco R$ %.2f \n", totalJurosValor);
    printf("Valor guardado com juros %.2f \n", totalComJuros);
}