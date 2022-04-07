 #include <stdio.h>

int main (){
    printf("Escola Senai Euclides Facchini  Votuporanga \n");
    printf("Maressa dos Santos Gonçalves\n"); 

   
    int bandeira;
    float valor1 = 1.80;
    float valor2 = 2.30;
    float km;
    int corrida = 3.50;
    float resultado;

    printf("ATENCAO: Taxa minima do taxi: 3,50\n");
    printf("Digite o numero da bandeira <1 ou 2>: ");
    scanf("%d", &bandeira);
   
    if(bandeira==1){
       
    printf("Digite a quilometragem rodada: ");
    scanf("%f", &km);

    printf ("A kilometragem rodada e de: %f\n", km);
    
    resultado = km * valor1;
    
    //printf("O valor da corrida e de: %.2f", resultado);
       
    }
      
    if(bandeira==2){
       
    printf("Digite a quilometragem rodada: ");
    scanf("%f", &km);

    printf ("A kilometragem rodada e de: %f\n", km);
    
    resultado = km * valor2;
    
    //printf("O valor da corrida e de: %.2f", resultado);
    }
    
    if(resultado<corrida){
        printf("O valor da corrida e de 3.50");
    }else{
        printf("O valor da corrida e de: %.2f", resultado);
        
    }
   
}