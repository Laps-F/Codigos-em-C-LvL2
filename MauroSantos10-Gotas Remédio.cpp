#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    system("Color F0");
    float idade,peso;
    cout<<"Digite Sua Idade: "<<endl;
    cin>>idade;
    if(idade<12)
        {
            cout<<"Digite Seu Peso em Kg: "<<endl;
            cin>>peso;
            if(peso>=5 && peso<=9)
                cout<<"O Paciente deve Tomar 5 Gotas do Medicamento"<<endl;
            else if(peso>9 && peso<=16)
                cout<<"O Paciente deve Tomar 10 Gotas do Medicamento"<<endl;
            else if(peso>16 && peso<=24)
                cout<<"O Paciente deve Tomar 15 Gotas do Medicamento"<<endl;
            else if(peso>24 && peso<=30)
                cout<<"O Paciente deve Tomar 20 Gotas do Medicamento"<<endl;
            else if(peso>30)
                cout<<"O Paciente deve Tomar 30 Gotas do Medicamento"<<endl;
        }
    else if(idade>12)
        {
            cout<<"Digite Seu Peso em Kg: "<<endl;
            cin>>peso;
            if(peso>=60)
                cout<<"O Paciente deve Tomar 40 Gotas do Medicamento"<<endl;
            else
                cout<<"O Paciente deve Tomar 35 Gotas do Medicamento"<<endl;
        }
    system("pause");
    return 0;
}




