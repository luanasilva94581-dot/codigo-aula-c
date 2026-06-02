#include <stdio.h>

void calcularHoras(int horasPorDia, int diasPorMes)
{
    int meses = 5;
    int totalHoras;

    totalHoras = horasPorDia * diasPorMes * meses;

    printf("Total de horas do curso: %d\n", totalHoras);
}

int main()
{
    calcularHoras(4, 20); // 4 horas por dia e 20 dias por mês

    return 0;
}