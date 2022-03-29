#include <stdio.h>

int main () {
    printf("Escola Senai Euclides Facchini  Votuporanga \n");
    printf("Maressa dos Santos Gonçalves\n");
    
    int a;
    int b;
    double soma =0;

     printf("De quantos numeros voce quer saber a media: ");
     scanf("%d", &a);

     for (int i=1; i<=a; i++){
        printf("digite um dos numeros: ");
        scanf("%d", &b);
        soma= soma +b;
     }
    
     double media =soma /a;
    
    printf("A media dos numeros e: %.1f", media);
}