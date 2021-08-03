#include <stdio.h>
#include <math.h>

int main() {
    float base, altura, perimetro, diagonal, area;
    printf("Base do retangulo: ");
    scanf("%f", &base);

    printf("Altura do retangulo: ");
    scanf("%f", &altura);

    area = base * altura;
    perimetro = (base * 2) + (altura * 2);
    diagonal = sqrtf((base * base) + (altura * altura));

    printf("AREA = %.4f\n", area);
    printf("PERIMETRO = %.4f\n", perimetro);
    printf("DIAGONAL = %.4f\n", diagonal);

    return 0;
}
