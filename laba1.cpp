#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x,y;
    x=y=0;
    for (x=2.4; x<=3.2; x=x+0.2){;
    
    y=pow(x,2)/pow(x,1.0/3.0);
    cout <<"F("<<x<<")="<<y<<endl;  
    }
    return 0;
    
}