 #include <stdio.h>

int main () {
  int nota = 0;

  printf("Voce tirou quanto na prova?");
  scanf("%i", &nota);
 
   if (nota > 6.9) {
 printf("Voce esta aprovado com nota %.2f", nota);
  } else {
    printf("Voce esta reprovado com nota %.2f", nota);
  }

    return 0;
}