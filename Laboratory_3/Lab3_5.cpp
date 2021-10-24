//Програма просчитывает корни квадратного уравнения
#include <iostream>
#include <cmath>

using namespace std;
/// <summary>
/// Функция просчитывает дискриминант уравнения
/// </summary>
/// <param name="x">Число а</param>
/// <param name="y">Число b</param>
/// <param name="z">Число с</param>
/// <returns>Дискриминант</returns>
float calculateDiscriminant(float x, float y, float z) {
    return pow(y, 2) - 4 * x * z;
}
/// <summary>
/// Функция считает корни квадратного уравнения
/// </summary>
/// <param name="x">Число а</param>
/// <param name="y">Число b</param>
/// <param name="z">Число с</param>
void calcualteRoot(float x, float y, float z) {
    float d;
    d = calculateDiscriminant(x, y, z);
    if (d < 0) {
        cout << "Корней не существует!" << endl;
    }
    else if (d == 0) {
        cout << "Корень равен " << (-y / (2 * x)) << endl;
    }
    else {
        cout << "Первый корень равен " << ((-y + sqrt(d)) / (2 * x)) << endl;
        cout << "Второй корень равен " << ((-y - sqrt(d)) / (2 * x)) << endl;
    }
}

int main()
{
    float x, y, z;
    cout << "Введите a, b и z " << endl;
    cin >> x >> y >> z;
    calcualteRoot(x, y, z);
}