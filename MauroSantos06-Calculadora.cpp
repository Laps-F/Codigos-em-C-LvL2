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
	cout<<"Considere '+' para Soma! \nConsidere '-' para Subtra��o! \nConsidere '*' para Multiplica��o! \nConsidere '/' para Divis�o!"<<endl;
	cin>>opcao;
	switch(opcao)
	{
        case '+':
        cout<<"Digite os Dois N�meros: "<<endl;
        cin>>num1>>num2;
        num3=num1+num2;
        cout<<"O Resultado � "<<num3<<endl;
    break;
        case '-':
        cout<<"Digite os Dois N�meros: "<<endl;
        cin>>num1>>num2;
        num3=num1-num2;
        cout<<"O Resultado � "<<num3<<endl;
    break;
        case '*':
        cout<<"Digite os Dois N�meros: "<<endl;
        cin>>num1>>num2;
        num3=num1*num2;
        cout<<"O Resultado � "<<num3<<endl;
    break;
        case '/':
        cout<<"Digite os Dois N�meros: "<<endl;
        cin>>num1>>num2;
        if(num2<0)
        {
            cout<<"N�o � Poss�vel Realizar esta Opera��o"<<endl;
        }
        else
        num3=num1/num2;
        cout<<"O Resultado � "<<num3<<endl;
    break;
        default:
            cout<<"Opera��o �nvalida"<<endl;
    break;
	}
    system("pause");
    return 0;
}
