#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
	double num1,num2,raiz1,raiz2,pot1,pot2;
    cout<<"Digite o Primeiro e o Segundo Número: "<<endl;
    cin>>num1>>num2;
    pot2=pow(num2,2);
    raiz1=sqrt(num1);
    raiz2=sqrt(num2);
    pot1=pow(num1,2);
    (num1>num2)?((num1<0)? cout<<"Não É possível Realizar A Radiciação de "<<num1<<endl && cout<<"O Quadrado de "<<num2<<" É: "<<pot2<<endl :cout<<"A Raiz de "<<num1<<" É: "<<raiz1<<endl && cout<<"O Quadrado de "<<num2<<" É: "<<pot2<<endl) : cout<<""<<endl;
    (num2>num1)?((num2<0)? cout<<"Não É possível Realizar A Radiciação de "<<num2<<endl && cout<<"O Quadrado de "<<num1<<" É: "<<pot1<<endl :cout<<"A Raiz de "<<num2<<" É: "<<raiz2<<endl && cout<<"O Quadrado de "<<num1<<" É: "<<pot1<<endl) : cout<<""<<endl;
    (num1==num2)? cout<<"Os Dois Números Possuem o Mesmo Valor"<<endl &&(num1<0 && num2<0)? cout<<"Não É possível Realizar A Radiciação de Nenhum dos Números"<<endl && cout<<"O Quadrado de "<<num1<<" É: "<<pot1<<endl :cout<<""<<endl &&(num1>0 && num2>0)? cout<<"A Raiz de "<<num1<<" É: "<<raiz1<<endl && cout<<"O Quadrado de "<<num1<<" É: "<<pot1<<endl : cout<<"" :cout<<""<<endl;
    system("pause");
    return 0;
}
