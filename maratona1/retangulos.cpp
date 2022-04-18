#include <bits/stdc++.h>

using namespace std;

int b1, a1, b2, a2;
float area1, area2;

int main(){
    cout<<"Digite a base do primeiro retangulo:";
    cin>>b1;
    cout<<"Digite a altura do primeiro retangulo:";
    cin>>a1;
    area1 = b1*a1;

    cout<<"Digite a base do segundo retangulo:";
    cin>>b2;
    cout<<"Digite a altura do segundo retangulo:";
    cin>>a2;
    area2 = b2*a2;

    cout<<"A area do primeiro retangulo e : "<<area1<<endl;
    cout<<"A area do segundo retangulo e : "<<area2<<endl;

    if(area1>area2){
        cout<<"A area do primeiro retangulo e maior.";
    }
    else{
         cout<<"A area do segundo retangulo e maior.";
    }
}