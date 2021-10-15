#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float a = 2.0;
float b = 0.95;
float y = 0;
for (float i = 1.25; i <= 2.75; i+=0.3)
{
    y=(1+pow(log10(i/a),2))/(b-pow(M_E,(i/a)));
    cout<<"f("<<i<<") = "<<y<<endl;
}
cout<<"--------------------------"<<endl;
    y=(1+pow(log10(2.2/a),2))/(b-pow(M_E,(2.2/a)));
    cout<<"f(2.2) = "<<y<<endl;
    y=(1+pow(log10(3.78/a),2))/(b-pow(M_E,(3.78/a)));
    cout<<"f(3.78) = "<<y<<endl;
    y=(1+pow(log10(4.51/a),2))/(b-pow(M_E,(4.51/a)));
    cout<<"f(4.51) = "<<y<<endl;
    y=(1+pow(log10(6.58/a),2))/(b-pow(M_E,(6.58/a)));
    cout<<"f(6.58) = "<<y<<endl;
    y=(1+pow(log10(1.2/a),2))/(b-pow(M_E,(1.2/a)));
    cout<<"f(1.2) = "<<y<<endl;
return 0;
}