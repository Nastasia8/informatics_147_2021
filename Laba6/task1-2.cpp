/*Задание 1
    Модифицировать матрицу
*/
#include <iostream>
#include <ctime>
/*2 способ преобразования матрицы(рандомно)*/
using namespace std;

void Func(int n, int m)
{
    srand(time(0)); // Рандомно заполняются числами в матрицу
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = rand() % 100; // рандомные числа в промежутке [0, 99]
        }
    }
    cout << "\nВаша матрица\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }

    cout << endl
         << "Переобразование матрицы\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    cout << "Введите размер массива через пробел (NxM): ";
    cin >> n >> m;
    Func(n, m);
    return 0;
}