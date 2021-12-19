#include<iostream>
using namespace std;
int NOD(int a, int b){

while ((a!=0)&&(b!=0))
    {
        if (a>b)
        {
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    return a+b;
}
int main(){
    int a,b,NOK;
    cout<<"Enter numbers"<<endl;
    cin>>a;
    cin>>b;
    cout<<"NOK ("<<a<<"; "<<b<<") = ";
    cout<<(a*b) / NOD(a,b);
    return 0;
}