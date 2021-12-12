// Гурьянов Илья, гр. 1/147.
// Задание №3, номер 3.
// Программа вычисляет сумму первого числового ряда и произведение второго числового ряда. 

#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

// Функция вычисления суммы первого числового ряда.
float CalculateSum(int k, int n)
{
    float Sum = 0;
    for (float i = n; i <= k; i++)
    {
        Sum += 2/((2*i + 1)*(2*i + 3));
    }
    return Sum;
}

// Функция вычисления произведения второго числового ряда.
float CalculateProduct(int k, int n)
{
    float Product = 1;
    for (int i = n; i <= k; i++)
    {
        Product *= pow(-1, i-1) + i;
    }
    return Product;
}

int main()
{
    // Локализация (отображение кириллицы в консоли)
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int k;
    int n = 1;
    cout << "Введите k (>= 1): ";
    cin >> k;
    float Sum = CalculateSum(k, n);
    float Product = CalculateProduct(k, n);
    cout << "Сумма первого числового ряда = " << Sum << endl;
    cout << "Произведение второго числового ряда = " << Product << endl;

    return 0;
}