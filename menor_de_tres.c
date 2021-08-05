#include <stdio.h>

int main() {

    int v1, v2, v3, menor;
    printf("Primeiro valor: ");
    scanf("%i", &v1);
    printf("Segundo valor: ");
    scanf("%i", &v2);
    printf("Terceiro valor: ");
    scanf("%i", &v3);
    if(v1 < v2 && v1 < v3){
        menor = v1;
    } else if(v2 < v1 && v2 < v3){
        menor = v2;
    } else {
        menor = v3;
    }
    printf("MENOR = %i", menor);

    return 0;
}
