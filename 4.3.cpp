#include <iostream>
#include <cmath>
#include <ctime>// Функция преобразует значение типа time
using namespace std;

int main()
{
    int n; // объявление пременной 
    srand(time (NULL)); // srand используется для  генерации случайных чисел
cout <<"Введите размер массива: "; // вывод на консоль 
cin >> n;// считывание
int *array = new int [n]; // объявление массива и присвоение значения
for (int i = 0; i < n; i++)
{
    array[i] = rand()%25; // генератор случ. чисел
}
for (int i =0; i<n; i++)
{
    cout << array[i]<<" ";
}
int m = array[0];
for (int i = 0; i < n; i++)
{
    if (array[i] < m)
    {
        m=array[i];
    }
}

cout << endl<< m <<endl;
delete []array;
    return 0;
}
