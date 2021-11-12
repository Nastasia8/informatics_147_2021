#include <iostream>
#include <cmath>
using namespace std;

void Dis()
{
    float f1,f2;
    float x,y,z;
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    cout<<"z=";
    cin>>z;
    float D=pow(y,2)-(4*x*z);
    if(D<0)
        cout<<"the equation has no roots";
    else if(D>0)
    {
        f1=((-y)+sqrt(D))/(2*x);
        f2=((-y)-sqrt(D))/(2*x);
        cout<<"f1="<<f1<<endl;
        cout<<"f2="<<f2<<endl;
    }
    else
    {
        f1=(-y)/(2*y);
        cout<<"f1="<<f1<<endl;
    }
}

int main()
{
    Dis();
    return 0;
}