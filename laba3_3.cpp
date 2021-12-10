#include <iostream>
#include <cmath>
using namespace std;
float sum(int k){
    float result = 0;
    for (float i = 1.0; i <= k; i++)
    {
        result+=2.0/((2.0*i+1)*(2.0*i+3.0));
    }
    return result;
}
int proisvedenie(int k){
    int res=1;
    for (int i = 1; i <= k; i++)
    {
        res=res*(pow(-1,i-1)+i);
    }
    return res;
}
int main(){
    int k;
    cout<<"Enter k"<<endl;
    cin>>k;
    cout<<"Sum = "<<sum(k)<<endl;
    cout<<"Proisvedenie = "<<proisvedenie(k)<<endl;
    return 0;
}