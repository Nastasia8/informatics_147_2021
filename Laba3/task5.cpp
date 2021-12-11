// Куличков Олег 1/147

#include <iostream>
#include <cmath>

using namespace std;

// Если есть ровно 1 корень, то вычисляется по формуле
float F1(int x, int y, float D)
{
    return (-y) / (2 * x);
}

// Если есть 2 корня, то вычисляется по формуле
float F12(int x, int y, float D)
{
    float f1 = ((-y) + sqrt(D)) / (2 * x);
    cout << "Первый корень равен: " << f1 << endl;
    float f2 = ((-y) - sqrt(D)) / (2 * x);
    cout << "Второй корень равен: " << f2 << endl;
    return 0;
}

float Discr(int x, int y, int z)
{
    float D = y * y - 4 * x * z;
    if (D < 0)
        cout << "Корней нет\n";
    else if (D == 0)
        cout << "Корень равен: " << F1(x, y, D) << endl;
    else
        F12(x, y, D);
    return 0;
}

int main()
{
    setlocale(0, "");
    int x, y, z;
    cout << "Введите x, y, z через пробел: ";
    cin >> x >> y >> z;
    Discr(x, y, z);
    return 0;
}
