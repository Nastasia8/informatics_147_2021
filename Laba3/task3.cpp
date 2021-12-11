// Куличков Олег 1/147

#include <iostream>
#include <cmath>

using namespace std;

float Sumr(float);
float Prodr(float);

int main()
{
    float k;
    cout << "k = ";
    cin >> k;
    cout << "SumR = " << Sumr(k) << endl;   // находим сумму числового ряда и выводит ответ
    cout << "ProdR = " << Prodr(k) << endl; // находим произведение числового ряда и выводит ответ
    return 0;
}

// Функция суммы числового ряда
float Sumr(float k)
{
    float x = 0;
    for (float n = 1; n <= k; n++)
        x += 2 / ((2 * n + 1) * (2 * n + 3));
    return x;
}

// Функция произведения числового ряда
float Prodr(float k)
{
    float x = 1;
    for (float n = 1; n <= k; n++)
        x *= pow(-1, n - 1) + n;
    return x;
}
