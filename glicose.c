#include <stdio.h>

int main() {

    double medida;
    printf("Digite a medida da glicose: ");
    scanf("%lf", &medida);
    if(medida <= 100){
        printf("Classificacao: normal\n");
    } else if(medida > 100 && medida <= 140){
        printf("Classificacao: elevada\n");
    } else {
        printf("Classificacao: diabetes\n");
    }
    return 0;
}
