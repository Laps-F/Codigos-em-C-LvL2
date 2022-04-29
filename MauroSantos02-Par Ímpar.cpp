#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
    int num1,num2;
    cout<<"Digite O Número"<<endl;
    cin>>num1;
    (num1%2==0)? cout<<"O Número É Par"<<endl : cout<<"O Número É Ímpar"<<endl;
system("pause");
return 0;
}
