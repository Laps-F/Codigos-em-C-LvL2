#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
    float x,y,z;
	cout<<"Digite Tr�s N�meros"<<endl;
    cin>>x>>y>>z;
    (x<y && y<z)? cout<<"Os N�meros em Ordem Crescente S�o:\n"<<x<<"\n"<<y<<"\n"<<z<<endl && cout<<"Os N�meros em Ordem Decrescente S�o:\n"<<z<<"\n"<<y<<"\n"<<x<<endl :(x<z && z<y)? cout<<"Os N�meros em Ordem Crescente S�o:\n"<<x<<"\n"<<y<<"\n"<<z<<endl && cout<<"Os N�meros em Ordem Decrescente S�o:\n"<<z<<"\n"<<y<<"\n"<<x<<endl :(z<x && x<y)? cout<<"Os N�meros em Ordem Crescente S�o:\n"<<z<<"\n"<<x<<"\n"<<y<<endl && cout<<"Os N�meros em Ordem Decrescente S�o:\n"<<y<<"\n"<<x<<"\n"<<z<<endl :(z<y && y<x)? cout<<"Os N�meros em Ordem Crescente S�o:\n"<<z<<"\n"<<y<<"\n"<<x<<endl && cout<<"Os N�meros em Ordem Decrescente S�o:\n"<<x<<"\n"<<y<<"\n"<<z<<endl :(y<x && x<z)? cout<<"Os N�meros em Ordem Crescente S�o:\n"<<y<<"\n"<<x<<"\n"<<z<<endl && cout<<"Os N�meros em Ordem Decrescente S�o:\n"<<z<<"\n"<<x<<"\n"<<y<<endl :(y<z && z<x)? cout<<"Os N�meros em Ordem Crescente S�o:\n"<<y<<"\n"<<z<<"\n"<<x<<endl && cout<<"Os N�meros em Ordem Decrescente S�o:\n"<<x<<"\n"<<z<<"\n"<<y<<endl :(x==y && y==z)? cout<<"Os N�meros em Ordem Crescente S�o:\n"<<x<<"\n"<<y<<"\n"<<z<<endl && cout<<"Os N�meros em Ordem Decrescente S�o:\n"<<z<<"\n"<<y<<"\n"<<x<<endl :(x==y && z<y)? cout<<"Os N�meros em Ordem Crescente S�o:\n"<<z<<"\n"<<y<<"\n"<<x<<endl && cout<<"Os N�meros em Ordem Decrescente S�o:\n"<<y<<"\n"<<x<<"\n"<<z<<endl :(y==z && x<z)? cout<<"Os N�meros em Ordem Crescente S�o:\n"<<x<<"\n"<<y<<"\n"<<z<<endl && cout<<"Os N�meros em Ordem Decrescente S�o:\n"<<z<<"\n"<<y<<"\n"<<x<<endl :(x==z && y<z)? cout<<"Os N�meros em Ordem Crescente S�o:\n"<<y<<"\n"<<z<<"\n"<<x<<endl && cout<<"Os N�meros em Ordem Decrescente S�o:\n"<<z<<"\n"<<x<<"\n"<<y<<endl : (x==y && z>y)? cout<<"Os N�meros em Ordem Crescente S�o:\n"<<x<<"\n"<<y<<"\n"<<z<<endl && cout<<"Os N�meros em Ordem Decrescente S�o:\n"<<z<<"\n"<<x<<"\n"<<y<<endl :(y==z && x>z)? cout<<"Os N�meros em Ordem Crescente S�o:\n"<<z<<"\n"<<y<<"\n"<<x<<endl && cout<<"Os N�meros em Ordem Decrescente S�o:\n"<<x<<"\n"<<y<<"\n"<<z<<endl :(x==z && y>z)? cout<<"Os N�meros em Ordem Crescente S�o:\n"<<x<<"\n"<<z<<"\n"<<y<<endl && cout<<"Os N�meros em Ordem Decrescente S�o:\n"<<y<<"\n"<<x<<"\n"<<z<<endl : cout<<"";
    system("pause");
    return 0;
}
