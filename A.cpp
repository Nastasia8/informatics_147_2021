#include <bits/stdc++.h>

using namespace std;

int main()
{
   double x,a,b,y,x1,x2;
   x=1.23;
   x1=1.23;
   x2=7.23;
   a=0.8;
   b=0.4;
   setprecision(4);
   for(double i=x1;i<=x2;i+=1.2){
   y=(pow(pow(x-a,2),1.0/3)+pow(abs(x+b),1.0/5))/pow(pow(x,2)-pow(a+b,2),1.0/9);
  cout<<y<<endl;
  x+=1.2;
}
    return 0;
}
