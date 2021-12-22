// Lab4.05.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

void FindMins(int** arr, int rows, int cols, int* _arMin)
{
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            _arMin[i] = (j == 0) ? arr[i][j] : (arr[i][j] < _arMin[i] ? arr[i][j] : _arMin[i]);
}

void main()
{
    srand(100);
    int rows, columns;
    cout << "Enter the number of rows and columns" << endl;
    cin >> rows >> columns;

    int** arrNumber = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arrNumber[i] = new int[columns];
        for (int j = 0; j < columns; j++)
        {
            arrNumber[i][j] = rand();
            cout << arrNumber[i][j] << "\t";
        }
        cout << endl;
    }
    int* rowMin = new int[rows];
    FindMins(arrNumber, rows, columns, rowMin);
    cout << "Rows minimums:" << endl;
    for (int i = 0; i < rows; i++)
        cout << rowMin[i] << endl;
    delete[] arrNumber;
    delete[] rowMin;
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
