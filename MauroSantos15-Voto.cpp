#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#define pi 3.1415
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
    int num1,num2,num3;
	cout<<"Digite o Ano Atual: "<<endl;
	cin>>num1;
	cout<<"Digite o Ano em Que Voc� Nasceu: "<<endl;
	cin>>num2;
	num3=num1-num2;
	(num3<16)? cout<<"Voc� N�o Pode Votar"<<endl :(num3>=16 && num3<18 || num3>70)? cout<<"Seu Voto � Facultativo"<<endl :(num3>=18 && num3<=70)? cout<<"Seu Voto � Obrigat�tio"<<endl: cout<<""<<endl;
    system("pause");
    return 0;
}
