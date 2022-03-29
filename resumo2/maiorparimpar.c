#include <stdio.h>

int main () {
    printf("Escola Senai Euclides Facchini  Votuporanga \n");
    printf("Maressa dos Santos Gonçalves\n");

    int a;
    int b;

    printf("digite um numero inteiro: ");
    scanf("%d", &a);
    printf("digite outro numero inteiro: ");
    scanf("%d", &b);

    if(a > b && a %2 ==0){
        printf("O primeiro numero e maior que o segundo e par\n ");
    }
    if (a>b && a %2 != 0){
        printf("O primeiro numero e maior que o segundo e impar\n ");
    }
   if(a<b && b %2 ==0){
        printf("O segundo numero e maior que o primeiro e par\n "); 
   }
   if(a<b && b %2 != 0){
      printf("O segundo numero e maior que o primeiro e impar\n "); 
   } 
}
   

