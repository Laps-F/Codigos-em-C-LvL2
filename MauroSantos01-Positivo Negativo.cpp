#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
	double num;
    cout<<"Digite o Número: "<<endl;
    cin>>num;
	(num<0)? cout<<"O Número "<<num<<" É Negativo"<<endl : cout<<"";
	(num>0)? cout<<"O Número "<<num<<" É Positivo"<<endl : cout<<"";
	(num==0)? cout<<"O Número "<<num<<" É Nulo"<<endl : cout<<"";
    system("pause");
    return 0;
}
