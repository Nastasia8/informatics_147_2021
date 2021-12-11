#include <bits/stdc++.h>

using namespace std;

double qwerty(int n,int b)
{
    double Sum=1;
    for (int i=1;i<=b;i++)
        Sum*=(n-i+1)/float(i);
    return Sum;
}

int Tr(int n)
{
    for (int j=0;j<=n;j++) {
        for (int i=0;i<=j;i++)
            cout<<qwerty(j,i)<<" ";
        cout<<"\n";
    }
    return 0;
}

int main()
{
    setlocale(LC_ALL,"Russian");
    int n=0;
    cout<<"¬ведите кол-во строк:= ";
    cin>>n;
    cout<<endl;
    Tr(n);
    return 0;
}
