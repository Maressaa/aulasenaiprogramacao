#include <stdio.h>

int main (){
    printf("Escola Senai Euclides Facchini  Votuporanga \n");
    printf("Maressa dos Santos Gonçalves\n"); 

   
    int bandeira;
    double valor1 = 1.80;
    double valor2 = 2.30;
    int km;



    printf("Digite o numero da bandeira <1 ou 2>: ");
    scanf("%d", &bandeira);
   

    if(bandeira==1){
       
         printf("Digite a quilometragem rodada: ");
    scanf("%d", &km);

    printf ("A kilometragem rodada e de: %d\n", km);
    double resultado = km * valor1;
    printf("O valor da corrida é de: %.2f", resultado);
       
    }
   
    
    if(bandeira==2){
       
         printf("Digite a quilometragem rodada: ");
    scanf("%d", &km);

    printf ("A kilometragem rodada e de: %d\n", km);
    double resultado = km * valor2;
    printf("O valor da corrida é de: %.2f", resultado);
    }

}