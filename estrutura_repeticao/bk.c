#include <stdio.h>

int main() {
    int amigos, i;
    float valor, total = 0;

    printf("Quantos amigos foram (incluindo voce)? ");
    scanf("%d", &amigos);

    for(i = 1; i <= amigos; i++) {
        printf("Digite o valor do lanche da pessoa %d: ", i);
        scanf("%f", &valor);
        total += valor;
    }

    printf("\nTotal da conta: R$ %.2f\n", total);

    if(total <= 48.90) {
        printf("Voce paga a conta toda \n");
    } else {
        printf("Cada um paga o seu \n");
    }

    return 0;
}