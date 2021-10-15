// Гурьянов Илья, гр. 1/147.
// Лаб. работа №1, задача B.
// Программа вычисляет значение функции y(x) от пяти вариантов значений переменной x.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float arr[] = {0.1, 0.9, 1.2, 1.5, 2.3};
    int size = sizeof(arr)/sizeof(arr[0]);
    float y;
    for (int i = 0; i < size; i++)
    {
        if (abs(arr[i]) >= 1)
        {
            y = pow(1.2, arr[i]) - pow(arr[i], 1.2);
        }
        else
        {
            y = acos(arr[i]);
        }
        cout << "y(" << arr[i] << ") = " << fixed << setprecision(5) << y << endl;
        cout.unsetf(ios::fixed);
    }
    return 0;
}