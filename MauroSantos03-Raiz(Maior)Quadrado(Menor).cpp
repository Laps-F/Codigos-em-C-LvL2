#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
	double num1,num2,raiz1,raiz2,pot1,pot2;
    cout<<"Digite o Primeiro e o Segundo N�mero: "<<endl;
    cin>>num1>>num2;
    pot2=pow(num2,2);
    raiz1=sqrt(num1);
    raiz2=sqrt(num2);
    pot1=pow(num1,2);
    (num1>num2)?((num1<0)? cout<<"N�o � poss�vel Realizar A Radicia��o de "<<num1<<endl && cout<<"O Quadrado de "<<num2<<" �: "<<pot2<<endl :cout<<"A Raiz de "<<num1<<" �: "<<raiz1<<endl && cout<<"O Quadrado de "<<num2<<" �: "<<pot2<<endl) : cout<<""<<endl;
    (num2>num1)?((num2<0)? cout<<"N�o � poss�vel Realizar A Radicia��o de "<<num2<<endl && cout<<"O Quadrado de "<<num1<<" �: "<<pot1<<endl :cout<<"A Raiz de "<<num2<<" �: "<<raiz2<<endl && cout<<"O Quadrado de "<<num1<<" �: "<<pot1<<endl) : cout<<""<<endl;
    (num1==num2)? cout<<"Os Dois N�meros Possuem o Mesmo Valor"<<endl &&(num1<0 && num2<0)? cout<<"N�o � poss�vel Realizar A Radicia��o de Nenhum dos N�meros"<<endl && cout<<"O Quadrado de "<<num1<<" �: "<<pot1<<endl :cout<<""<<endl &&(num1>0 && num2>0)? cout<<"A Raiz de "<<num1<<" �: "<<raiz1<<endl && cout<<"O Quadrado de "<<num1<<" �: "<<pot1<<endl : cout<<"" :cout<<""<<endl;
    system("pause");
    return 0;
}
