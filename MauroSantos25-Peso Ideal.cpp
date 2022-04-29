#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main(){
    setlocale(LC_ALL,"");
    system("Color F0");
    float alt,result,peso;
    char sexo;
    cout<<"Considera M Para Sexo Maculino \nConsidere F Para Sexo Feminino"<<endl;
    cout<<"Digite Seu Sexo"<<endl;
    cin>>sexo;
    sexo=toupper(sexo);
    switch(sexo)
    {
        case'M':
            cout<<"Digite Sua Altura"<<endl;
            cin>>alt;
            cout<<"Digite Seu Peso"<<endl;
            cin>>peso;
            result=(72.7*alt) - 58;
            if(peso==result)
                cout<<"Você Está no Peso Ideal"<<endl;
            else
                cout<<"Você Não Está no Peso Ideal"<<endl;
        system("pause");
        return 0;


        case 'F':
            cout<<"Digite Sua Altura"<<endl;
            cin>>alt;
            cout<<"Digite Seu peso"<<endl;
            cin>>peso;
            result=(62,1*alt) - 44.7;
            if(peso==result)
                cout<<"Você Está no Peso Ideal"<<endl;
            else
                cout<<"Você Não Está no Peso Ideal"<<endl;
        system("pause");
        return 0;
    }

    system("pause");
    return 0;
}
