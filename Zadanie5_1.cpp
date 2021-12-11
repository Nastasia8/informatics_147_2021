#include <iostream>
#include <cmath>
using namespace std;

int recurs(int count)
{
    if(count==0)
    return 0;
    if(count==1)
    return 3;
    if(count==2)
    return 5;
    return recurs(count-1)+recurs(count-2)+recurs(count-3);
}

int main()
{
    for(int i=0; i<15; i++)
    cout<<recurs(i)<<endl;
    return 0;
}