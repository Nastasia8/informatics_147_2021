#include<iostream>
using namespace std;

int factorial(int n)
{
    int i = 0, x = 1;
    for (i = 1; i <= n; i++)
    {
        x *= i;
    }

    return x;
}

int main()
{
    int h = 0, i = 0, k = 0;
    cout << "Введите высоту треугольника " << endl;
    cin >> h;
    cout << endl;
    cout << "1" << endl;
    for (i = 1; i <= h; i++)
    {
        for (k = 0; k <= i; k++){
            cout << (factorial(i) / (factorial(k) * factorial(i - k))) << " ";
        }
    cout << endl;
    }
}
