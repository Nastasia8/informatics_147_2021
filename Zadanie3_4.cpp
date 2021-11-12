#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int sum;
    int k;
    cout<<"enter the beginning of the interval: k=";
    cin>>k;
    int n;
    cout<<"entered the end of the interval: n=";
    cin>>n;
    for(k; k<=n; k++)
    {
        if(k%2==0)
        sum=sum+k;
    }
    cout<<"sum="<<sum<<endl;
    return 0;
}