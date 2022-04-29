#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
    int idade;
	cout<<"Digite A Sua Idade: "<<endl;
	cin>>idade;
	(idade<5)? cout<<"Não Possui Categoria"<<endl :(idade>5 && idade<=7)? cout<<"Faz Parte da Categoria Infantil"<<endl :(idade>7 && idade<=10)? cout<<"Faz Parte da Categoria Juvenil"<<endl :(idade>10 && idade<=15)? cout<<"Faz Parte da Categoria Adolescente"<<endl :(idade>15 && idade<=40)? cout<<"Faz Parte da Categoria Adulto"<<endl :(idade>40)? cout<<"Faz Parte da Categoria Sênior"<<endl : cout<<""<<endl;
	system("pause");
    return 0;
}
