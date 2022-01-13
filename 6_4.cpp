#include <iostream>
#include <cmath>
using namespace std;

int factorial(int k) //вычисление факториала
{
    int fact = 1;
    int i; //счетчик в цикле
    for(i = 2; i <= k; i++) {
    fact = fact * i;
    }
    return fact;
}

float summa(int n, int k, float sum) 
{
    cout << "Введите число элементов: ";
    cin >> n;
    k = 1; 
    while (n > k)
    {
        sum += (-1)*k*((5-k)/factorial(k));
        k += 1; 
    }
    cout << "Сумма ряда = " << sum << endl;
    return 0;
}

int main()
{
    int n, k;
    float sum;
    summa (n, k, sum);
    return 0;
}