#include <iostream>
#include <cmath>

using namespace std;

float reshenie (int, int, int);

int main()
{
    int x, y, z;
    cout << "Введите переменные в порядке x y z: " << '\n';
    cin >> x >> y >> z;
    reshenie (x, y, z);
}

float reshenie (int x, int y, int z)
{
    float f1, f2, D;
    D = (y*y) - (4*x*z);
    if (D < 0)
    {
        cout << "Корней не существует" << endl;
    }
    else if (D == 0)
    {
        if (x != 0)
        {
            f1 = (-y)/(2*x);
            cout << '\n' << "Дискриминант = 0" << '\n' << "Корень уравнения:" << '\n' << "f1 = " << f1 << endl;
        }
        else
        {
            cout << "Ошибка. Деление на 0 невозможно" << endl;
        }
    }
    else if (D > 0)
    {
        if (x != 0)
        {
            f1 = (-y + sqrt(D))/(2*x);
            f2 = (-y - sqrt(D))/(2*x);
            cout << '\n' << "Дискриминант = " << D << '\n' << "Корни уравнения:" << '\n' << "f1 = " << f1 << '\n' << "f2 = " << f2 << endl;
        }
        else
        {
            cout << "Ошибка. Деление на 0 невозможно" << endl;
        }
    }
    return 0;
}