#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
	float x,x2,x3;
	cout<<"Digite o Valor de X: "<<endl;
	cin>>x;
	x2=pow(x,2);
	x3=pow(x,3);
	(x<=1)? cout<<"F(x)=1"<<endl :(x>1 && x<=2)? cout<<"F(x)=2"<<endl :(x>2 && x<=3)? cout<<"F(x)="<<x2<<endl :(x>3)? cout<<"F(x)="<<x3<<endl: cout<<endl;
	system("pause");
    return 0;
}
