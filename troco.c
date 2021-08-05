#include <stdio.h>

int main() {
    double precoUnitario, dinheiroRecebido, troco;
    int qtd;

    printf("Preco unitario do produto: ");
    scanf("%lf", &precoUnitario);
    printf("Quantidade comprada: ");
    scanf("%i", &qtd);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiroRecebido);
    troco = dinheiroRecebido - (precoUnitario * qtd);

    printf("Troco = %.2lf", troco);
    return 0;
}
