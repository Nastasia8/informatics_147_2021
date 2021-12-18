#include <iostream>
#include <cmath>

using namespace std;

double fact(int k)
{
    if(k < 0) // если пользователь ввел отрицательное число
        return 0; // возвращаем ноль
    if (k == 0) // если пользователь ввел ноль,
        return 1; // возвращаем факториал от нуля 1
    else // Во всех остальных случаях
        return k * fact(k - 1); // делаем рекурсию.
}

float summa (int n, int k, float sum)
{
    while (n > k)
    {
        sum += (-1)*k*((5-k)/fact(k));
        k += 1;
    }
    cout << "Сумма числового ряда при n = " << n << " равна " << sum << '\n';
    return 0;
}

int main ()
{
    int k = 1, n;
    float sum;
    cout << "Введите число элементов: ";
    cin >> n;
    cout << endl;
    summa (n, k, sum);
    return 0;
}