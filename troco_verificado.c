#include <stdio.h>

int main() {

    int qtd;
    double precoUnit, dinheiroRecebido, troco;

    printf("Preco unitario do produto: ");
    scanf("%lf", &precoUnit);
    printf("Quantidade comprada: ");
    scanf("%i", &qtd);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiroRecebido);
    if(dinheiroRecebido > (qtd * precoUnit)){
        troco = dinheiroRecebido - (qtd * precoUnit);
        printf("TROCO = %.2lf\n", troco);
    }else {
        troco = (qtd * precoUnit) - dinheiroRecebido;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS\n", troco);
    }
    return 0;
}
