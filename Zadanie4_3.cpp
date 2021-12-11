#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"a=";
    cin>>a;
    int *arr= new int[a];
    int min=100000;
    for(int *q=arr; q!=arr+a; q++)
    {
        *q=rand();
        cout<<*q<<endl;
        if (min>*q)
        min=*q;

    }
    cout<<"min number= "<<min<<endl;
    return 0;
}