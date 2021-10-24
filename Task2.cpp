#include <iostream>
#include <cmath>

using namespace std;
float Perimetr_Trap(float, float, float, float);
float Perimetr_Circle(float);
float Perimetr_Square(float);
float Square_Trap(float, float, float, float);
float Square_Circle(float);
float Square_Square(float);
const float Pi = 3.14;

int main()
{
    setlocale(0, "");
    float a, b, c, d;
    cout << "1. Введите стороны трапеции a, b, c, d: ";
    cin >> a >> b >> c >> d;
    cout << "\tПериметр трапеции: " << Perimetr_Trap(a, b, c, d) << endl
         << "\tПлощадь трапеции: " << Square_Trap(a, b, c, d) << endl;
    float R;
    cout << "2. Введите радиус круга R: ";
    cin >> R;
    cout << "\tПериметр круга: " << Perimetr_Circle(R) << endl
         << "\tПлощадь круга: " << Square_Circle(R) << endl;

    cout << "3. Введите сторону квадрата a: ";
    cin >> a;
    cout << "\tПериметр квадрата: " << Perimetr_Square(a) << endl
         << "\tПлощадь квадрата: " << Square_Square(a) << endl;
    return 0;
}

// Периметр Трапеции
float Perimetr_Trap(float a, float b, float c, float d)
{
    return a + b + c + d;
}

// Периметр Круга
float Perimetr_Circle(float R)
{
    return 2 * Pi * R;
}

// Периметр Квадрата
float Perimetr_Square(float a)
{
    return 4 * a;
}

// Площадь Трапеции
float Square_Trap(float a, float b, float c, float d)
{
    return (a + b) / 2 * sqrt(c * c - pow((pow(b - a, 2) + c * c - d * d) / (2 * (b - a)), 2));
}

// Площадь Круга
float Square_Circle(float R)
{
    return Pi * R * R;
}

// Площадь Квадрата
float Square_Square(float a)
{
    return a * a;
}