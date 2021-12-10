#include <iostream>
using namespace std;

void nok()
{
    int x,y,max,t;
    cout<<"Entered x= ";
    cin>>x;
    cout<<"Entered y= ";
    cin>>y;
    int i=1;
    while((i%x!=0)||(i%y!=0))
    {
        i++;
        max=i;
    }
    cout<<"NOK("<<x<<";"<<y<<")="<<max<<endl;
}

int main()
{
    nok();
    return 0;
}