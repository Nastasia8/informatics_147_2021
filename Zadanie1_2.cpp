#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a=0.4;
    float b=0.8;
    float arr[]={4.48, 3.56, 2.78, 5.28, 3.21};
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<size; i++)
    {
        float s= (pow(a,i)-pow(b,i));
        float y=(s/log10(a/b))*cbrt(a*b);
        cout<<"f("<<i<<")="<<y<<endl;
    }
    return 0;
}
