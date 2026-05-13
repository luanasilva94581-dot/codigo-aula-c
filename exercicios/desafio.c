#include <stdio.h>
#include <locale.h>
#include <string.h>


int main()
{
setlocale(LC_ALL, "pt_BR.UTF-8");

int km = 0;
int dias = 0;
char nome [30];
char carro [30];
float totalPorKm = 0;
float totalPorDia = 0;
const float VALOR_POR_KM = 1.25;
const float VALOR_POR_DIA = 99.50;
const char cupons[3][30] = {
    "LVDS_20", "LVDS_30", "LVDS_40"
};
char cupomCliente[30];
int temCupom = 0;
float valorDesconto = 0;

printf("Olá seja bem vindo, qual seu nome?");
scanf("%s", nome);

printf("Obrigado por escolher nossa loja, %s", nome);

printf("\n%s, Qual carro deseja alugar?", nome);
scanf("%s", carro);

printf("\nQuantos KMs com o %s você vai rodar com o carro?", carro);
scanf("%i", &km);

printf("Para mostra um relatorio detalhado diga quantos dias você ficara com o carro");
scanf("%i", &dias); 

printf("%s, tem cupom de desconto? 1->sim, 0->não", nome);
scanf("%i", &temCupom);
 
if (temCupom == 1) {
printf("Digite o código ");
scanf("%s", cupomCliente);

for (int i=0; i < 3; i++){
if (strcmp(cupomCliente, "LVDS_20") == 0) {
    valorDesconto = 20;
}
if (strcmp(cupomCliente, "LVDS_30") == 0) {
valorDesconto = 30;
}
if (strcmp(cupomCliente, "LVDS_40") == 0) {
valorDesconto = 40;
}
}
}

totalPorKm = (km * VALOR_POR_KM) - valorDesconto;
totalPorDia = (dias * VALOR_POR_DIA) - valorDesconto;

printf("%S, segue um relatório detalhado", nome);
printf("\nTotal po KM: R$ %.2f", totalPorKm);
printf("\nTotal por dia: R$ %.2f", totalPorDia);

if (temCupom == 1){
    printf("\nVocê teve desconto de R$ %.2f", valorDesconto);
}

if (totalPorDia < totalPorKm)
{
printf("\nSugerimos usar o plano por dia");
}else {
printf("\nSugerimos usar o plano po km");
}

printf("\nTenha uma ótima tarde.");
printf("\n Desenvolvido por luna V.D.S");




return 0;
}