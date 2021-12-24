#include <iostream>
#include <cmath>

using namespace std;

double fact(int k)
{
    if (k < 0) 
        return 0; 
    if (k == 0) 
        return 1; 
    else
        return k * fact(k - 1);
}

float summa (int n, int k, float sum)
{
    cout << "Введите число элементов: ";
    cin >> n;
    k = 1;
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
    int n, k;
    float sum;
    summa (n, k, sum);
    return 0;
}
