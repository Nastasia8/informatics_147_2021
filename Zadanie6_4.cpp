#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float n,s,j,factorial;
    s=0;
    cout<<"Entered number of row elements: ";
    cin>>n;
    for(int k=1; k<=n; k++)
    {
        j=1;
        factorial=1;
        while(j<=k)
        {
            factorial*=j;
            j++;
        }
        s=s+((-1)*k*((5-k)/factorial));
    }
    cout<<s;
    return 0;
}