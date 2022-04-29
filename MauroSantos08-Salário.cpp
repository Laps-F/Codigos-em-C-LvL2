#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
	float sal,novosal;
	cout<<"Digite Seu Salário: "<<endl;
	cin>>sal;
	novosal=((30*sal)/100)+sal;
	(sal<700)? cout<<"Seu novo Salário É de: "<<novosal<<endl : cout<<"";
    novosal=((10*sal)/100)+sal;
    (sal>700)?cout<<"Seu novo Salário É de: "<<novosal<<endl: cout<<""<<endl;
    system("pause");
    return 0;
}
