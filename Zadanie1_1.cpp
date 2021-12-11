#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a=0.4;
    float b=0.8;
    float x_n=3.2;
    float x_k=6.2;
    float d_x=0.6;
    for (float i=x_n; i<=x_k; i+=d_x)
    {
        float s= (pow(a,i)-pow(b,i));
        float y=(s/log10(a/b))*cbrt(a*b);
        cout<<"f("<<i<<")="<<y<<endl;
    }
    return 0;
}

