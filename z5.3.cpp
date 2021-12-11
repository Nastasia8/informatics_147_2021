#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

int nod(int x,int y){
    int a=0;
    for (int i=2;i<x+y;i++){
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
    if(nod(x,y)==0)cout<<"У этих чисел нет НОД"<<endl;
        else if (x>=0&&y>=0){
cout<<"Наибольший общий делитель равен "<<nod(x,y)<<endl;
}else{
    cout<<"Числа x и y должны быть положительными";
}
    return 0;
}
