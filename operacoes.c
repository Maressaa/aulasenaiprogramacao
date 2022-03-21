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
    
    int soma= a+b;
    int sub=a-b;
    int mult=a*b;
    int div=a/b;
    double media= (a+b)/2.0;

    printf("A soma de %d + %d = %d\n", a, b, soma);
    printf("A subtracao de %d - %d = %d\n ", a, b, sub);
    printf("O produto de %d  x %d = %d\n", a, b, mult);
    printf("A divisao de %d : %d = %d\n", a, b, div);
    printf("A media entre %d e %d = %.2f", a, b, media);
  
}