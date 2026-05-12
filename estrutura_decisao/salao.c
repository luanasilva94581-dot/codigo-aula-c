#include <stdio.h>

int main(){
float ValorCorteDeCabelo = 120;
float ValorSombrancelha = 80;
float ValordasLuzesNoCabelo = 250;
float PromocaoDiaDasMulheres8 = 0.08;

float total = ValorSombrancelha + ValordasLuzesNoCabelo + ValorCorteDeCabelo;
float desconto = total * PromocaoDiaDasMulheres8;
float totalPagar = total - desconto;

printf("O total e %.2f \n", total);
printf("O desconto foi de R$ %.2f \n", desconto);
printf("total a ser pago e R$ %.2f \n", totalPagar);

    return 0;
}