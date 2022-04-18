#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

  int bandeira;
  float km, valor;
  float taxaminima = 3.50;

cout<<"Digite o numero da bandeira <1 ou 2>";
cin >> bandeira;

cout<<("Digite a kilometragem rodada: ");
cin >> km;

if (bandeira == 1){
    valor = 1.80;
}
    else{
        valor = 2.30;
    }
    float preco = km * valor;

    if(preco > taxaminima){
        cout <<"Valor da corrida " << preco;
    }else {
        cout <<"O valor da corrida: " << taxaminima;
    }

}
