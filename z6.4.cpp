#include <bits/stdc++.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int n;
    cout<<"������� n (n>=1): ";
    cin>>n;
    float sum=0;
    float fact=1;
    for (int i=1;i<=n;i++)
    {
        fact*= i;
        sum+=(-1)*i*(5-i)/fact;
        cout<<"(k= "<<i<<"); "<<"(���������= "<<fact<<"); "<<"�����= "<<sum<<endl;
    }
    cout<<"����� ����= "<<sum<<endl;

    return 0;
}
