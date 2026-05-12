/*
Você precisa comprar um carro e
pretende realizar o pagamento de 
forma parcelada.
Crie um algoritmo que calcule o valor
das parcelas descontando a o valor 
da entrada de 30%. 
*/
#include <stdio.h>

int main(){
 // Entrada
 float ValorCarro = 0;
 int qtdeParcelas = 0;
 const float entrada30 = 0.30;

 printf("Qual o valor do carro?");
 scanf("%f", &ValorCarro);

 printf("Quantas parcelas deseja pagar?");
 scanf("%i", &qtdeParcelas);

 // Processamento
 float valorEntrada = ValorCarro * entrada30;
 float valorRestante= ValorCarro - valorEntrada;
 float valorParcela = valorRestante / qtdeParcelas;


 // Saída
 printf("valor carro R$ %.2f \n", ValorCarro);
 printf("Valor da Entrada R$ %.2f \n", valorEntrada);
 printf("Valor da Entrada R$ %.2f \n", valorParcela);
 printf("%i parcelasbde R$ %.2f", qtdeParcelas, valorParcela);


    return 0;
}