#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
	float cod,qp,pt,pu,pf,desc;
	cout<<"Digite o C�digo do Produto"<<endl;
	cin>>cod;
	if(cod<1 || cod>40)
    {
        cout<<"Esse Produto N�o Existe"<<endl;
        system("pause");
        return 0;
    }
    else if(cod>=1 && cod<=10)
    {
        pu=10;
        cout<<"O Valor Unit�rio do Produto �: R$10.00"<<endl;
    }
    else if(cod>=11 && cod<=20)
    {
        pu=20;
        cout<<"O Valor Unit�rio do Produto �: R$20.00"<<endl;
    }
    else if(cod>=21 && cod<=30)
    {
        pu=30;
        cout<<"O Valor Unit�rio do Produto �: R$30.00"<<endl;
    }
    else if(cod>=31 && cod<=40)
    {
        pu=40;
        cout<<"O Valor Unit�rio do Produto �: R$40.00"<<endl;
    }
	cout<<"Digite A Quantidade de Produtos Comprada"<<endl;
	cin>>qp;
    pt=qp*pu;
    cout<<"O Pre�o Total A Se Pagar �: R$"<<pt<<endl;
    if(pt<=250)
    {
        desc=(5*pt)/100;
        cout<<"Desconto de R$"<<desc<<endl;
    }
    else if(pt>250 && pt<=500)
    {
        desc=(10*pt)/100;
        cout<<"Desconto de R$"<<desc<<endl;
    }
    else if(pt>500)
    {
        desc=(15*pt)/100;
        cout<<"Desconto de R$"<<desc<<endl;
    }
    pf=pt-desc;
    cout<<"O Pre�o Final Ap�s Desconto � de R$"<<pf<<endl;
    system("pause");
    return 0;
}
