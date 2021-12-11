#include <bits/stdc++.h>

using namespace std;
void change(float *pa,float *pb){
float c=*pa;
*pa=*pb;
*pb=c;
}
int main()
{
    float a,b;
    a=5.37;
    b=13.77;
    cout<<a<<" "<<b<<endl;
    change(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
