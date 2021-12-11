#include <iostream>
using namespace std;

void two(int a)
{
    int s=0;
    int r=a;
    while(r>0)
    {
        r=r/2;
        s=s+1;
    }
    int arr[s];
    for(int i=0; i<s; i++)
    {
        if(a%2==0)
        {
            arr[i]=0;
            a=a/2;           
        }
        else
        {
            arr[i]=1;
            a=a/2;
        }
    }
    for(int i=(s-1);i>=0;i--)
    {
        cout<<arr[i];
    }
}

void hex(int a)
{
    cout<<"hex= "<<hex<<a;
}

void oct(int a)
{
    cout<<"Oct= "<<oct<<a;
}

int main()
{
    int a;
    cout<<"Entered number: ";
    cin>>a;
    cout<<"bin= ";
    two(a);
    cout<<endl;
    hex(a);
    cout<<endl;
    oct(a);
    return 0;
}