#include<iostream>
using namespace std;
int foo(int n){
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 3;
    }
    if (n==2)
    {
        return 5;
    }
    return foo(n-1)+foo(n-2)+foo(n-3);
}
int main (){
    for (int i = 0; i < 15; i++)
    {
        cout<<foo(i)<<" ";
    }
    return 0;
}