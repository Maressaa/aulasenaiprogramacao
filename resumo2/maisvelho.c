#include <stdio.h>

int main (){
    printf("Escola Senai Euclides Facchini  Votuporanga \n");
    printf("Maressa dos Santos Gonçalves\n");

    int pedro;
    int joana;
    int ismael;

    printf("Digite sua idade: ");
    scanf("%d", &pedro);
    printf("Digite sua idade: ");
    scanf("%d", &joana);
    printf("Digite sua idade: ");
    scanf("%d", &ismael);

    if(pedro>joana && pedro> ismael){
        printf("Pedro e o mais velho");
    }
    if(joana>pedro && joana>ismael){
        printf("joana e a mais velha");    
    }
    if(ismael>pedro && ismael>joana){
        printf("ismael e o mais velho");
    }
}