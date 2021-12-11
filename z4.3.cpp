#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]{4,256,20,13};
    for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
    }
    int *M=arr;
    for(int i=3;i>=0;i--){
        cout<<M[i]<<endl;
    }
    return 0;
}
