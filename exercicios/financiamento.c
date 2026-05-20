#include <stdio.h>
#include <locale.h>

// Empresa Finantech (Veiculos e apartamentos)

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int meses = 0;
    char nome[50];
    float valor = 0;
    float juros = 0;
    const int TaxaVeiculo = 0.015;
    const int TaxaMeses = 0.05;
    float total = 0;
    int Opcao = 0;
    float Renda30 = 0;
    float valorJuros = 0;
    float renda = 0;
    float valorcJuros = 0;

    // Veiculos
    float Carro = 0;
    float moto = 0;
    float caminhao = 0;
    float Totalveiculo = 0;

    // imoveis
    int Apartamento = 0;
    int casa = 0;
    float taxaImovel = 0;
    float totalImovel =0;

    printf("-----Finantech-----");

    // nome do cliente
    printf("Olá bom dia, qual seu nome?");
    scanf("%s", nome);

    printf("Obrigada por escolher nossa loja, %s", nome);

    printf("\n Vamos comecar mas antes precisamos saber da sua renda Mensal");
    scanf("%f", &renda);

    printf("\nQual tipo de financiamento você deseja fazer com a Finantech?");
    printf("\n Digite 1 <-- para veiculo e 2 <-- para Imovel");
    scanf("%i", &Opcao);

    if (Opcao == 1 || Opcao == 3) // veiculos
    {
        printf("\n Os veiculos desponiveis são carros, motos e Caminhos");
        printf("\n Qual dessas opcao você deseja, digite 1 <-- para carro, 2 <-- para motos, 3 <-- para caminhoes");
        scanf("%i", &Opcao);

        // carro

        if (Opcao == 1)
        {
            printf("essa é uma otima escolha %s", nome);
            printf("\n Antes de finalizarmos os calculos, qual seria o valor do carro que você deseja?");
            scanf("%f", &Carro);

            printf("\nAqui na finantech temos pazos de financiamento para cada opção");
            printf("\nPrazo do financiamento do carro é de: 6 até 48 meses");
            printf("\nEnquantos meses você gostaria de finaciar o carro %s", nome);
            scanf("%i", &meses);

            // calculo carro
            Carro = (meses * TaxaVeiculo);
        }

        // moto
        if (Opcao == 2)
        {
            printf("Otima escolha %s", nome);
            printf("\n Antes de finalizar, qual seria o valor da moto que você desejaria?");
            scanf("%f", &moto);

            printf("\nAqui na finantech temos pazos de financiamento para cada opção");
            printf("\nPrazo do financiamento da moto é de: 3 até 24 meses");
            printf("\nEnquantos meses você gostaria de finaciar a moto %s", nome);
            scanf("%i", &meses);

            // calcular moto
            moto = (meses * TaxaVeiculo);
        }

        // caminhao
        if (Opcao == 3)
        {
            printf("Otima escolha %s", nome);
            printf("\n Antes de finalizar, qual seria o valor do caminhao que você deseja");
            scanf("%s", &caminhao);

            printf("\nAqui na finantech temos pazos de financiamento para cada opção");
            printf("\nPrazo do financiamento do caminhão é de: 100 até 200 meses");
            printf("\nEnquantos meses você gostaria de finaciar o caminhão %s", nome);
            scanf("%i", &meses);

            // calcular caminhao
            caminhao = (meses * TaxaVeiculo);
        }
    }

    if (Opcao == 2 || Opcao == 3) // imoveis
    {
        printf("\n No momento temos casas e apartamentos desponiveis");
        printf("\n Qual você deseja?, digite 1 <-- para Casa, 2 <-- para apartamento");
        scanf("%i", &Opcao);
        // casa

        if (Opcao == 1)
        {
            printf("\nOtima escolha %s", nome);
            printf("\n Antes de finalizar, qual seria o valor da casa que você deseja");
            scanf("%i", &casa);

            printf("\nO prazo do financiameto para casa é de: 150 até 360 meses");
            printf("\nEnquantos meses você gostaria de financiar a casa %s?", nome);
            scanf("%i", &meses);

            // calculo casa
            valorJuros = (meses * taxaImovel) * total;
        }
        // apartamento
        if (Opcao == 2)
        {
            printf("\nOtima escolha %s", nome);
            printf("\n Antes de finalizar, qual seria o valor do Apartamento que você deseja");
            scanf("%f", &total);

            printf("\nO prazo do financiameto para o apartamento é de: 100 até 300 meses");
            printf("\nEnquantos meses você gostaria de financiar o apartamento %s?", nome);
            scanf("%i", &meses);

            // calculo apartamento
            valorJuros = (meses * taxaImovel) * total;
        }
    }

    // calculos

    renda = (renda * 0.30);
    valorcJuros = total + valorJuros;
    printf("\n total %f", total);
    printf("\n valorcJuros %f", valorcJuros);
    valor = valorcJuros / meses;

    printf("%s je estamos chegando ao fim do nosso atendimento", nome);
    printf("\nAqui esta o relatorio completo do nosso atendimento");

    printf("\n--- Valor do financiamento----");
    printf("\n O financiamento do veiculo e de R$ %.2f", valorcJuros);
    printf("\n O valor do imovel é de R$ %.2f", total);

    // if (TotalI && valorcJuros < Renda30)
    // {
    //     printf("SEU FINANCIAMENTO INFELIZMENTE NÃO FOI APROVADO");
    //     printf("Seu financiamento não pode passar de 30% da sua renda mensal");
    //     printf("sentimos muito. Esperamos que você possa resolver. Obrigada por consultar a Finantech");
    // }
    // else
    // {

    //     printf("\n------Valor do finaceiros-----");
    //     printf("\nSeu finaciamento foi aprovado");
    //     printf("\nAS suas parcelas foram divididas da seguinte maneira R$ %.2f", valor);
    //     printf("\nvalor dos juros é de R$ %.2f", valorJuros);
    //     printf("\nAs suas parcelas foram divididas da maneira R$ %.2f", valorParcela);
    // }

    return 0;
}