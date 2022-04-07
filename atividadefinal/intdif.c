#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

    int a;
    int b;
    int c;

void crescente(){

    if (a > c) {
        int tmp = c;
        c = a;
        a = tmp;
    }
    if (a > b) {
        int tmp = b;
        b = a;
        a = tmp;
    }
    if (b > c) {
        int tmp = c;
        c = b;
        b = tmp;
    }
    printf("%d %d %d", a, b, c);
}


int main(){
    
    printf("Escola Senai Euclides Facchini  Votuporanga \n");
    printf("Maressa dos Santos Gonçalves\n"); 


    printf("Digite tres numeros diferentes: \n\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    printf("Na ordem crescente os numero sao: ");

    crescente();

}