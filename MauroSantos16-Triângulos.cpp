#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#define pi 3.1415
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
    float a,b,c;
	cout<<"Digite Qual A Medida dos Lados do Triângulo"<<endl;
	cin>>a>>b>>c;
    ((a<(b+c) && a>(b-c) && b<(a+c) && b>(a-c) && c<(a+b) && c>(a-b))? cout<<"Esses Valores Podem Formar um Triânugulo"<<endl &&((a!=b && b!=c && a!=c)? cout<<"É um Triângulo Escaleno"<<endl :(((a==b && a!=c && b!=c) || (a==c && a!=b && c!=b) || (b==c && b!=a && c!=a))? cout<<"É um Triângulo Isóceles"<<endl :((a==b && a==c && b==c)? cout<<"É um Triângulo Equilátero"<<endl: cout<<""<<endl))): cout<<"Esses Valores Não Podem Formar um Triângulo"<<endl);
    system("pause");
    return 0;
}
