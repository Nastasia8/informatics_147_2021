#include <iostream>
#include <cmath>
using namespace std;

int factorial (int k)
{
    int i = 1;
    int fact = 1;
    while (i<=k)
    {
        fact=fact*i;
        i+=1;
    }
    return fact;
}


int main ()
{
    int k, n;
    float sum;
    k=1;
    cout << "Введите число элементов ряда " << endl;
    cin >> n;
    sum = 0;
    while (n>=k)
    {
        sum += (-1)*k*float(5-k)/factorial(k);
        cout << sum << endl;
        k+=1;
    }
    cout << "Сумма элементов ряда равна " << sum << endl;
    return 0;
}
