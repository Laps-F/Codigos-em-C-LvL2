#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
	float a,b,c,r,delta,x1,x2;
    cout<<"Insira O Valor de A: "<<endl;
    cin>>a;
    cout<<"Insira O Valor de B: "<<endl;
    cin>>b;
    cout<<"Insira O Valor de C: "<<endl;
    cin>>c;
    if(a==0)
    {
        cout<<"N�o � Uma Equa��o de Seguno Grau"<<endl;
        if(b==0)
        {
            cout<<"N�o � Uma Equa��o de Primeiro Grau"<<endl;
            system("pause");
        return 0;
        }
        else
            r=-c/b;
            cout<<"A Raiz � "<<r<<endl;
    }
    else if(a!=0)
    {
        delta=pow(b,2)-4*a*c;
            if(delta<0)
            {
                cout<<"N�o H� Raizes Reais"<<endl;
                system("pause");
                return 0;
            }
            else
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            cout<<"As Raizes S�o "<<x1<< "e "<<x2<<endl;
    }
    system("pause");
    return 0;
}
