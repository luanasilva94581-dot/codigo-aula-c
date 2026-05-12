#include <stdio.h>
#include <stdio.l>

int main () {
    bool comprouIngressoAntes = false;
    bool comprouIngressoNaHora = false;
    int comprou = 0;

    printf("Comprou o ingresso antes? 0->nao, 1->sim");
    scanf ("%d", &comprou);

    printf("comprou o igresso na hora? 0->nao, 1->sim");
    scanf("%d", &comprouIngressoNaHora);

    if (comprouIngressoAntes || comprouIngressoNaHora) {
        printf("Vai assistir o show !!! :)");
    }else {
        printf("Nao vai assistir o show :(");
    }

    return 0;
}