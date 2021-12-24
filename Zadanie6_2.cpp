#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int height,indent;
    char symbol;
    indent=1;
    cout<<"enter the height of the triangle= ";
    cin>>height;
    cout<<"Enter symbol= ";
    cin>>symbol;
    for(int i=1; i<=height; i++)
    {
        for(int j=0; j<i;j++)
        {
            cout<<symbol;
        }
        cout<<endl;
    }
    cout<<'\n';
    for(int i=1; i<=height; i++)
    {
        for(int j=height; j>=i;j--)
        {
            cout<<symbol;
        }
        cout<<endl;
    }
    cout<<'\n';
    for(int i=1; i<=height; i++)
    {
        cout<<setw(indent);
        indent++;
        for(int j=height; j>=i;j--)
        {
            cout<<symbol;
        }
        cout<<endl;
    }
    cout<<'\n';
    indent=height;
    for(int i=1; i<=height; i++)
    {
        cout<<setw(indent);
        indent--;
        for(int j=0; j<i;j++)
        {
            cout<<symbol;
        }
        cout<<endl;
    }
    return 0;
}