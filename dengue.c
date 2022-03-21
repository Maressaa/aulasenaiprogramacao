#include <stdio.h>

int main () {
    printf("Escola Senai Euclides Facchini  Votuporanga \n");
    printf("Maressa dos Santos Gonçalves\n");

    int suspeitos;
    int confirmados;
    int mortes;
   

    printf("Quantos casos suspeitos: \n");
    scanf("%d", &suspeitos);
    printf("Quantos casos confirmados: \n");
    scanf("%d", &confirmados);
    printf("Quantas mortes: \n");
    scanf("%d", &mortes);

     int total = (suspeitos+mortes+confirmados);
     
    printf("INFORMAÇOES SOBRE A DENGUE EM VOTUPORANGA\n");

    printf("casos suspeitos: %d\n", suspeitos);
    printf("casos confirmados: %d\n", confirmados);
    printf("Quantas mortes: %d\n ", mortes);
    
    printf("Total de dados: %d", total);
}