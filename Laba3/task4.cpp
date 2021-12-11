// Куличков Олег 1/147

#include <iostream>

using namespace std;

// Вычисление суммы четных чисел
int Sum(int a, int b)
{
    int c = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
            c += i;
        else
            continue;
    }
    return c;
}

int main()
{
    setlocale(0, "");
    int a, b, sum;
    cout << "Введите диапазон: "; // Вводим диапазон
    cin >> a >> b;
    if (b <= a)
        cout << "Неправильно введен диапазон!!!\n"; // Проверяем на правильность введенного диапазона
    else
        cout << "Результат: " << Sum(a, b) << endl;
    return 0;
}
