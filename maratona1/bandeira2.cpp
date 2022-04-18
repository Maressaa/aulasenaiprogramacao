#include <bits/stdc++.h>

using namespace std;

int main (){
    int bandeira, km;
    double valor1 = 1.80, valor2 = 2.30;
     
    cout<<"Digite o numero da bandeira <1 ou 2>: ";
    cin>>bandeira;
   

    if(bandeira==1){
       
        cout<<"Digite a quilometragem rodada: ";
        cin>>km;

        cout<<"A kilometragem rodada e de: "<< km;
        double resultado = km * valor1;
        cout<<"O valor da corrida é de: "<< resultado;
       
    }
   
    
    if(bandeira==2){
       
        cout<<"Digite a quilometragem rodada: ";
        cin>>km;

        cout<<"A kilometragem rodada e de: "<< km;
        double resultado = km * valor2;
        cout<<"O valor da corrida é de: "<< resultado;
    }

}