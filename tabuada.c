#include <stdio.h>

int main() {
    printf("Deseja a tabuada para qual valor? \n");
    int n;
    scanf("%i", &n);
    for (int i = 1; i < 11; ++i) {
        printf("%i x %i = %i\n", n, i, n*i);
    }
    return 0;
}
