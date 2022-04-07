#include <stdio.h>

int main (){
    printf("Escola Senai Euclides Facchini  Votuporanga \n");
    printf("Maressa dos Santos Gonçalves\n"); 

    int a;
    float nota, notamaior= 0, notamenor = 10;
    double soma = 0;

     printf("De quantos numeros voce quer saber a media: ");
     scanf("%d", &a);

     for (int i = 1; i <= a; i++){
        printf("digite um dos numeros: \n");
        scanf("%f", &nota);
        soma = soma + nota;
        
        if(nota > notamaior){
            notamaior = nota;

        }
        if (nota < notamenor){
            notamenor = nota;
        }
     }
    
     double media =soma /a;
    printf("A soma das notas: %.1f\n", soma);
    printf("A media das notas: %.1f\n", media);
    printf("Menor nota: %.1f \n", notamaior);
    printf("Maior nota: %.1f \n", notamenor);

}


