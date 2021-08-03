#include <stdio.h>

int main() {
    float largura, comprimento, metroQuadrado, area, preco;
    
    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);
    
    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);
    
    printf("Digite o valor do metro quadrado: ");
    scanf("%f", &metroQuadrado);
    
    area = largura * comprimento;
    preco = area * metroQuadrado;
    
    printf("Area do terreno = %.2f", area);
    printf("Preco do terreno = %.2f", preco);

    return 0;
}
