#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main(){
    setlocale(LC_ALL,"");
    system("Color F0");
    float lar,alt;
    cout<<"Digite A Altura do Retângulo"<<endl;
    cin>>alt;
    cout<<"Digite A Largura do Retângulo"<<endl;
    cin>>lar;
    if(alt>lar){
        if((alt/lar)<=1.6181 && (alt/lar)>=1.6180)
            cout<<"Esse É um Retângulo de Ouro"<<endl;

        else
            cout<<"Esse Não É um Retângulo de Ouro "<<endl;
    }
    if(lar>alt){
        if((lar/alt)<=1.6181 && (lar/alt)>=1.6180)
            cout<<"Esse É um Retângulo de Ouro"<<endl;

        else
            cout<<"Esse Não É um Retângulo de Ouro "<<endl;
    }
    system("pause");
    return 0;
}

