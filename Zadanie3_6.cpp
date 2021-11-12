#include <iostream>
#include <cmath>
using namespace std;

void sum()
{
    int f1,f2,f3,f4,f5,f6;
    int k;
    cout<<"entered a six-digit namber: k=";
    cin>>k;
    int n=(k/100000);
    if(0<n and n<10)
    {
        f1=(k/100000);
        f2=(k/10000);
        f2=(f2%10);
        f3=(k/1000);
        f3=(f3%10);
        f4=(k/100);
        f4=(f4%10);
        f5=(k/10);
        f5=(f5%10);
        f6=(k%10);
        int sum=f1+f2+f3+f4+f5+f6;
        cout<<"Sum="<<sum<<endl;
    }
    else
    {
    cout<<"Entered a six-digit namber!";
    }
}

int main()
{
    sum();
    return 0;
}