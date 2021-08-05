#include <stdio.h>
#include <math.h>
int main() {

    float a, b, c, x1, x2, delta;
    printf("Coeficiente a: ");
    scanf("%f", &a);
    printf("Coeficiente b: ");
    scanf("%f", &b);
    printf("Coeficiente c: ");
    scanf("%f", &c);
    delta = (b * b) - 4 * a * c;
    if(delta < 0){
        printf("Essa equacao nao possui raizes reais\n");
    }else {
        x1 = (-b + sqrtf(delta))/ (2 * a);
        x2 = (-b - sqrtf(delta))/ (2 * a);
        printf("X1 =  %.4f\n", x1);
        printf("X2 = %.4f\n", x2);
    }

    return 0;
}
