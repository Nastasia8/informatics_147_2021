#include <bits/stdc++.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int n,m,a,b;
    cout<<"Ââåäèòå êîë-âî ñòðîê è ñòîëáöîâ ìàññèâà"<<endl;
cin>>n>>m;
int A[n][m]={0};
int B[n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           A[i][j]=rand()%201-100;
           cout<<A[i][j]<<" ";
    }
    cout<<endl;
}
for (int i=0; i<n; i++)
{
    int  max=-1000;
      for (int j=0; j<m; j++){
        if(A[i][j]>max)max=A[i][j];
        }
        B[i]=max;
        max=-1000;
      }
      cout<<endl;
      for(int i=0;i<n;i++){
        cout<<B[i]<<endl;
      }
for (int j=0; j<m; j++)
{
    int min=2000000;
      for (int i=0; i<n; i++){
            if(A[i][j]<min)min=A[i][j];
            b=min;
      }
        cout<<b<<endl;
      }
    return 0;
}
