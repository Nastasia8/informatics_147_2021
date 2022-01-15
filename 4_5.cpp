#include <iostream>
#include <ctime>
using namespace std;

void FindMin(int** arr, int rows, int cols, int arr_min[]) { //** - указатель на двумерный массив
    for (int i = 0; i < rows; i++)
    {
        arr_min[i] = arr[i][0];
        for (int j = 0; j < cols; j++)
        {
            if(arr[i][j]<arr_min[i]){
                arr_min[i]=arr[i][j];
            }
        }
    }
}
int main() {
    srand(time(NULL));
    int rows, cols;
    cout<<"Введите количество строк и столбцов массива " << endl;
    cin >> rows >> cols;
    cout<<"  "<<endl;
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
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
    FindMin(arr, rows, cols, arr_min);
    cout << "Минимальный элемент в каждой строке: " << endl;
    for (int i = 0; i < rows; i++)
    {
        cout << arr_min[i] << " ";
    }
    delete []arr;
    return 0;
}
