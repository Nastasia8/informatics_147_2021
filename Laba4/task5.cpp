#include <iostream>
using namespace std;
// Найти максимальные значения в каждой строке двумерного массива
// И написать в отдельный одномерный массив
void FindMax(int** arr, int rows, int cols, int* _arMax){
    for (int i = 0; i < rows; i++){
        int max = -100;
        for (int j = 0; j < cols; j++){
            if (arr[i][j] > max) max = arr[i][j];
        }
    _arMax[i] = max;
    }
    cout << "Максимальные значения: ";
    for (int i = 0; i < rows; i++){
        cout << _arMax[i] << '\t';
    }
    cout << endl;
}

int main (){
    srand(time(0));
    int rows, cols;
    cout << "Введите кол-во строков и столбцов через пробел: ";
    cin >> rows >>cols;
    int **arr = new int* [rows];
    for (int i =0; i < rows; i++) arr[i] = new int[cols];
    int* _arMax = new int[rows];
    for (int i =0; i < rows; i++){
        for (int j =0; j < cols; j++){
            arr[i][j] = rand()%25;
        }
    }
        for (int i =0; i < rows; i++){
        for (int j =0; j < cols; j++){
            cout << arr[i][j]<<'\t';
        }
        cout << endl;
    }
    FindMax(arr, rows, cols, _arMax);
    delete[] arr;
    delete[] _arMax;
    return 0;
}