#include <bits/stdc++.h>

using namespace std;
float summ(float x,float y){
return x+y;
}
float proizv(float x,float y){
return x*y;
}
float del(float x,float y){
return x/y;
}
float vich(float x,float y){
return x-y;
}
float stepen(float x,float y){
return pow(x,y);
}
int main()
{
    setlocale(LC_ALL,"Russian");
    float x,y;
    int nomer;
    cout<<"������� ������ x � y"<<endl;
    cin>>x>>y;
    cout<<"������� ����� ��������"<<endl;
    cin>>nomer;
    if(nomer==1){
        cout<<summ(x,y)<<endl;
    }
    else if(nomer==2){
        cout<<proizv(x,y)<<endl;
    }
    else if(nomer==3){
        cout<<del(x,y)<<endl;
    }
    else if(nomer==4){
        cout<<vich(x,y)<<endl;
    }
    else if(nomer==5){
        cout<<stepen(x,y)<<endl;
    }
    else{
            cout<<"����� �������� ���"<<endl;
    }
    return 0;
}
