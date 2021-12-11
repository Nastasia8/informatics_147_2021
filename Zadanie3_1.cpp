#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,y,operation;
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    cout<<"operation=";
    cin>>operation;
    switch(operation)
    {
        case 1:
            cout<<"x+y="<<x+y<<endl;
            break;
        case 2:
            cout<<"x-y="<<x-y<<endl;
            break;
        case 3:
            cout<<"x*y="<<x*y<<endl;
            break;
        case 4:
            cout<<"x/y="<<x/y<<endl;
            break;
        case 5:
            cout<<"x^y="<<pow(x,y);
            break;
        default:
            cout<<"Entered 1-(+), 2-(-), 3-(*), 4-(/), 5-(x^y)";
            break;
    }
    return 0;
}