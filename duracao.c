#include <stdio.h>

int main() {

    int duracao, horas, min, segundos;

    printf("Digite a duracao em segundos: ");
    scanf("%i", &duracao);

    horas = duracao / 3600;
    min = (duracao % 3600)/60;
    segundos = (duracao % 3600) % 60;

    printf("%i : %i : %i", horas, min, segundos);

    return 0;
}
