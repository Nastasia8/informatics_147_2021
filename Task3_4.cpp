// Гурьянов Илья, гр. 1/147.
// Задание №3, номер 4.
// Программа вычисляет сумму чётных чисел, которые входят в диапазон, введённый пользователем.

#include <iostream>
#include <Windows.h>

using namespace std;

void SumEvenNumbers(int a, int b)
{
    int Sum = 0;
    for (int i = a; i <= b; i ++)
    {
        if (i % 2 == 0)
        {
            Sum += i;
        }
    }
    cout << "Сумма чётных чисел в диапазоне [" << a << "; " << b << "] равна " << Sum << endl;
}

int main()
{
    // Локализация (отображение кириллицы в консоли)
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int a, b;
    cout << "Введите диапазон [a; b] (через пробел): ";
    cin >> a >> b;
    cout << "Введён диапазон [" << a << "; " << b << "]." << endl;
    SumEvenNumbers(a, b);

    return 0;
}