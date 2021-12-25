#include <iostream>
using namespace std;

void function(int k)
{
    cout<<"Start: "<<k<<endl;
    while(k>1)
    {
        if(k%2==0)
        {
            k=k/2;
            cout<<k<<' ';
        }
        else
        {
            k=(k*3+1)/2;
            cout<<k<<' ';
        }
    }
    cout<<endl<<"end: "<<k;
}

int main()
{
    int k;
    cout<<"Enterd number: ";
    cin>>k;
    function(k);
    return 0;
}