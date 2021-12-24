#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x_n, x_k, x_step,b,a,c,fa,fc;
    cout<<"Enterd beginning of the segment:";
    cin>>x_n;
    cout<<"Enterd ending of the segment:";
    cin>>x_k;
    cout<<"Enterd step:";
    cin>>x_step;
    for(x_n; x_n<=x_k; x_n+=x_step)
    {
        if ((exp(x_n)-pow(x_n,2)-(2*x_n))>0)
        {
            a=x_n-x_step;
            b=x_n;
            break;
        }
    }
    cout<<"a"<<'\t'<<"b"<<'\t'<<"c"<<'\t'<<"b-a"<<'\t'<<"f(a)"<<'\t'<<'\t'<<"f(c)"<<'\t'<<'\t'<<"f(a)*f(c)"<<endl;
    while((b-a)>=0.0001)
    {
        c=((a+b)/2);
        fa=(exp(a)-pow(a,2)-(2*a));
        fc=(exp(c)-pow(c,2)-(2*c));
        cout<<a<<'\t'<<b<<'\t'<<c<<'\t'<<b-a<<'\t'<<fa<<'\t'<<fc<<'\t'<<fa*fc<<endl;
        if((fa*fc)<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
    }
    return 0;
}