#include <iostream>
#include <ctime>

using namespace std;

void FindMin(int** arr, int rows, int cols, int* arrMin) {
    for (int i = 0; i < rows; i++) {
        int min = arr[0][0];
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
        arrMin[i] = min;
    }
    cout << "Минимальные значения: ";
    for (int i = 0; i < rows; i++) {
        cout << arrMin[i] << " ";
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(0));

    int rows, cols;

    cout << "Введите сначало кол-во строков, а затем кол-во столбцов столбцов массива: ";
    cin >> rows >> cols;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    int* arrMax = new int[rows];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 25;
        }
    }
   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }

    FindMin(arr, rows, cols, arrMax);

    return 0;
}