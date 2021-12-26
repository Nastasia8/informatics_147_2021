#include <iostream>
#include <cmath>

using namespace std;

double fact(int k) // (double fact вычисление факториала)  функция принимает значение и после расчета возвращает новое 
{
    if (k < 0) // если k < 0
        return 0; // возварщение знач 0
    if (k == 0) // если k == 0
        return 1; // возвращ . знач 1
    else // в противном случае следующая строчка
        return k * fact(k - 1); 
}

float summa (int n, int k, float sum) // объявление переменных
{
    cout << "Введите число элементов: ";
    cin >> n;
    k = 1; // присвоение значение 1
    while (n > k)
    {
        sum += (-1)*k*((5-k)/fact(k));
        k += 1; // присвоение значения с суммированием
    }
    cout << "Сумма числового ряда при n = " << n << " равна " << sum << '\n';
    return 0;
}

int main ()
{
    int n, k;
    float sum;
    summa (n, k, sum);
    return 0;
}