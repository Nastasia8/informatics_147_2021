#include <bits/stdc++.h>

using namespace std;
int summa1(int n,int k,int sum1){
    sum1=0;
for(n=1;n<=k;n++){
    if(n%2==0){sum1+=n;};
}
return sum1;
}
int summa2(int n,int k,int sum2){
    n=1;
    sum2=0;
while(n<=k){
        if(n%2==0){sum2+=n;};
        n+=1;
}
return sum2;
}
int main()
{
    int n,k,sum1,sum2;
    cin>>k;
    cout<<summa1(n,k,sum1)<<endl<<summa2(n,k,sum2)<<endl;;
    return 0;
}
