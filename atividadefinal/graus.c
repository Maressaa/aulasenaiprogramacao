#include <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini  Votuporanga \n");
    printf("Maressa dos Santos Gonçalves\n"); 

    float c , f;
   

    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &c);

     f = (c*1.8 + 32);

    printf("A temperatura em fahrenheit e: %.1f",f);
}