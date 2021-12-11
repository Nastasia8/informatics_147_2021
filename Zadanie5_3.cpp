#include <iostream>
using namespace std;

void nod()
{
    int x,y,max,t;
    cout<<"Entered x= ";
    cin>>x;
    cout<<"Entered y= ";
    cin>>y;
    if(x>y)
        t=x;
    else
        t=y;
    for(int i=1; i<=t; i++)
    {
        if((x%i==0) and (y%i==0))
            max=i;
    }
    cout<<"NOD("<<x<<";"<<y<<")="<<max<<endl;
}

int main()
{
    nod();
    return 0;
}