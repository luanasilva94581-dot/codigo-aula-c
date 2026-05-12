#include <stdio.h>

int main() {
    int dia = 0;

    printf("Qual dia da semana ? 1->, 7->sab");
    scanf("%i", &dia);

    switch (dia){
        case 1:
    printf("Domingo !!!");
    break;
    case 2:
    printf("Sengunda, vamos pra cima");
    break;
    case 3:
    printf("Terca, falta pouco");
    break;
    case 4:
    printf("Quarta, ta quase");
    break;
    case 5:
    printf("Quinta, oba");
    break;
    case 6:
    printf("sexta, sextou bebe");
    break;
    case 7:
    printf("Sabado, dia de bebe");
    }


    return 0;
}