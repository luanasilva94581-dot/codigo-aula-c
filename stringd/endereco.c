#include <stdio.h>
#include <locale.h>

int main ()
{
setlocale(LC_ALL, "pt_BR.UTF-8");

char nome[10] = "luna";
char logradouro[30] = "Avenida Laranjal Paulista";
char bairro[10] = "Campestre";
char cidade[11] = "Piracicaba";
char uf[3] = "SP";

printf("---Minhas informações residenciais---");
printf("\nnome: %s", nome);
printf("\nLogradouro: %s", logradouro);
printf("\nBairro: %s", bairro);
printf("\nCidade: %s", cidade);
printf("\nUF: %s", uf);



return 0;
}