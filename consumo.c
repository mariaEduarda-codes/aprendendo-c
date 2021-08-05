#include <stdio.h>

int main() {

    int distancia;
    double combustivelGasto, consumo;

    printf("Distancia percorrida: ");
    scanf("%i", &distancia);
    printf("Combustivel gasto: ");
    scanf("%lf", &combustivelGasto);
    consumo = distancia / combustivelGasto;
    printf("Consumo medio = %.3lf", consumo);

    return 0;
}
