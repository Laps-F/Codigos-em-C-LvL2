#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
	float af,ptab,imposto,np;
	cout<<"Digite o Valor de Tabela do Carro: "<<endl;
	cin>>ptab;
	cout<<"Digite o Ano de Fabriva��o do Carro: "<<endl;
	cin>>af;
	imposto=(1*ptab)/100;
    np=imposto+ptab;
    (af<1990)?cout<<"O Imposto que Voc� deve Pagar � de: "<<imposto<<" Reais"<<endl && cout<<"O Pre�o do Carro com Imposto � de: "<<np<<endl: cout<<"";
	imposto=(1.5*ptab)/100;
	np=imposto+ptab;
	(af>=1990)?cout<<"O Imposto que Voc� deve Pagar � de: "<<imposto<<" Reais"<<endl && cout<<"O Pre�o do Carro com Imposto � de: "<<np<<endl: cout<<"";
    system("pause");
    return 0;
}
