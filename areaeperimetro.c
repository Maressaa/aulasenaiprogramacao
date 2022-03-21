#include <stdio.h>

int main () {
    printf("Escola Senai Euclides Facchini  Votuporanga \n");
    printf("Maressa dos Santos Gonçalves\n");

    int lado;
   

    printf("DIgite o lado do quadrado em cm: \n");
    scanf("%d", &lado);
    
    int area = lado*lado;
    int perimetro = lado*4;

    printf("A area do quadrado e: %d\n", area);
    printf("O perimetro do quadrado e: %d", perimetro);


    
    }