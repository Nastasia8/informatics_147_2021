#include<iostream>
using namespace std;
int fact(int k)
{
    if(k < 0) 
        return 0; 
    if (k == 0) 
        return 1; 
    else 
        return k * fact(k - 1); 
}
int main(){
    int k;
    cout<<"Enter k"<<endl;
    cin>>k;
    float sum=0;
    for (int i = 1; i <= k; i++)
    {
        sum=sum + ((-1*i*(5-i))/fact(i));
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}