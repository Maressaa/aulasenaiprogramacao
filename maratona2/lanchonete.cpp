#include <bits/stdc++.h>

using namespace std;

int main(){
    int codigo, quantidade;
    float valorpago;

    cout<<"Codigo do produto comprado: ";
    cin>>codigo;
    cout<<"Quantidade comprada: ";
    cin>>quantidade;
   
    switch (codigo) {
    case  1:
        valorpago = 5.0 * quantidade;
        break;
    case  2:
        valorpago = 3.5 * quantidade;
        break;
    case 3:
        valorpago = 4.8 * quantidade;
    case 4:
        valorpago = 8.9 * quantidade;
        break;
    case 5:
        valorpago = 7.32 * quantidade;
    }
    
    cout<<fixed<<setprecision(2);
    cout<<"Valor a pagar: R$ "<< valorpago;


}
