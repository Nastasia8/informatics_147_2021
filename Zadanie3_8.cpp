#include <iostream>
using namespace std;

int main()
{
    int k, n, r;
    long t;
    cout<<"Entered k=";
    cin>>k;
    cout<<"entered n=";
    cin>>n;
    int min[k];
    int max[k];
    int a[k][n];
    cout<<"array:"<<endl;
    for(int i=0; i<k; i++)
    {
        r=1;
        for(int j=0; j<n; j++)
        {
            a[i][j]=rand();
            cout<<a[i][j]<<' ';
            if(r<a[i][j])
            r=a[i][j];
        }
        max[i]=r;
        cout<<endl;
    }
    for(int j=0; j<n; j++)
    {
        t=100000;
        for(int i=0; i<k; i++)
        {
            if(a[i][j]<t)
            t=a[i][j];
        }
        min[j]=t;
    }
    cout<<"max:"<<' ';
    for(int i=0; i<k; i++)
    {
        cout<<max[i]<<' ';
    }
    cout<<endl;
    cout<<"min:"<<' ';
    for (int i=0; i<k; i++)
    {
        cout<<min[i]<<' ';
    }
    return 0;
}