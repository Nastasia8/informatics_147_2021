#include <bits/stdc++.h>

using namespace std;
int ch(int a,int proizv,int b){
    b=0;
    proizv=1;
while(a!=0){
    proizv*=a%10;
    a/=10;
    b++;
}
if(b!=6){cout<<"Число не шестизначное"<<endl;return 0;}
else
return proizv;
}
int main()
{
    setlocale(LC_ALL, "");
    int a,b,proizv;
    cin>>a;
    cout<<ch(a,b,proizv);
    return 0;
}
