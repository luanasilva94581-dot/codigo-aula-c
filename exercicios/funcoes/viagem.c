#include <stdio.h>

void viagem(float distancia, float consumo, float gasto, float combustivel[]) {

    float litros;
    float gastos;
    
litros = distancia / consumo;
gastos = litros * gasto;

printf("\ncombustivel: %s", combustivel);
printf("\n Litros que foi necessario: %s", litros);
printf("\ntotal de gastos: %s", gasto);
}

int main (){

    float Distancia = 0;
    float GastosGasolina = 0;
    float PrecoGasolina = 0;
    float GastoEtanol = 0;
    float PrecoEtanol = 0;
    int opcao = 0;
    float consumo = 0;

    printf("------CALCULO DE QUANTO GASTOU NA VIAJEM------");

    printf("\nQual é o combustivel do carro?");
printf("\n1 - gasolina");
printf("\n2 - etanol");
printf("opcao:");
scanf("%d", &opcao);

    printf("\nQual a distancia da sua viajem (Km)?");
    scanf("%f", &Distancia);

    printf("\nQuanto o carro consumiu (km/L)");
    scanf("%f", &consumo);

    if(opcao == 1){
        printf("\nQaul o preco da gasolina (R$)");
        scanf("%f", &PrecoGasolina);

        printf("\nCombustivel Gasolina");
        calcularViagem(Distancia * consumo * PrecoGasolina);
    } else if (opcao == 2)
    {
    printf("\nQaul o preco do Etanol (R$)");
    scanf("%f", &PrecoEtanol);

    printf("\nCombustivel Etanol");
    calcularViagem(Distancia * consumo * PrecoEtanol);
    }
    

    return 0;
}