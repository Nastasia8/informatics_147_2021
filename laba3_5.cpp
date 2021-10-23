#include <iostream>
#include <cmath>
using namespace std;
float dis(float,float,float);
int main(){
        float x,y,z,d;
    cout<<"Enter x,y,z"<<endl;
        cin>>x;
        cin>>y;
        cin>>z;
    d=dis(x,y,z);
    cout<<"d = "<<d<<endl;

if (d<0)
{
    cout<<"Kornej net,"<<endl;
}
else if (d==0)
{
    float x1;
    x1=-y/(2.0*x);
    cout<<"x1 = "<<x1<<endl;
}
else if (d>0)
{
    float x1,x2;
    x1=(-y+sqrt(d))/(2.0*x);
    x2=(-y-sqrt(d))/(2.0*x);
    cout<<"x1 = "<<x1<<endl;
    cout<<"x2 = "<<x2<<endl;
}
return 0;
}
float dis(float x,float y,float z){
    return y*y-4*x*z;
}


