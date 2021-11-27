// Гурьянов Илья, гр. 1/147.
// Задание №6, номер 1.
// В программе целочисленная матрица (кол-во строк и столбцов задаётся пользователем), заполненная рандомными числами, модифицируется по определенному алгоритму (отзеркаливается).
// И старая, и новая модифицированная матрица выводятся на консоль.

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{    
    srand(time(0)); // устанавливаем значение системных часов в качестве стартового числа (точки отсчёта) для функции rand

    int rows; // rows - строки
    int columns; // columns - столбцы
    cout << "Input the number of rows and columns (with a space between): ";
    cin >> rows >> columns;
    int Matrix[rows][columns]; // создаём двумерный массив (изначальная матрица)
    
    for (int count_row = 0; count_row < rows; count_row ++) // заполняем матрицу рандомными числами
    {
        for (int count_column = 0; count_column < columns; count_column ++)
        {
            Matrix[count_row][count_column] = rand() % 100; // генерация чисел в отрезке [0; 99] (т.е. остаток от деления 'числа в секундах')  //  a + rand()%(b-a + 1) - выражение для получения чисел от a до b
        }
    }

    int MatrixModified[rows][columns]; // создаём модифицированную матрицу
    int inverted_count_column; // обратный счётчик
    for (int count_row = 0; count_row < rows; count_row ++) // отзеркаливаем каждую строку, т.е. в каждую строку новой матрицы записываются задом наперёд элементы строки изначальной матрицы 
    {
        inverted_count_column = columns;
        for (int count_column = 0; count_column < columns; count_column ++)
        {
            inverted_count_column -= 1;
            MatrixModified[count_row][count_column] = Matrix[count_row][inverted_count_column]; // первому эл-ту модиф. матрицы присваивается последний эл-т изнач. матрицы, второму - предпоследний и т.д.
        }
    }

    // Вывод двух матриц построчно
    for (int count_row = 0; count_row < rows; count_row ++)
    {
        for (int count_column = 0; count_column < columns; count_column ++) // вывод изначальной матрицы
        {
            cout << setw(3) << left << Matrix[count_row][count_column];
            if (count_column + 1 != columns) // на последней итерации не должны выводиться пробелы
            {
                cout << "  ";
            }
        }
        if (count_row == (rows - 1) / 2) // условие, чтобы стрелочка выводилась примерно посередине между матрицами
        {
            cout << "   ->    "; // стрелочка между матрицами
        }
        else
        {
            cout << "         ";
        }
        for (int count_column = 0; count_column < columns; count_column ++) // вывод модифицированной матрицы
        {
            cout << setw(3) << left << MatrixModified[count_row][count_column] << "  ";
        }
        cout << endl;
    }

    return 0;
}