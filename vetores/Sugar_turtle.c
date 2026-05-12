#include <stdio.h>

int main ()
{
char doces[5] [40]= {
"Cupcakes", "Brownies", "Donuts", "Cookies", "Waffles"
}

printf("\nOla, sou lua a assistente virtual da 'Sugar Turtle'");
printf("Caso queira o cardapio aqui esta ele The Sugar Turtle Menu");

printf("----Menu sugar Turtle----");
for (int i = 0; i < 4; i++);
{
printf("\n %s", doces[i]);
printf("Qual dos doces voce gostaria de provar hoje?")
}

return 0;
}
