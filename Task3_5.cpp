// Гурьянов Илья, гр. 1/147.
// Задание №3, номер 5.
// Программа вычисляет корни квадратного уравнения (через дискриминант).

#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

float calculateDiscriminant(float x, float y, float z)
{
    return pow(y, 2) - 4*x*z;
}

void calculateRoot(float x, float y, float z)
{
    float d = calculateDiscriminant(x, y, z);
    if (d < 0)
    {
        cout << "Корней нет." << endl;
    }
    else if (d == 0)
    {
        cout << "Корень = " << -y / (2*x) << endl;
    }
    else
    {
        cout << "1-ый корень = " << (-y + sqrt(d)) / (2*x) << endl;
        cout << "2-ой корень = " << (-y - sqrt(d)) / (2*x) << endl;
    }
}

int main()
{
    // Локализация (отображение кириллицы в консоли)
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    float x, y, z;
    cout << "Введите коэффициенты a, b, c квадратного уравнения (через пробел по порядку): ";
    cin >> x >> y >> z;
    calculateRoot(x, y, z);

    return 0;
}