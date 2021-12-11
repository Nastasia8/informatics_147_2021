#include <bits/stdc++.h>

using namespace std;
float diskr(float y,float x,float z,float D){
return D=y*y-4*x*z;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    float x,y,z,D,f1,f2;
    cin>>x>>y>>z;
    cout<<diskr(y,x,z,D)<<endl;
    if(diskr(y,x,z,D)<0){cout<<"Корней нет"<<endl;}
    if(diskr(y,x,z,D)==0){cout<<-y/(2*x);}
    if(diskr(y,x,z,D)>0){cout<<(-y+sqrt(diskr(y,x,z,D)))/(2*x)<<endl<<(-y-sqrt(diskr(y,x,z,D)))/(2*x);}
    return 0;
}
