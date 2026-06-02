#include <stdio.h>

void calculadora(int identificador, float n1, float n2){

    if(identificador == 1){
printf("Resultado = %.2f\n",  n1 + n2);
    }
    else if (identificador == 2){
    printf("Resultado = %.2f\n", n1 - n2);
} 
else if (identificador == 3){
    printf("Resultados = %.2f\n", n1 * n2);
} 
else if (identificador == 4){
    if(n2 = 0)
    printf("Resultado = %.2f", n1 / n2);

    else 
    printf("ERRO: divisao por Zero! \n");
}
else {
    printf("\nOperacao invalida!");
}
}
int main () {
    int op;
    float nume1, nume2;

    printf("1 - soma\n");
    printf("2 - subtracao\n");
    printf("3 - multiplicacao\n");
    printf("4 - divisao\n");

    printf("Digite a operação que você quer:");
    scanf("%d", &op);

    printf("Digite os numeros:");
    scanf("%f %f", &nume1, &nume2);

    calculadora(op, nume1, nume2);

    return 0;
}