#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
    float num1,num2,num3;
    char opcao;
	cout<<"Considere '+' para Soma! \nConsidere '-' para Subtração! \nConsidere '*' para Multiplicação! \nConsidere '/' para Divisão!"<<endl;
	cin>>opcao;
	switch(opcao)
	{
        case '+':
        cout<<"Digite os Dois Números: "<<endl;
        cin>>num1>>num2;
        num3=num1+num2;
        cout<<"O Resultado É "<<num3<<endl;
    break;
        case '-':
        cout<<"Digite os Dois Números: "<<endl;
        cin>>num1>>num2;
        num3=num1-num2;
        cout<<"O Resultado É "<<num3<<endl;
    break;
        case '*':
        cout<<"Digite os Dois Números: "<<endl;
        cin>>num1>>num2;
        num3=num1*num2;
        cout<<"O Resultado É "<<num3<<endl;
    break;
        case '/':
        cout<<"Digite os Dois Números: "<<endl;
        cin>>num1>>num2;
        if(num2<0)
        {
            cout<<"Não É Possível Realizar esta Operação"<<endl;
        }
        else
        num3=num1/num2;
        cout<<"O Resultado É "<<num3<<endl;
    break;
        default:
            cout<<"Operação Ínvalida"<<endl;
    break;
	}
    system("pause");
    return 0;
}
