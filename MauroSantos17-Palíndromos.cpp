#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#define pi 3.1415
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
    int num,num1,num2,num3,invert;
	cout<<"Digite um N�mero de Tr�s Digitos"<<endl;
    cin>>num;
	num1=num%10;
	cout<<num1<<endl;
	num2=(num/10)%10;
	cout<<num2<<endl;
	num3=num/100;
	cout<<num3<<endl;
	invert=(num1*100)+(num2*10)+num3;
   (num==invert)? cout<<"O N�mero "<<num<<" � Pal�ndromo"<<endl : cout<<"O N�mero "<<num<<" N�o � Pal�ndromo"<<endl;
    system("pause");
    return 0;
}
