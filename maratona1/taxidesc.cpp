#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() { 
 
    double bb1 = 1.80;
    double bb2 = 2.30;
    int escolhebandeira;
    float kmrodado;
    double taxmin = 3.50;
    int ler;

    cout<<("ATENCAO: TAXA MINIMA DE TAXI = %.2f\n", taxmin);

    cout<<("Digite o numero da bandeira <1 ou 2>: ");
    cin>>escolhebandeira;

     if(escolhebandeira == 1){
        cout<<"Digite a kilometragem rodada: ";
        cin>>kmrodado;

        if(kmrodado < 1){
            cout<<"O valor da corrida é: "<< taxmin;
        }

        if(kmrodado > 1){
            float mult = (bb1 * kmrodado);
            cout<<"O taxi oferece desconto de 30%% ? < 1 - Sim / 2 - Nao >";
            cin>>ler;

            if(ler == 1){
                float multidesconto =  (mult * 70) / 100;
                cout<<"O valor da corrida com desconto eh: "<< multidesconto;
            }

            if(ler == 2){
                cout<<"O valor da corrida  sem desconto eh: " << mult;
            }

        }
    }

    if(escolhebandeira == 2){
        cout<<"Digite a kilometragem rodada: ";
        cin>>kmrodado;

        if(kmrodado < 1){
            cout<<("O valor da corrida é: %.2f", taxmin);
        }

        if(kmrodado > 1){
            float mult = (bb2 * kmrodado);
            cout<<"O taxi oferece desconto de 30%% ? < 1 - Sim / 2 - Nao >";
            cin>>ler;

            if(ler == 1){
                float multidesconto =  (mult * 70) / 100;
                cout<<"O valor da corrida com desconto eh: " << multidesconto;
            }

            if(ler == 2){
                cout<<"O valor da corrida  sem desconto eh: " << mult;
            }

        }
    }

}