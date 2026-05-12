#include <stdio.h>

int main() {
printf("Vamos calcular as notas do aluno");

int qtdeNotas = 0;
double notas = 0;
double totalNotas = 0;
double mediafinal = 0;

printf("\nQuantas notas deseja calcular?");
scanf("%i", &qtdeNotas);

for (int i=0; i < qtdeNotas; i++) {
printf("Qual a nota do aluno");
scanf("%lf", &notas);

totalNotas = totalNotas + notas;
}

mediafinal = totalNotas / qtdeNotas;

printf("\n A media final e %.2f", mediafinal);

if (mediafinal >= 6) {
    printf("\n Aprovado");
}else {
    printf("\n Reprovado");
}




return 0;
}