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
	cout<<"Digite Qual A Medida dos Lados do Tri�ngulo"<<endl;
	cin>>a>>b>>c;
    ((a<(b+c) && a>(b-c) && b<(a+c) && b>(a-c) && c<(a+b) && c>(a-b))? cout<<"Esses Valores Podem Formar um Tri�nugulo"<<endl &&((a!=b && b!=c && a!=c)? cout<<"� um Tri�ngulo Escaleno"<<endl :(((a==b && a!=c && b!=c) || (a==c && a!=b && c!=b) || (b==c && b!=a && c!=a))? cout<<"� um Tri�ngulo Is�celes"<<endl :((a==b && a==c && b==c)? cout<<"� um Tri�ngulo Equil�tero"<<endl: cout<<""<<endl))): cout<<"Esses Valores N�o Podem Formar um Tri�ngulo"<<endl);
    system("pause");
    return 0;
}
