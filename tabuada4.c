#include <stdio.h>

int main () {
    printf("Escola Senai Euclides Facchini  Votuporanga \n");
    printf("Maressa dos Santos Gonçalves\n");

    int i =5;

   
    for (int multiplicador = 1; multiplicador<=10;multiplicador++){
        int t = (i*multiplicador);
        printf("%d x %d = %d\n", i, multiplicador, t);
    }
}
