#include<iostream>
#include<ctime>
using namespace std;
void find_max(int** arr, int rows, int cols, int arr_min[]){

    for (int i = 0; i < rows; i++)
    {
        arr_min[i]=arr[i][0];
        for (int j = 0; j < cols; j++)
        {
            if(arr[i][j]<arr_min[i]){
                arr_min[i]=arr[i][j];
            }
        }
    }
}
int main(){
    srand(time(NULL));
    int rows,cols;
    cout<<"Enter rows and cols array "<<endl;
    cin>>rows;
    cin>>cols;
    cout<<"------------"<<endl;
    int **arr = new int*[rows];
    for (int i = 0; i < cols; i++)
    {
        arr[i] = new int [cols];
    }
    int arr_min[rows];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j]=rand()%10;
        }
        
    }
    

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    find_max(arr,rows,cols,arr_min);
    cout<<"min element: "<<endl;
    for (int i = 0; i < rows; i++)
    {
        cout<<arr_min[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < rows; i++)
    {
        delete [] arr[i];
    }
    delete[] arr;
    return 0;
}