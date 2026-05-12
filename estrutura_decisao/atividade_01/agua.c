#include <stdio.h>

int main()
{
    // Entrada de informações, variáveis e constantes
    const float valorPorLitro = 0.05;
    const int qtdLitrosMulta = 400;
    const int qtdLitrosDesconto = 250;
    const float valorMulta = 150;
    const float valorDesconto = 50;
    const int periodo30 = 30;
    const int faixaEconomica = 250;
    const int faixaExcessiva = 400;

    int qtdPessoasResidencia = 0;
    float valorTotalConta = 0;
    int qtdLitrosConsumida = 0;
    int idade = 0;

    // Processamento das informações
    printf("Ola, vamos calcular sua conta de agua\n");
    printf("Para iniciar, quantas pessoas moram na residencia? ");
    scanf("%i", &qtdPessoasResidencia);

    for (int i = 0; i < qtdPessoasResidencia; i++)
    {
        printf("Legal, agora qual idade da pessoa %i:", i);
        scanf("%i", &idade);

        if (idade <= 10)
        {
            qtdLitrosConsumida += 18;
        }
        else if (idade > 10 && idade <= 18)
        {
            qtdLitrosConsumida += 30;
        }
        else if (idade > 18 && idade <= 25)
        {
            qtdLitrosConsumida += 42;
        }
        else if (idade > 25)
        {
            qtdLitrosConsumida += 24;
        }
    }

    // valor total da conta
    valorTotalConta = valorPorLitro * qtdLitrosConsumida * periodo30;


    // relatório
    if (qtdLitrosConsumida >= faixaExcessiva)
    {
        // execessivo
        printf("faixa de consumo: execessiva \n");
        printf("quantidade de pessoas na residencia: %i\n", qtdPessoasResidencia);
        printf("Consumo de litros %i\n", qtdLitrosConsumida);
        printf("valor da conta mensal: R$ %.2f\n", valorTotalConta);
        printf("Multa aplicada: R$%.2\n", valorMulta);
    }
    else if (qtdLitrosConsumida <= faixaEconomica)
    {
        // economica
        printf("faixa de consumo: economica\n");
        printf("quantidade de pessoas na residencia: %i\n", qtdPessoasResidencia);
        printf("Consumo de litros %i\n", qtdLitrosConsumida);
        printf("valor da conta mensal: R$ %.2f\n",valorTotalConta);
        printf("desconto na proxima conta: R$ %.2f\n", valorDesconto);
    }
    else
    {
        // normal
        printf("faixa de consumo: normal\n");
        printf("quantidade de pessoas na residencia: %i\n", qtdPessoasResidencia);
        printf("Consumo de litros %i\n", qtdLitrosConsumida);
        printf("valor da conta mensal: R$ %.2f\n", valorTotalConta);
    }

    return 0;
}
