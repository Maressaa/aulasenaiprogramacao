#include <stdio.h>

int main () {
    printf("Escola Senai Euclides Facchini  Votuporanga \n");
    printf("Maressa dos Santos Gonçalves\n");

    int idade1;
    int idade2;

    printf("Digite a idade de Pedro: ");
    scanf("%d", &idade1);
    printf("Digite a idade de Joana: ");
    scanf("%d", &idade2);

    int e = 1;

    if (idade1 < idade2) {
        printf("Joana e a mais velha");
        
    }
    else if (idade1 > idade2){
        printf("Pedro e o mais velho");


    }
    else{
        e = 0;
        printf("Eles tem a mesma idade");
    }
     
   
}