#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL,"Russian");
    int n,m;
    cout<<"Введите размер массива ";
    cin>>n>>m;
    int arr[n][m];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            arr[i][j]=rand()%100-40;
        }
    }
    cout<<" Матрица 1"<<endl;;
    for (int i=0;i<n;i++)
    {
        for (int j = 0;j<m;j++)
        {
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }
    cout<<"Переобразование матрицы"<<endl;
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
