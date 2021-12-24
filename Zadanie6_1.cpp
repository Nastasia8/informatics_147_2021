#include <iostream>
using namespace std;

void way1(int rows, int column)
{
    cout<<"matrix(way1):"<<'\n';
    int arr[rows][column];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            arr[i][j]=rand()%40;
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }
    cout<<'\n';
    cout<<"new matrix:"<<'\n';
    for(int i=0; i<rows; i++)
    {
        for(int j=(column-1); j>=0; j--)
        {
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }   
}

int main()
{
    int rows, column;
    cout<<"rows= ";
    cin>>rows;
    cout<<"column= ";
    cin>>column;
    way1(rows, column);
    return 0;
}
// Я смог сделать только 1 вариант преобразования матрицы//