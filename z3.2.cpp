#include <bits/stdc++.h>

using namespace std;
float budsummvklad(float P,float m,float I,float n){
return (P*pow((1+((I/100)/(m/12))),m/(12*n)));
}
int sq(float P,float I,float n){
return P*pow((1+(I/100)),n);
}
int main()
{
    setlocale(LC_ALL,"Russian");
    float n,P,I,m;
    I=15,0;
    cout<<"������� ����� ������"<<endl;
    cin>>P;
    cout<<"�� ������� ��� ������� �������?"<<endl;
    cin>>n;
    cout<<"������� ������ ���������� ����������� ��������������"<<endl;
    cin>>m;
    if(m==12){
        cout<<sq(P,I,n)<<endl;
    }
    else if (m==6){
        cout<<budsummvklad(P,m,I,n)<<endl;
    }
    else if (m==3){
        cout<<budsummvklad(P,m,I,n)<<endl;
    }
    return 0;
}
