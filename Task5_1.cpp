// Гурьянов Илья, гр. 1/147.
// Задание №5, номер 1.
// Программа выводит на консоль первые 15 чисел заданной последовательности.

#include <iostream>
#include <Windows.h>

using namespace std;

int function(int n) // функция вычисления n-ого элемента последовательности
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 3;
    }
    if (n == 2)
    {
        return 5;
    }
    return function(n-1) + function(n-2) + function(n-3);
}

int main()
{
    // Локализация (отображение кириллицы в консоли)
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int k = 15;
    cout << "Первые 15 чисел ряда:" << endl;
    for (int i = 0; i < k; i ++)
    {
        cout << function(i);
        if (i + 1 != k) // чтобы на последней итерации не выводилась запятая
        {
            cout << ", ";
        }
    } 

    return 0;
}