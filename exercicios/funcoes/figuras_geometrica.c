#include <stdio.h>
#include <locale.h>

void Calculandofiguras (){
    float const pi = 3.14;
    float Lado = 0;
    float raio = 0;

    int opcao = 0;
    
    printf("Qual tipo de figura você quer calcular? selecione 0 para circulo e 2 para quadrado");
    scanf("%i", &opcao);
    
    if(opcao == 1)
    {
        printf("Qual o valor do raio do circulo");
        scanf("%f", &raio);

        float circulo = pi * (raio*raio);
        printf("\nA área do circulo é: %.2f", circulo);
    }
    if(opcao == 2)
    {
        printf("Qual o valor da medida do quadrado");
        scanf("%f", &Lado);

        float quadrdo = Lado * Lado;
        printf("\nA área do seu quadrado é de: %.2f cm", quadrdo);

    }
}

int main()
{
setlocale(LC_ALL, "pt_BR.UTF-8");

Calculandofiguras();

return 0;
}