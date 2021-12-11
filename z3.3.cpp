#include <bits/stdc++.h>

using namespace std;
float summation(float k,float sum,float n){
    sum=0;
    for(n=1;n<=k;n++){
    sum+=2/((2*n+1)*(2*n+3));
}
return sum;
}
float product(float k,float prod,float n){
    prod=1;
    for(n=1;n<=k;n++){
    prod*=pow(-1,(n-1))+n;
}
return prod;
}
int main()
{
    float k,n,sum,prod;
    cin>>k;
    cout<<setprecision(4)<<summation(k,n,sum)<<endl<<product(k,n,prod)<<endl;
    return 0;
}
