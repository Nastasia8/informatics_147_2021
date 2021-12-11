
#include <bits/stdc++.h>

using namespace std;

int main()
{
   double a,b,y,x;
   a=0.8;
   b=0.4;
   setprecision(4);
   for(int i=0;i<5;i++){
        cin>>x;
   y=(pow(pow(x-a,2),1.0/3)+pow(abs(x+b),1.0/5))/pow(pow(x,2)-pow(a+b,2),1.0/9);
  cout<<y<<endl;
   }
    return 0;
}
