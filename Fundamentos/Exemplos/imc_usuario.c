/**
 *Agora você deve copiar o
 código do exemplo imc.c
 e deixar ele com informações
 dinâmicas :)
 */

 #include <stdio.h> 

int main() {
float peso = 0;
float altura = 0;

printf("qual a sua altura?");
    scanf("%i", &altura);

    printf("qual seu peso?");
    scanf("%i", &peso);

    // Processamento
    int total_atvs (peso) / (altura * altura);

    // Saída
    printf("O seu IMC e %i", total_atvs);
    
   return 0;