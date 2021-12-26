// Lab6.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

void PrintArray(int **arr, int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
}

void RotateArray(int** arr, int rows, int columns)
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns / 2; j++)
        {
            int n = arr[i][j];
            arr[i][j] = arr[i][columns - j - 1];
            arr[i][columns - j - 1] = n;
        }
}

int main()
{
    srand(100);
    int rows, columns;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> columns;

    int** arrNumber = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arrNumber[i] = new int[columns];
        for (int j = 0; j < columns; j++)
            arrNumber[i][j] = rand();
    }
    PrintArray(arrNumber, rows, columns);
    cout << endl;
    RotateArray(arrNumber, rows, columns);
    PrintArray(arrNumber, rows, columns);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
