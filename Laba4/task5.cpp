/*Задание 5*/
#include <iostream>
using namespace std;
// Найти минимальные значения в каждой строке двумерного массива
// И написать в отдельный одномерный массив
void FindMax(int** arr, int rows, int cols, int* _arMin){
    for (int i = 0; i < rows; i++){
        int min = 100;
        for (int j = 0; j < cols; j++){
            if (arr[i][j] < min) min = arr[i][j];
        }
    _arMin[i] = min;
    }
    cout << "Минимальные значения: ";
    for (int i = 0; i < rows; i++){
        cout << _arMin[i] << ' ';
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