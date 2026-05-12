#include <stdio.h> 

int main() {
float peso = 68;
float altura = 1.67;

printf("Ola vamos calcular o IMC \n");

float resultado = peso / (altura * altura);

printf("O IMC e %7", resultado);

return 0;
}



if (resultado < 18.5) {
printf("Classificacao: Abaixo do peso, IMC %.2f", resultado);
} else if (resultado >= 18.5 && resultado < 24.9){
printf("\nClassificacao: Peso normal, IMC %.2f", resultado);
} else if (resultado >= 25.0 && resultado < 29.9) {
printf("\nClassificado sobrepeso, IMC %.2f", resultado);
}else if (resultado >= 30.0 && resultado < 34.9){
printf("\nClassificacao: Obesidade grau 1, IMC %.2f", resultado);{
    else if (resultado >= 35.0 && resultado < 39.0)
}
    printf("\nCLassificacao: Sobrepeso, IMC %.2f", resultado);
} else if (resultado >= 35.0 && resultado < 39.0){
    printf("\nClassificacao: Obesidade grau 2, IMC %.2f", resultado);
}else { 
    printf("\nClassificacao: Obesidade grau 3 (morbida), IMC %.2f", resultado);

    return 0;
}

