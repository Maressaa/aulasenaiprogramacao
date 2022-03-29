#include <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini  Votuporanga \n");
    printf("Maressa dos Santos Gonçalves\n");

    int a;
    int b;

    printf("Voce devera digitar dois numeros inteiros diferentes\n");
    printf("digite o primeiro numero: ");
    scanf("%d", &a);
    printf("digite o segundo numero: ");
    scanf("%d", &b);

    int c = a-b;

    printf("a diferenca do maior pelo menor numero e : %d",c);
    
}