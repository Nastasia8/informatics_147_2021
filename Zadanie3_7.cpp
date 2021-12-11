#include <iostream>
using namespace std;

int main()
{
    int h,w,n;
    cout<<"Entered height: h=";
    cin>>h;
    cout<<"Entered width: w=";
    cin>>w;
    char s;
    cout<<"Entered symbol: s=";
    cin>>s;
    char number1[w];
    for(n=1; n<=w; n++)
    {
        number1[w-1]=s;
        cout<<number1[w-1];
    }
    cout<<endl;
    char number2[h-2];
    for(int k=1; k<(h-1); k++)
    {
        number2[0]=s;
        cout<<number2[0];
        for(n=1; n<(w-1); n++)
        {
            number2[n]=' ';
            cout<<number2[n];
        }
         number2[w]=s;
        cout<<number2[w];
        cout<<endl;
    }
    for(n=1; n<=w; n++)
    {
        number1[w-1]=s;
        cout<<number1[w-1];
    }

    return 0;
}