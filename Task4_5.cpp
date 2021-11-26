// Гурьянов Илья, гр. 1/147.
// Задание №4, номер 5.
// В программе объявляется и заполняется двумерный динамический массив случайными числами. Осуществляется поиск минимального значения в каждой строке двумерного массива.

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

void FindMin(int **pArray, int rows, int columns, int *pArrayRowsMin) // функция, выполняющая поиск минимального значения в каждой строке двумерного динамического массива
{
    int RowMin;
    for (int count_row = 0; count_row < rows; count_row ++)
    {
        RowMin = pArray[count_row][0];
        for (int count_column = 0; count_column < columns; count_column ++)
        {
            if (pArray[count_row][count_column] < RowMin)
            {
                RowMin = pArray[count_row][count_column];
            }
        }
        pArrayRowsMin[count_row] = RowMin; // каждое найденное минимальное значение в каждой строке записывается в одномерный динамический массив
    }
    
    // Вывод найденных минимальных значений в каждой строке, записанных в одномерный динамический массив
    for (int count_row = 0; count_row < rows; count_row ++)
    {
        cout << "Minimum value in " <<  count_row + 1 << " row: " << pArrayRowsMin[count_row] << endl;
    }
}

int main()
{
    srand(time(0)); // устанавливаем значение системных часов в качестве стартового числа (точки отсчёта) для функции rand

    int rows; // rows - строки
    int columns; // columns - столцы
    cout << "Input the number of rows and columns (with a space between): ";
    cin >> rows >> columns;
    
    // Объявление двумерного динамического массива из 'rows' строк и 'columns' столбцов
    int **pArray = new int *[rows]; // **pArray - указатель второго порядка, ссылающийся на массив указателей int *[rows]  //  (задаём 'rows' строк в массиве)
    for (int count = 0; count < rows; count ++)
    {
        pArray[count] = new int [columns]; // каждой строке объявленного массива выделяется память под 'columns' элементов  //  (и задаём 'columns' столбцов в массиве)
        // pArray – массив указателей на выделенный участок памяти под массив целых чисел типа int
    }
    
    // Заполнение двумерного массива случайными числами
    for (int count_row = 0; count_row < rows; count_row ++)
    {
        for (int count_column = 0; count_column < columns; count_column ++)
        {
            pArray[count_row][count_column] = rand() % 100 + 1; // генерация чисел в отрезке [1; 100] (т.е. остаток от деления 'числа в секундах' + 1)  //  a + rand()%(b-a + 1) - выражение для получения чисел от a до b
        }
    }
    
    // Вывод двумерного массива
    cout << "Array (" << rows << "x" << columns << "):" << endl;
    for (int count_row = 0; count_row < rows; count_row ++)
    {
        for (int count_column = 0; count_column < columns; count_column ++)
            cout << setw(4) << left << pArray[count_row][count_column] << "\t";
        cout << endl;
    }

    int *pArrayRowsMin = new int[rows]; // создание одномерного динамического массива (размер - количество строк), куда будем записывать минимальные значения в каждой строке
    FindMin(pArray, rows, columns, pArrayRowsMin); // вызов функции для поиска минимального значения в каждой строке двумерного массива

    return 0;
}