 #include <stdio.h>

 int main () {
    float nota = 0;
    int faltas = 0;
    int ead = 0;

    printf("Qual e a nota final do aluno");
    scanf("%f", &nota);
    
    printf("QUantas faltas o aluno teve?");
    scanf("%i", &faltas);

    printf("QUal a porcentagem do EAD que foi feita?");
    scanf("%i", &ead);


if (nota >= 50 && faltas <= 25 && ead == 100){
        printf("Esta aprovado, ufa passei");
    } else {
        printf("Esta reprovado, ai ai ai lascou");
    }
    return 0;
} 