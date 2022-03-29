#include <stdio.h>

int main(){
    printf("Escola Senai Euclides Facchini  Votuporanga \n");
    printf("Maressa dos Santos Gonçalves\n");
    
    int alunos;
    int alunas;

    printf("digite a quantidade de alunos: ");
    scanf("%d", &alunos);
    printf("digite a quantidade de alunas: ");
    scanf("%d", &alunas);

        if(alunos>alunas) {
            printf("Existem mais alunos do que alunas");
        }else{
            printf("Existem mais alunas do que alunos");
        }
}