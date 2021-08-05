#include <stdio.h>

int main() {

    int qtdMinutos, minutosAdicionais;
    float valorAPagar;

    printf("Digite a quantidade de minutos: ");
    scanf("%i", &qtdMinutos);
    if(qtdMinutos <= 100){
        valorAPagar = (float)50.0;
    } else {
        minutosAdicionais = qtdMinutos - 100;
        valorAPagar = (float)50.0 + ((float)minutosAdicionais * 2);
    }
    printf("Valor a pagar: R$ %.2f", valorAPagar);
    return 0;
}
