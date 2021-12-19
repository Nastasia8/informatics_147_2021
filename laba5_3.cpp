#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter numbers"<<endl;
    cin>>a;
    cin>>b;
    cout<<"NOD ("<<a<<"; "<<b<<") = ";
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
    cout<<a+b;
    return 0;
}