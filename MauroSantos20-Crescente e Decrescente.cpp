#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
    float x,y,z;
	cout<<"Digite Três Números"<<endl;
    cin>>x>>y>>z;
    (x<y && y<z)? cout<<"Os Números em Ordem Crescente São:\n"<<x<<"\n"<<y<<"\n"<<z<<endl && cout<<"Os Números em Ordem Decrescente São:\n"<<z<<"\n"<<y<<"\n"<<x<<endl :(x<z && z<y)? cout<<"Os Números em Ordem Crescente São:\n"<<x<<"\n"<<y<<"\n"<<z<<endl && cout<<"Os Números em Ordem Decrescente São:\n"<<z<<"\n"<<y<<"\n"<<x<<endl :(z<x && x<y)? cout<<"Os Números em Ordem Crescente São:\n"<<z<<"\n"<<x<<"\n"<<y<<endl && cout<<"Os Números em Ordem Decrescente São:\n"<<y<<"\n"<<x<<"\n"<<z<<endl :(z<y && y<x)? cout<<"Os Números em Ordem Crescente São:\n"<<z<<"\n"<<y<<"\n"<<x<<endl && cout<<"Os Números em Ordem Decrescente São:\n"<<x<<"\n"<<y<<"\n"<<z<<endl :(y<x && x<z)? cout<<"Os Números em Ordem Crescente São:\n"<<y<<"\n"<<x<<"\n"<<z<<endl && cout<<"Os Números em Ordem Decrescente São:\n"<<z<<"\n"<<x<<"\n"<<y<<endl :(y<z && z<x)? cout<<"Os Números em Ordem Crescente São:\n"<<y<<"\n"<<z<<"\n"<<x<<endl && cout<<"Os Números em Ordem Decrescente São:\n"<<x<<"\n"<<z<<"\n"<<y<<endl :(x==y && y==z)? cout<<"Os Números em Ordem Crescente São:\n"<<x<<"\n"<<y<<"\n"<<z<<endl && cout<<"Os Números em Ordem Decrescente São:\n"<<z<<"\n"<<y<<"\n"<<x<<endl :(x==y && z<y)? cout<<"Os Números em Ordem Crescente São:\n"<<z<<"\n"<<y<<"\n"<<x<<endl && cout<<"Os Números em Ordem Decrescente São:\n"<<y<<"\n"<<x<<"\n"<<z<<endl :(y==z && x<z)? cout<<"Os Números em Ordem Crescente São:\n"<<x<<"\n"<<y<<"\n"<<z<<endl && cout<<"Os Números em Ordem Decrescente São:\n"<<z<<"\n"<<y<<"\n"<<x<<endl :(x==z && y<z)? cout<<"Os Números em Ordem Crescente São:\n"<<y<<"\n"<<z<<"\n"<<x<<endl && cout<<"Os Números em Ordem Decrescente São:\n"<<z<<"\n"<<x<<"\n"<<y<<endl : (x==y && z>y)? cout<<"Os Números em Ordem Crescente São:\n"<<x<<"\n"<<y<<"\n"<<z<<endl && cout<<"Os Números em Ordem Decrescente São:\n"<<z<<"\n"<<x<<"\n"<<y<<endl :(y==z && x>z)? cout<<"Os Números em Ordem Crescente São:\n"<<z<<"\n"<<y<<"\n"<<x<<endl && cout<<"Os Números em Ordem Decrescente São:\n"<<x<<"\n"<<y<<"\n"<<z<<endl :(x==z && y>z)? cout<<"Os Números em Ordem Crescente São:\n"<<x<<"\n"<<z<<"\n"<<y<<endl && cout<<"Os Números em Ordem Decrescente São:\n"<<y<<"\n"<<x<<"\n"<<z<<endl : cout<<"";
    system("pause");
    return 0;
}
