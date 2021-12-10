#include <iostream>
using namespace std;

void FindMax(int** arr, int rows, int cols, int*arMin)
{
    for (int i=0; i<rows; i++)
    {
        int min=100000;
        for (int j=0; j<cols; j++)
        {
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
        arMin[i]=min;
        cout<<arMin[i]<<'\t';
    }
}

void inputArray(int **arr, int cols, int rows)
{
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            arr[i][j]=rand();
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }
}
int main()
{
    int cols,rows;
    cout<<"Entered the number of cols= ";
    cin>>cols;
    cout<<"Entered the number of rows= ";
    cin>>rows;
    int arMin[rows];
    int** arr= new int*[rows];
    for(int i=0; i<rows; i++)
    {
        arr[i]=new int[cols];
    }
    inputArray(arr, cols, rows);
    cout<<endl;
    cout<<"minArr: ";
    FindMax(arr, rows, cols, arMin);
    for(int i=0; i<rows; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
    return 0;
}