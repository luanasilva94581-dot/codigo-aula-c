#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int qtdePessoas = 0;
    float totalFesta = 0;
    float totalPessoas = 0;

    char comes[5][30] = {
        "Coxinah", "Bolinho de queijo",
        "Esfirra", "Croquete",
        "Hamburguinho"};
    float valorComes[5] = {
        99.90, 82.99, 85.99, 78.99, 107.67};
    char bebes[5][30] = {
        "Coca cola", "Jaboti", "Guarana",
        "Suco de laranja", "Suco de uva"};
    float valorBebes[5] = {
        8.99, 9.99, 12.99, 8.99, 9.99};

    printf("\nVamos calcular o valor da confra");

    printf("\nQuantas pessoas vão participar? ");
    scanf("%i", &qtdePessoas);

    printf("escolha os salgados");
    int opcao = 0;
    int qtde = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("\nVai querer %s? (1->sim, 0->não)", comes[i]);
        scanf("%i", &opcao);

        if (opcao == 1)
        {
            printf("Quantos centos de %s? ", comes[i]);
            scanf("%i", &qtde);
            totalFesta += qtde * valorComes[i];
        }
    }

    printf("\nAgora escolha os Bebes");
    int qtdelitros = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("\nVai querer %s? (1->sim, 0->não)", bebes[i]);
        scanf("%i", &opcao);

        if (opcao == 1)
        {
            printf("Quantos unidades de %s? ", bebes[i]);
            scanf("%i", &qtde);
            totalFesta += qtde * valorBebes[i];
        }
    }
// refrigerante 2 litros
if (i == 0 || i == 1 || i == 2)
{
    litro += qtde * 2;
}

// suco 1 litro
if (i == 3 || i == 4)
litro += qtde * 1;

printf("\nTotal da festa R$ %.2f", total);
printf("\nTotal de salgadinho por pessoa R$ &%.2f", total/ qtdePessoas);

printf("\n total de bebidas ")

        return 0;
}