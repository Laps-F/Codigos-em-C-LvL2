#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
    float peso,alt,IMC;
	cout<<"Digite sua Peso: "<<endl;
	cin>>peso;
	cout<<"Digite Sua Altura: "<<endl;
	cin>>alt;
	IMC=peso/(pow(alt,2));
    (IMC<=18.5)? cout<<"IMC="<<IMC<<endl && cout<<"Você está Abaixo do Peso"<<endl :(IMC>18.5 && IMC<=25)? cout<<"IMC="<<IMC<<endl && cout<<"Você está com Peso Normal"<<endl :(IMC>25 && IMC<=30)? cout<<"IMC="<<IMC<<endl && cout<<"Você está Acima do Peso"<<endl :(IMC>30)? cout<<"IMC="<<IMC<<endl && cout<<"Você está Obeso"<<endl : cout<<""<<endl;
    system("pause");
    return 0;
}
