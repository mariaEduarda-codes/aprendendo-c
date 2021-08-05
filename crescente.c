#include <stdio.h>

int main() {
    int n1, n2;

   do {
       printf("Digite dois numeros: \n");
       scanf("%i", &n1);
       scanf("%i", &n2);
       if(n1 > n2){
           printf("DECRESCENTE!\n");
       }else if (n2 > n1){
           printf("CRESCENTE!\n");
       }
   } while (n1 != n2);

}
