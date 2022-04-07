#include <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini  Votuporanga \n");
    printf("Maressa dos Santos Gonçalves\n"); 

    int a1;
    int b1;

    int a2;
    int b2;

    printf("Digite a base do primeiro retangulo em cm: ");
    scanf("%d", &a1);
    printf("Digite a altura do primeiro retangulo em cm: ");
    scanf("%d", &b1);

    printf("Digite a base do segundo retangulo em cm: ");
    scanf("%d", &a2);
    printf("Digite a altura do segundo retangulo em cm: ");
    scanf("%d", &b2);

    double conta1 = a1*b1;
    double conta2 = a2*b2;

    printf("A area do primeiro retangulo: %.2f cm\n ",conta1);
    printf("A area do segundo retangulo: %.2f cm\n ", conta2);

    if (conta1==conta2){
        printf("Os dois retangulos tem a mesma area");
    }
    if(conta1>conta2){
        printf("A area do primeiro retangulo e maior");
    }
    if(conta1<conta2){
        printf("A area do segundo retangulo e maior");
    }
    
}