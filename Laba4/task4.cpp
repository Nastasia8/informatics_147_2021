/*Задание 4*/
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
// модификация 3 задачи 
// Функция заполнения элементов массива ↓↓↓
void fillArray(int *pArr, int size)
{
    for (int i = 0; i < size; i++)
    {
        pArr[i] = rand() % 25;
    }
}

// Функция отображения элементов массива ↓↓↓
void show(int *pArr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << pArr[i] << " ";
    }
}

// Функция нахождения минимального массива ↓↓↓
void findMin(int *pArr, int size)
{
    int m = pArr[0];
    for (int i = 0; i < size; i++)
    {
        if (pArr[i] < m)
        {
            m = pArr[i];
        }
    }
    cout << endl
         << m << endl;
}

int main()
{
    int n;
    srand(time(NULL));
    cout << "Введите размер массива: ";
    cin >> n;
    int *array = new int[n];
    fillArray(array, n);
    show(array, n);
    findMin(array, n);
    delete[] array;
    return 0;
}