#include <bits/stdc++.h>

using namespace std;

int main(){
    int minutos;
    float valorpago;

    cout<<"Digite a quantidade de minutos: ";
   cin>>minutos;
   
   valorpago = 50.0;
   if (minutos > 100) {
      valorpago = valorpago + 2 * (minutos - 100);
   }
   
    cout<<fixed<<setprecision(2);
   cout<<"Valor a pagar: R$ "<<valorpago;

}