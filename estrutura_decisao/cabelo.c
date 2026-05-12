#include <stdio.h>

int main (){
float valorPintarcabelo = 0;
float valorCortaCabelo = 0;
float valorHidratacao = 0;
float valorEscova = 0;
float valorProgressiva = 0;
float valorBabyLiss = 0;
int opcao = 0; // 1->sim, 0-> não

printf("Voce vai pintar o cabelo? 1->sim, 0->nao");
scanf ("%i", &opcao);

if (opcao == 1) {
printf("Qual valor para pintar cabelo?");
scanf("%f", &valorPintarcabelo);
}

printf("Voce vai cortar o cabelo? 1->sim, 0->nao");
scanf ("%i", &opcao);

if (opcao == 1) {
printf("Qual o valor para cortar o cabelo");
scanf("%f", &valorCortaCabelo);
}


printf("Voce vai fazer escova? 1->sim, 0->nao");
scanf ("%i", &opcao);

if (opcao == 1) {

    printf("Qual o valor da escova?");
    scanf ("%f", &valorEscova);
}

printf("Voce vai fazer prograssiva? 1->sim, 0->nao");
scanf ("%i", &opcao);

if (opcao == 1) {

    printf("Qual o valor da progressiva?");
    scanf ("%f", &valorProgressiva);
}

printf("Voce vai fazer baby liss? 1->sim, 0->nao");
scanf ("%i", &opcao);

if (opcao == 1) {

printf("Qual o valor do Baby liss?");
scanf ("%f", &valorBabyLiss);
}

float total = valorBabyLiss + valorCortaCabelo + valorEscova + valorHidratacao + valorPintarcabelo + valorProgressiva;

if (total <= 150) {
    printf("Esta barato, valor R$ %.2f", total);
} else if (total > 150 && total <= 250) {
    printf("Esta razoavel, valor R$ %.2f", total);
} else if (total > 250) {
    printf("Esta caro, valor R$ %.2f", total);
}

    printf("Voce vai pagar a vista ou parcelado? 1->a vista, 0->parcelado");
    scanf("%i", &opcao);

    if (opcao == 1) {
        // desconto de 5%
        float desconto = total * 0.05;
        float totaldesconto = total - desconto;
        printf("O total e R$ %.2f", total);
        printf("O total com desconto e R$ %.2f", totaldesconto);

    } else if (opcao == 0) {
        //parcelado
        int qtdeParcelas = 0;
        printf("Quantas parcelas deseja fazer?");
        scanf("%i", &qtdeParcelas);

        float valorParcela = total / qtdeParcelas;
        printf ("O valor de cada parcela sera R$ %.2f", valorParcela);
    }

    return 0;
}
