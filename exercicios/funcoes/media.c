#include <stdio.h>
#include <locale.h>

void ola (){
    printf("Seja bem vindo!");
}

void calcularMedia(float n1, float n2){

printf("\nQual é a primeira nota?");
scanf("%f", &n1);

printf("\nQual é a segunda nota?");
scanf("%f", &n2);

float media = (n1 + n2) / 2;
printf("\nA média é: %.2f", media);

}

int main()
{
setlocale(LC_ALL, "pt_BR.UTF-8");


ola(); // Executando a função

calcularMedia(0,0);





return 0;
}