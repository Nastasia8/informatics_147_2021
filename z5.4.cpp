#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

int nok(int x,int y){
    int a=0;
    for (int i=x+y;i>=2;i--){
        if (x%i==0&&y%i==0){
            a=i;
        }
    }
    return a;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
int x,y;
cin>>x>>y;
    if(nok(x,y)==0)cout<<"Ó ýòèõ ÷èñåë íåò ÍÎÄ"<<endl;
        else if (x>=0&&y>=0){
cout<<"Íàèìåíüøèé îáùèé äåëèòåëü ðàâåí "<<nok(x,y)<<endl;
}else{
    cout<<"×èñëà x è y äîëæíû áûòü ïîëîæèòåëüíûìè";
}
    return 0;
}
