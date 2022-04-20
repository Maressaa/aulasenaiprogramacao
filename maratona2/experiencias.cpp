#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i, qte, totalcobaias, totalsapos, totalcoelhos, totalratos;
    float pratos, psapos, pcoelhos;
    char tipocobaia;

    totalratos = 0;
    totalcoelhos = 0;
    totalsapos = 0;

    cout<<"Quantos casos de teste serao digitados? ";
    cin>>n;
   
    for (i=1; i <= n; i++){
   
        cout<<"Quantidade de cobaias: ";
        cin>>qte;
        cout<<"Tipo de cobaia: ";
        cin>>tipocobaia;
      
        if(tipocobaia == "R") {
         totalratos = totalratos + qte;
        }
        else{
        if( tipocobaia == "S") {
            totalsapos = totalsapos + qte;
        }
        else{
            totalcoelhos = totalcoelhos + qte;
        
        }
    }
    }
   
   totalcobaias = totalratos + totalsapos + totalcoelhos;
   
   pcoelhos = totalcoelhos / totalcobaias * 100;
   pratos = totalratos / totalcobaias * 100;
   psapos = totalsapos / totalcobaias * 100;
   

   cout<<"RELATORIO FINAL:";
   cout<<"Total: "<< totalcobaias<< " cobaias";
   cout<<"Total de coelhos: "<< totalcoelhos;
   cout<<"Total de ratos: "<< totalratos;
   cout<<"Total de sapos: "<< totalsapos;
   cout<<"Percentual de coelhos: "<< pcoelhos;
   cout<<"Percentual de ratos: "<< pratos;
   cout<<"Percentual de sapos: "<< psapos;

}