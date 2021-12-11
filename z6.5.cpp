#include <bits/stdc++.h>

using namespace std;
void prost(int n)
{
int a=2,arr[n],c=0;
for (int i=a;i<=n;i++){
arr[c]=i;
c++;
}

for (int i=0;i<c;i++){
    for (int j=a;j<=n;j++){
        if (arr[i]!=j&&arr[i]%j==0){
            arr[i]=0;
        }
        else arr[i]=arr[i];
    }
}
for (int i=0;i<=n;i++){
    if (arr[i]!=0&&arr[i]<=n&&arr[i]>0){
        cout<<arr[i]<<" ";
    }
}
cout <<'\n';
}
int main()
{
    setlocale(LC_ALL,"Russian");
    int n;
    cout<<"¬ведите число n: ";
    cin>>n;
    prost(n);
    return 0;
}
