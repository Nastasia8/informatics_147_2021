#include <bits/stdc++.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int n,m;
    cout<<"¬ведите кол-во строк и столбцов"<<endl;
    cin>>n>>m;
    int Arr[n][m]={0};
    int B[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            Arr[i][j]=rand()%201-100;
            cout<<Arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    for (int i=0; i<n; i++)
{
    int  min=200000;
      for (int j=0; j<m; j++){
        if(Arr[i][j]<min)min=Arr[i][j];
        }
        B[i]=min;
        min=200000;
      }
      cout<<endl;
      for(int i=0;i<n;i++){
        cout<<B[i]<<endl;
      }
    return 0;
}
