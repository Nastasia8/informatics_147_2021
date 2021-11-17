#include <iostream>
#include <cmath>

using namespace std;

float summa (int, float);
float proizvedenie (int, float);

int main()
{
    int k;
    float vyraz_1, vyraz_2;
    cout << "Числововй ряд №1:" << '\n' << "2 / ((2*n+1)*(2*n+3))" << '\n';
    cout << '\n' << "Введите значение k: ";
    cin >> k;
    summa (k, vyraz_1);
    cout << '\n' << "Числововй ряд №2:" << '\n' << "((-1)^(n-1)) + n" << '\n';
    cout << '\n' << "Введите значение k: ";
    cin >> k;
    proizvedenie (k, vyraz_2);
    return 0;
} 

float summa (int k, float vyraz_1)
{

    vyraz_1 = 0;
    for (float n = 1; n <= k; n++)
    {
        vyraz_1 += 2 / ((2 * n + 1) * (2 * n + 3));
    }
    cout << "Сумма числового ряда №1 при n от 1 до " << k << " равна " << vyraz_1 << '\n';
    return 0;
}

float proizvedenie (int k, float vyraz_2)

{

    vyraz_2 = 1;
    for (float n = 1; n <= k; n++)
    {
        vyraz_2 *= pow(-1,n-1) + n;
    }
    cout << "Произведение числового ряда №2 при n от 1 до " << k << " равно " << vyraz_2;
    return 0;
}