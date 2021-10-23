#include <iostream>
#include <cmath>

using namespace std;

/// <summary>
/// Функция считает сумму четных чисел в заданом диапазоне
/// </summary>
/// <param name="i">Число a</param>
/// <param name="n">Число b</param>
/// <returns>Сумма чисел</returns>
int sumEvenNum(int i, int n) {
    int sum = 0;
    while (i <= n) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
        i++;
    }
    return sum;

}

int main()
{
    int i, n;
    cout << "Введите начальное число ";
    cin >> i;
    cout << "Введите конечное число ";
    cin >> n;
    cout << sumEvenNum(i, n) << endl;
    return 0;
}