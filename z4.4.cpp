#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand(time (NULL));
    setlocale(LC_ALL,"Russian");
    int n;
    int m=20000000;
    cout<<"¬ведите размер массива:"<<endl;
    cin>>n;
    int *array=new int[n];
    for(int i=0;i<n;i++){
        array[i]=rand()%25;
        if(array[i]<m)
        {
            m=array[i];
        }
        cout<<array[i]<<endl;
    }
    cout<<m<<endl;
    delete []array;
    return 0;
}
