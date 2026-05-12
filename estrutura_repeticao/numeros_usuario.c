#include <stdio.h>

int main() {
int inicio = 0;
int fim = 0;
printf("digite um numero para o inicial maior ou igual a 0");
scanf("%i", &inicio); 

if (inicio < 0){ 
printf("Numero invalido, fim");
}else {
printf("Qual  numero final maior que %i", inicio);
scanf("%i", &fim); 

if (fim > inicio){ 
    // continuar roda o for
    for (int i=inicio; i <= fim; i++) {
}
} else {
    // numero final menor ou igual ao inicio
printf("Numeros invalidos, fim \n");
printf("Inicio %i, fim %i ", inicio, fim);
}
}

printf("digete um numero para o final");
scanf("%i", &fim);

for (int i= inicio; i <fim; i++) {
printf("\n numero %i", i);
}

return 0;
}