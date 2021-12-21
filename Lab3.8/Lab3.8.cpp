// Lab3.8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

void main()
{
    int rows, columns;
    cout << "Enter the number of rows and columns" << endl;
    cin >> rows >> columns;

    int** arrNumber = new int* [rows];
    int allMin;
    int* rowMax = new int [rows];
    int* colMin = new int[columns];
    for (int i = 0; i < rows; i++)
    {
        arrNumber[i] = new int[columns];
        for (int j = 0; j < columns; j++)
        {
            int n = rand();
            allMin = (i == 0 && j == 0) ? n : (n < allMin ? n : allMin);
            rowMax[i] = (j == 0) ? n : ((n > rowMax[i]) ? n : rowMax[i]);
            colMin[j] = (i == 0) ? n : ((n < colMin[j]) ? n : colMin[j]);
            arrNumber[i][j] = n;
            cout << n << "\t";
        }

        cout << endl;
    }
    cout << "The minimum element in a given array is " << allMin << endl;
    cout << "Rows maximums:" << endl;
    for (int i = 0; i < rows; i++)
    {
        cout << rowMax[i] << endl;
    }
    cout << "Columns minimums:" << endl;
    for (int j = 0; j < columns; j++)
    {
        cout << colMin[j] << "\t";
    }
    cout << endl;
    delete[] arrNumber;
    delete[] rowMax;
    delete[] colMin;
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
