#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
	float salb,tempser,imp,grat,sall;
	cout<<"Digite o Seu Sal�rio Base"<<endl;
	cin>>salb;
	cout<<"Digite Quantos Anos Voc� Tem de Servi�o"<<endl;
	cin>>tempser;
	if(salb<200)
        cout<<"Voc� Est� Isento de Impostos"<<endl;
	else if(salb>=200 && salb<=450)
	{
	    imp=3;
	    imp=(3*salb)/100;
	    cout<<"O Imposto � de 3% = "<<imp<<endl;
	}
	else if(salb>450 && salb<700)
	{
	    imp=8;
	    imp=(8*salb)/100;
	    cout<<"O Imposto � de 8% = "<<imp<<endl;
	}
	else if(salb>=700)
    {
        imp=12;
	    imp=(12*salb)/100;
	    cout<<"O Imposto � de 12% = "<<imp<<endl;
    }
    if(salb>500 && tempser<=3)
    {
        grat=(20*salb)/100;
        cout<<"A Gratifica��o � de 20% = "<<grat<<endl;
    }
    else if(salb>500 && tempser>3)
    {
        grat=(30*salb)/100;
        cout<<"A Gratifica��o � de 30% = "<<grat<<endl;
    }
    if(salb<=500 && tempser<=3)
    {
        grat=(23*salb)/100;
        cout<<"A Gratifica��o � de 23% = "<<grat<<endl;
    }
    else if(salb<=500 && tempser>3 && tempser<6)
    {
        grat=(35*salb)/100;
        cout<<"A Gratifica��o � de 35% = "<<grat<<endl;
    }
    else if(salb<=500 && tempser>=6)
    {
        grat=(33*salb)/100;
        cout<<"A Gratifica��o � de 33% = "<<grat<<endl;
    }
sall=salb-imp+grat;
cout<<"O Sal�rio L�quido � de "<<sall<<endl;
    if(sall<=350)
        cout<<"Voc� Est� Na Classifica��o A"<<endl;
    else if(sall>350 && sall<600 )
        cout<<"Voc� Est� Na Classifica��o B"<<endl;
    else if(sall>=600)
        cout<<"Voc� Est� Na Classifica��o C"<<endl;
    system("pause");
    return 0;
}
