#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
	float cf,cc,dist,imp;
    cout<<"Digite o Custo de Fábrica: "<<endl;
    cin>>cf;
    dist=(5*cf)/100;
    imp=(0*cf)/100;
    cc=cf+dist+imp;
    (cf<=28000)? cout<<"O Valor do Carro É: "<<cc<<endl : cout<<"";
    dist=(10*cf)/100;
    imp=(15*cf)/100;
    cc=cf+dist+imp;
    (cf>=28000.01 && cf<=45000)? cout<<"O Valor do Carro É: "<<cc<<endl : cout<<"";
    dist=(15*cf)/100;
    imp=(20*cf)/100;
    cc=cf+dist+imp;
    (cf>45000)? cout<<"O Valor do Carro É: "<<cc<<endl: cout<<"";
    system("pause");
    return 0;
}

