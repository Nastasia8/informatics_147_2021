#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   
    float all[]={0.35,1.28,3.51,5.21,4.16};
    int size = sizeof(all);
    int ind,y1,a,b;
    a=1.35;
    b=0.98;
    for(ind=0;ind<size;ind++){;
    y1=pow(a*all[ind]+b,1.0/3.0)/pow(log10(all[ind]),2);
    cout<<"BF("<<all[ind]<<")="<<y1<<endl;
    }
    return 0;
}
