#include <stdio.h>

int main () {
    printf("Escola Senai Euclides Facchini  Votuporanga \n");
    printf("Maressa dos Santos Gonçalves\n");
    
    int a; 
    
    printf("digite um numero inteiro positivo: \n");
    scanf("%d", &a);
    printf("Os numeros impares menores que %d sao: ",a);

    for(int b = 1; b<a; b++) {
        if(b %2 !=0){
            printf("%d ",b);
        }
   
    }
}