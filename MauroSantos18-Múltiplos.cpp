#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
#define pi 3.1415
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
    int num1,num2;
	cout<<"Digite Os N�meros"<<endl;
	cin>>num1>>num2;
    (num1%num2==0)? cout<<num1<<" � M�ltiplo de "<<num2<<endl : cout<<num1<<" N�o � M�ltiplo de "<<num2<<endl;
    system("pause");
    return 0;
}
