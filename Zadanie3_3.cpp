#include <iostream>
#include <cmath>
using namespace std;

void SumR()
{
    float sum;
    int k;
    cout<<"k=";
    cin>>k;
    float number[k];
    for (int n=1; n<=k; n++)
    {
        float x=n;
        number[n-1]=1/((2*x+1)*(2*x+3)); 
        sum=sum+number[n-1];
    }
    cout<<"sum="<<sum<<endl;
}

void comR()
{
    float com=1;
    int k;
    cout<<"k=";
    cin>>k;
    float number[k];
    for (int n=1; n<=k; n++)
    {
        float x=n;
        number[n-1]=pow((-1),x-1)+x;
        com=com*number[n-1];
    }
    cout<<"composition="<<com<<endl;
}

int main()
{
    SumR();
    comR();
    return 0;
}