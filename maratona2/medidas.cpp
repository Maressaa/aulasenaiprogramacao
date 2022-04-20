#include <bits/stdc++.h>

using namespace std;

int main(){
    float a, b, c, areaquadrado, areatriangulo, areatrapezio;

    cout<<"Digite a medida A: ";
    cin>>a;
    cout<<"Digite a medida B: ";
    cin>>b;
    cout<<"Digite a medida C: ";
    cin>>c;

    areaquadrado = a * a;
    areatriangulo = (a * b) / 2;
    areatrapezio = (a + b) / 2 * c;

    cout<<"QUADRADO = "<< areaquadrado<<endl;
    cout<<"TRIANGULO = "<< areatriangulo<<endl;
    cout<<"TRAPEZIO = "<< areatrapezio<<endl;
    

}