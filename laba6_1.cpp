#include<iostream>
using namespace std;
int main(){
    int cols=3;
    int rows=4;
    int y=rows-1;
    int arr[cols][rows]={{4,3,5,1},{0,7,2,9},{2,6,3,8}};
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"---------------"<<endl;
     int arr_2[cols][rows];
    for (int i = 0; i < cols; i++)
    {  
        for (int j = 0; j < rows; j++)
        {
            arr_2[j][y]=arr[j][i];
            
        }  
        y--;
    } 
    cout<<"--------------"<<endl;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout<<arr_2[i][j]<<"\t";
        }
        cout<<endl;
    }
    

    return 0;
}