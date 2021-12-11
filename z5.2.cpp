#include <bits/stdc++.h>

using namespace std;
void ss2(int a){
    int M[20];
    int count;
    for (int i=0;a>0;i++){
        M[i]=a%2;
        a/=2;
        count=i;
    }
    for (int i=count;i>=0;i--){
        cout<<M[i];
    }
    cout<<endl;
}
void ss8(int a){
    int M[20];
    int count;
    for (int i=0;a>0;i++){
        M[i]=a%8;
        a/=8;
        count=i;
    }
    for (int i=count;i>=0;i--){
        cout<<M[i];
    }
    cout<<endl;
}
void ss16(int a){
        int M[20];
    char count;
    int b;
    bool c=false;
    for (int i=0;a>0;i++){
        b=a%16;
             if (b==10) {b='A';c=true;M[i]=(char)b;}
        else if (b==11) {b='B';c=true;M[i]=(char)b;}
        else if (b==12) {b='C';c=true;M[i]=(char)b;}
        else if (b==13) {b='D';c=true;M[i]=(char)b;}
        else if (b==14) {b='E';c=true;M[i]=(char)b;}
        else if (b==15) {b='F';c=true;M[i]=(char)b;}
        else if (b==1) {b='1';c=true;M[i]=(char)b;}
        else if (b==2) {b='2';c=true;M[i]=(char)b;}
        else if (b==3) {b='3';c=true;M[i]=(char)b;}
        else if (b==4) {b='4';c=true;M[i]=(char)b;}
        else if (b==5) {b='5';c=true;M[i]=(char)b;}
        else if (b==6) {b='6';c=true;M[i]=(char)b;}
        else if (b==7) {b='7';c=true;M[i]=(char)b;}
        else if (b==8) {b='8';c=true;M[i]=(char)b;}
        else if (b==9) {b='9';c=true;M[i]=(char)b;}
        a/=16;
        count=i;
    }
    for (int i=count;i>=0;i--){
        if (c==true){
        cout<<(char)M[i];
        } else{
            cout<<M[i];
        }
    }
    cout<<endl;
}
int main()
{
    setlocale(LC_ALL,"Russian");
    int a;
    cout<<"Введите десятичное число от 0 до 325: ";
    cin>>a;
    if (a>325||a<0) cout<<"Вам нужно было ввести диапазон от 0 до 325\n";
    else {
        cout<<"Из десятичного числа "<<a<<" в двоичную равно ";
        ss2(a);
        cout<<"Из десятичного числа "<<a<<" в восьмеричную равно ";
        ss8(a);
        cout<<"Из десятичного числа "<<a<<" в 16 равно ";
        ss16(a);
    }
    return 0;
}
