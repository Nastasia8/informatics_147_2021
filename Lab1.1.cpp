// Гурьянов Илья, гр. 1/147.
// Лаб. работа №1, задача A.
// Программа вычисляет значение функции y(x). Значение переменной x изменяется шагом в пределах [x начальное; x конечное].

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x_n = 0.2;
    float x_k = 2.2;
    float x_step = 0.4;
    float y;
    for (float i = x_n; i <= x_k; i += x_step)
    {
        if (abs(i) >= 1)
        {
            y = pow(1.2, i) - pow(i, 1.2);
        }
        else
        {
            y = acos(i);
        }
        cout << "y(" << i << ") = " << y << endl;
    }
    return 0;
}