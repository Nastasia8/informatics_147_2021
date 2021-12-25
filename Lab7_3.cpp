#include <iostream>
#include <ctime>
#include <cstdlib>
#include <climits>

using namespace std;

class Massive {
public:
    Massive(int rows, int cols) {
        this->rows = rows;
        this->cols = cols;
        srand(time(0));
        arr = new int* [rows];
        for (int i = 0; i < rows; i++) {
            arr[i] = new int[cols];
        }
        cout << "Созданный двумерный массив: \n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                arr[i][j] = rand() % 100 - 50;
                cout << arr[i][j] << '\t';
            }
            cout << endl;
        }
       
        cout << "\n Суммы нечетных элементов в каждой строке двумерного массива\n";
        int sumArr[cols];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (arr[i][j] % 2 != 0) sum += arr[i][j];
            }
            sumArr[i] = sum;
            cout << sumArr[i] << '\n';
            sum = 0;
        }
  
        cout << "\n Максимальные элементы в каждом столбце среди нечетных значений массива\n";
        int maxArr[rows], max = INT_MIN;
        for (int j = 0; j < cols; j++) {
            for (int i = 0; i < rows; i++) {
                if (arr[i][j] % 2 != 0 && arr[i][j] >= max) max = arr[i][j];
            }
            if (max % 2 == 0) max = 0; 
            maxArr[j] = max;
            cout << maxArr[j] << '\t';
            max = INT_MIN;
        }
        cout << endl;

        cout << "\n Cредние значения в каждом столбце\n";
        float midArr[rows];
        for (int j = 0; j < cols; j++) {
            sum = 0;
            for (int i = 0; i < rows; i++) {
                sum += arr[i][j];
            }
            midArr[j] = sum / rows;
            cout << midArr[j] << '\t';
        }
        cout << endl;
        cout << "\n Транспортировка матрицы\n";
        transMatrix();

        arr2 = new int* [rows];
        for (int i = 0; i < rows; i++) {
            arr2[i] = new int[cols];
        }
        cout << "\nПервая матрица\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << arr[i][j] << '\t';
            }
            cout << endl;
        }
        cout << "\n+\n\nВторая матрица\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                arr2[i][j] = rand() % 100 - 50;
                cout << arr2[i][j] << '\t';
            }
            cout << endl;
        }
        cout << "\n=\n\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << arr[i][j] + arr2[i][j] << '\t';
            }
            cout << endl;
        }
        cout << endl;
    }

    void transMatrix() {
        for (int j = 0; j < cols; j++) { 
            for (int i = 0; i < rows; i++) {
                cout << arr[i][j] << '\t';
            }
            cout << endl;
        }
    }
    void changeMass() {
        cout << " Изменение исходного двумерного массива, заменив его отрицательные значения нулями" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (arr[i][j] < 0) arr[i][j] = 0;
                cout << arr[i][j] << '\t';
            }
            cout << endl;
        }
    }

    ~Massive() {
        delete[] arr;
        delete[] arr2;
    }
private:
    int** arr, ** arr2;
    float sum = 0;
    int rows, cols;
};

int main() {
    Massive massive(2, 5);
    massive.changeMass();
    return 0;
}