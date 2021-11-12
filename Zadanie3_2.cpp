#include <iostream>
#include <cmath>
using namespace std;

void Summ()
{
    float p,n,m;
    float s;
    float i=0.15;
    cout<<"deposit amount: p=";
    cin>>p;
    cout<<"deposit term (years): n=";
    cin>>n;
    cout<<"the amount of interest accrual per year(1,2 and 4): m=";
    cin>>m;
    s=(p*pow((1+((i/100)/(m/12))), (m/(12*n))));
    cout<<s<<endl;
    
}

int main()
{
    Summ();
    return 0;
}