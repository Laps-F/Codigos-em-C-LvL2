#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    system("Color F0");
    int d1,d2,m1,m2,a1,a2;
    cout<<"Digite dois Dias: "<<endl;
    cin>>d1>>d2;
    cout<<"Digite dois Meses: "<<endl;
    cin>>m1>>m2;
    cout<<"Digite dois Anos: "<<endl;
    cin>>a1>>a2;
    if(d1<0 || d1>31 || d2<0 || d2>31)
        {
            cout<<"Esse Dia Não Existe"<<endl;
            system("pause");
            return 0;
        }
    else if(m1<0 || m1>12 || m2<0 || m2>12)
        {
            cout<<"Esse Mês Não Existe"<<endl;
            system("pause");
            return 0;
        }
    else if(a1<a2)
        cout<<"A Data "<<d1<<"/"<<m1<<"/"<<a1<<" É A Maior"<<endl;
    else if(a2<a1)
        cout<<"A Data "<<d2<<"/"<<m2<<"/"<<a2<<" É A Maior"<<endl;
    else if(a1==a2)
        {
            if(m1<m2)
                cout<<"A Data "<<d1<<"/"<<m1<<"/"<<a1<<" É A Maior"<<endl;
            else if(m2<m1)
                cout<<"A Data "<<d2<<"/"<<m2<<"/"<<a2<<" É A Maior"<<endl;
            else if(m1==m2)
                {
                    if(d1<d2)
                        cout<<"A Data "<<d1<<"/"<<m1<<"/"<<a1<<" É A Maior"<<endl;
                    else if(d2<d1)
                        cout<<"A Data "<<d2<<"/"<<m2<<"/"<<a2<<" É A Maior"<<endl;
                }
        }
    system("pause");
    return 0;
}
