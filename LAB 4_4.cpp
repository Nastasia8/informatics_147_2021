#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;


void fillArr(int *pArr, int n)
{
    for (int i = 0; i < n; i++) //заполнение массива
    {                           //рандомными числами
        pArr[i] = -25 + rand() % 132;
    }
}



void showArr(int *pArr, int n)
{
    cout << "Массив чисел: [";
    for (int i = 0; i < n; i++) //вывод массива
    {
        cout << pArr[i] << " | ";
    }
    cout << "]" << endl;
}



void MinArr(int *pArr, int n)
{
    int min = pArr[0];
    for (int i = 0; i < n; i++)  //поиск наименьшого числа 
    {                            //в массиве
        if (pArr[i] < min)
        {
            min = pArr[i];
        }
    }
    cout << "Наименьшее значение массива: " << min;
}

int main()
{
    int n;
    srand(time(NULL));
    cout << "Введите размер массива: ";
    cin >> n;
    cout << endl;
    int *array = new int[n];
    
    fillArr(array, n);
    
    showArr(array, n);
    MinArr(array, n);
    
    delete[] array;
    return 0;
}