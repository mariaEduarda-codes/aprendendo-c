#include <stdio.h>

int main() {

    float a, b, c;
    double areaQ, areaTri, areaTrap;

    printf("Digite a medida A: ");
    scanf("%f", &a);
    printf("Digite a medida B: ");
    scanf("%f", &b);
    printf("Digite a medida C: ");
    scanf("%f", &c);

    areaQ = a * a;
    areaTri = (a * b)/2;
    areaTrap = ((a + b) * c)/2;

    printf("AREA DO QUADRADO = %.4lf\n", areaQ);
    printf("AREA DO TRIANGULO = %.4lf\n", areaTri);
    printf("AREA DO TRAPEZIO = %.4lf\n", areaTrap);

    return 0;
}
