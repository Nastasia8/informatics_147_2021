#include <iostream>
#include <ctime>

using namespace std;

void FindMin (int **massiv, int rows, int cols, int *Max_zn_Array)
{
    int min = 32800; 

    for (int i = 0; i < rows; i++)
    {
        min = 32800;
        for (int j = 0; j < cols; j++)
        {
            if (massiv[i][j] < min)
            {
                min = massiv[i][j];
            }
        }
        Max_zn_Array[i] = min;
    }

    cout << endl << "Минимальный элемент в каждой строчке = [ ";
    for (int i = 0; i < rows; i++)
    {
        cout << Max_zn_Array[i] << " ";
    }
    cout << "]" << endl;
}

int main() 
{
    srand(time(NULL));

    int rows;
    int cols;

    cout << "Введите количество рядов = ";
    cin >> rows;
    cout << "Введите количество столбцов = ";
    cin >> cols;
    cout << endl;

    //объявление массива

    int **massiv = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        massiv[i] = new int[cols];
    }

    //заполнение массива

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            massiv[i][j] = rand();
            cout << massiv[i][j] << "\t";
        }
        cout << endl;
    }

    //объявление одномерного массива

    int *Max_zn_Array = new int[rows];
    FindMin (massiv, rows, cols, Max_zn_Array);
    
    delete[] Max_zn_Array;
    
    for (int i = 0; i < rows; i++)
    {
        delete[] massiv[i];
    }
    return 0;
}