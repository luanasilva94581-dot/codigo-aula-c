#include <stdio.h>

int main ()
{
float notas[4];


printf("Qual a primeira nota?");
scanf("%f", &notas [0]);

printf("Qual a segunda nota?");
scanf("%f", &notas [1]);

printf("Qual a terceira nota?");
scanf("%f", &notas [2]);

printf("Qual a quarta nota?");
scanf("%f", &notas [3]);

int media = ( notas [0] + notas [1] + notas [2] + notas [3]) / 2;

printf("A media e %d", media);


return 0;
}