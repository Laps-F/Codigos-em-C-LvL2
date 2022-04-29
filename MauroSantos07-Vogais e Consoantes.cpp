#include<iostream>
#include<math.h>
#include<locale.h>
#include<windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    system("Color F0");
	char letra;
    cout<<"Digite Uma Letra: "<<endl;
    cin>>letra;
    letra=toupper(letra);
(letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U')? cout<<"A Letra "<<letra<<" É uma Vogal"<<endl :(letra=='B'||letra=='C'||letra=='D'||letra=='F'||letra=='G'||letra=='H'||letra=='J'||letra=='K'||letra=='L'||letra=='M'||letra=='N'||letra=='P'||letra=='Q'||letra=='R'||letra=='S'||letra=='T'||letra=='V'||letra=='W'||letra=='X'||letra=='Y'||letra=='Z')?cout<<"A Letra "<<letra<<" É uma Consoante"<<endl: (letra!='A'||letra!='B'||letra!='C'||letra!='D'||letra!='E'||letra!='F'||letra!='G'||letra!='H'||letra!='I'||letra!='J'||letra!='K'||letra!='L'||letra!='M'||letra!='N'||letra!='O'||letra!='P'||letra!='Q'||letra!='R'||letra!='S'||letra!='T'||letra!='U'||letra!='V'||letra!='W'||letra!='X'||letra!='Y'||letra!='Z')? cout<<letra<<" Não É uma Letra"<<endl : cout<<""<<endl;
    system("pause");
    return 0;
}
