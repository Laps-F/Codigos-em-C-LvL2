#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#define pi 3.1415
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
    float s,q,d;
	cout<<"Insira o Di�metro da Barra: "<<endl;
	cin>>d;
	cout<<"Digite A Carga que � que A Barra foi submetida: "<<endl;
	cin>>q;
	s=((4*q)/(pi*pow(d,2)))*2;
	(d>100)? cout<<"A Tens�o �: "<<s<<endl : cout<<"";
	s=((4*q)/(pi*pow(d,2)))*6;
    (d<50)? cout<<"A Tens�o �: "<<s<<endl : cout<<"";
    s=((4*q)/(pi*pow(d,2)))*4;
    (d>=50 && d<=100)? cout<<"A Tens�o �: "<<s<<endl : cout<<"";
    system("pause");
    return 0;
}
