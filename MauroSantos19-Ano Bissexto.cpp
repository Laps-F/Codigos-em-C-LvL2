#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#define pi 3.1415
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
    int ano;
	cout<<"Digite um N�mero que Represente um Ano"<<endl;
	cin>>ano;
    //(ano%4==0 && (ano%100!=0 || ano%400==0))? cout<<"O Ano "<<ano<<" � Bissexto"<<endl : cout<<"O Ano "<<ano<<" N�o � Bissexto"<<endl;
    if(ano%4==0 && (ano%100!=0 || ano%400==0)){
        cout<<"O Ano "<<ano<<" � Bissexto"<<endl;
    }
    else
        cout<<"O Ano "<<ano<<" N�o � Bissexto"<<endl;
    system("pause");
    return 0;
}
