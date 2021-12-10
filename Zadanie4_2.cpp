#include <iostream>
using namespace std;
void par()
{
    float x,y;
    cout<<"entered a=";
    cin>>x;
    cout<<"entered b=";
    cin>>y;
    cout<<x<<' '<<y<<endl;
    float *a;
    float *b;
    a=&y;
    b=&x;
    cout<<*a<<' '<<*b<<endl;
}

int main()
{
 par();
 return 0;
}