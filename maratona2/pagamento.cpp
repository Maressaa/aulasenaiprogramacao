#include <bits/stdc++.h>

using namespace std;

int main(){
    string nome;
    float valorhora, pagamento;
    int horastrabalhadas;

    cout<<"Nome: ";
   cin>>nome;
   cout<<"Valor por hora: ";
   cin>>valorhora;
   cout<<"Horas trabalhadas: ";
   cout<<horastrabalhadas;
   
   pagamento = valorhora * horastrabalhadas;
   
    cout<<fixed<<setprecision(2);
   cout<<"O pagamento para "<< nome<< " deve ser "<< pagamento;

}