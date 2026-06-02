#include <stdio.h>

int main() {

    float placaVideo = 139.90;
    float caixaSom = 99.90;
    float kitMouseTeclado = 149.90;
    float monitor = 679.90;

    float total = 0;
    float desconto = 0;
    float valorVista = 0;
    float parcela = 0;
    float valorpPessoa = 0;

    total = placaVideo + caixaSom + kitMouseTeclado + monitor;

    desconto = total * 0.15;
    valorVista = total - desconto;

    parcela = total / 12;

valorpPessoa = total / 5;

printf("\n---- ORCAMENTO DO COMPUTADOR ----");
printf("\nPlaca de video R$ %.2f", placaVideo);
printf("\nCaixa de som R$ %.2f", caixaSom);
printf("\nKit mouse e teclado R$ %.2f", kitMouseTeclado);
printf("\nMonitor 21 polegadas R$ %.2f", monitor);

printf("\nValor total R$ %.2f", total);

printf("\n---- Pagamento a vista-----");
printf("\nDesconto 0.15 R$ %.2f", desconto);
printf("\nValor final R$ %.2f", valorVista);

printf("\n----Pagamento parcelado---");
printf("\n12 parcelas R$ %.2f", parcela);

printf("\n---- Dividi em 5 pessoas----");
printf("Valor por pessoas R$ %.2f", valorpPessoa);

return 0;
}