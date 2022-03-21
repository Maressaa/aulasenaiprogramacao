#include <stdio.h>

int main () {
    //cabeçalho
    printf("Escola Senai Euclides Facchini  Votuporanga \n");
    printf("Maressa dos Santos Gonçalves\n");

    int meninas;
    int meninos;
   
    printf("Quantas meninas tem na sua sala? ");
    scanf("%d", &meninas);
    printf("Quantos meninos tem na sua sala? ");
    scanf("%d", &meninos);
    printf("Sua sala tem %d alunas e %d alunos", meninas, meninos);
}