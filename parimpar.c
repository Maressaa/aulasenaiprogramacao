#include <stdio.h>

int main () {
    printf("Escola Senai Euclides Facchini  Votuporanga \n");
    printf("Maressa dos Santos Gonçalves\n");

    int a;
    int b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
  
    for (int i = a; i<=b;i++){
        if(i % 2==0) {
            printf("O par e :%d\n", i);
        }
    }
}
