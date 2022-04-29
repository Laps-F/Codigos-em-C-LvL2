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
	cout<<"Digite o Ano em Que Você Nasceu: "<<endl;
	cin>>num2;
	num3=num1-num2;
	(num3<16)? cout<<"Você Não Pode Votar"<<endl :(num3>=16 && num3<18 || num3>70)? cout<<"Seu Voto É Facultativo"<<endl :(num3>=18 && num3<=70)? cout<<"Seu Voto É Obrigatótio"<<endl: cout<<""<<endl;
    system("pause");
    return 0;
}
