#include <iostream>
#include <cstdlib>
#include <climits>

using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(0)); // рандомное число по времени для заполнения двумерного массива
    int a, b;
    cout << "Введите размер массива: ";
    cin >> a >> b;
    int arr[a][b];                  // Создание двумерного массива
    int arrResMax[a], arrResMin[b]; // Создание одномерного массива макс. и мин.
    // заполнение массива рандомными числами
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            arr[i][j] = rand() % 1000 + 1;
        }
    }

    int max = INT_MIN, min = INT_MAX;
    // Вывод двумерного массива, нахождение максимального элемента в каждой строке
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr[i][j] << '\t';
            if (arr[i][j] >= max)
                max = arr[i][j];
        }
        cout << endl;
        arrResMax[i] = max;
        max = INT_MIN;
    }

    // Нахождение минимального элемента в каждом столбце
    for (int j = 0; j < b; j++)
    {
        for (int i = 0; i < a; i++)
        {
            if (arr[i][j] <= min)
                min = arr[i][j];
        }
        arrResMin[j] = min;
        min = INT_MAX;
    }
    // Вывод максимальных чисел по строкам
    cout << "Максимальные числа по строкам: ";
    for (int i = 0; i < a; i++)
    {
        cout << arrResMax[i] << ' ';
    }
    // Вывод минимальных чисел по столбцам
    cout << "\nМинимальные числа по столбцам: ";
    for (int i = 0; i < b; i++)
    {
        cout << arrResMin[i] << ' ';
    }

    cout << endl;
    return 0;
}