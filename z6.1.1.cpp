#include <bits/stdc++.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int n,m;
    cout<<"������� ������ ������� ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"������� ��� ������"<<endl;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<" ������� 1"<<endl;;
    for (int i=0;i<n;i++)
    {
        for (int j = 0;j<m;j++)
        {
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }
    cout<<"��������������� �������"<<endl;
    for (int i=0;i<n;i++)
    {
        for (int j=m-1;j>=0;j--)
        {
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }
    return 0;
}
