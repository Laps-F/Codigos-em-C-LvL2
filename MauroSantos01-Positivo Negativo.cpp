#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
	double num;
    cout<<"Digite o N�mero: "<<endl;
    cin>>num;
	(num<0)? cout<<"O N�mero "<<num<<" � Negativo"<<endl : cout<<"";
	(num>0)? cout<<"O N�mero "<<num<<" � Positivo"<<endl : cout<<"";
	(num==0)? cout<<"O N�mero "<<num<<" � Nulo"<<endl : cout<<"";
    system("pause");
    return 0;
}
