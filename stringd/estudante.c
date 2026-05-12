#include <stdio.h>
#include <locale.h>

int main () 
{
setlocale(LC_ALL, "pt_BR.UTF-8");

char nome_completo[40];
char idade[4];
char escola[50];
char numero_escolar[5];
char ano_escolar[6];
char Senai_endereço[40];
char cursoSenai[50];

printf("---Dados dos estudantes---");

printf("\nQual seu nome completo?");
scanf(" %[^\n]", nome_completo);

printf("\nQual sua idade?");
scanf(" %[^\n]", idade);

printf("\nQual escola você estuda?");
scanf(" %[^\n]", escola);

printf("\nQual o numero da escola?");
scanf(" %[^\n]", numero_escolar);

printf("\nQual ano você está na escola?");
scanf(" %[^\n]",ano_escolar);

printf("\nQual senai você estuda?");
scanf(" %[^\n]", Senai_endereço);

printf("\nQual curso você faz no senai?");
scanf(" %[^\n]", cursoSenai);

printf("\n--Suas informações acadêmicas são--");
printf("\nnomecompleto: %s", nome_completo);
printf("\nidade: %s", idade);
printf("\nescola: %s", escola);
printf("\nnumero_escolar: %s", numero_escolar);
printf("\nano_escolar: %s", ano_escolar);
printf("\nSenai_endereço: %s", Senai_endereço);
printf("\ncursoSenai: %s", cursoSenai);


return 0;
}