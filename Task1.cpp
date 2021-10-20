// Куличков Олег 1/147

#include <iostream>
#include <cmath>

using namespace std;

double AB(int x, int y, int z);
double Scalar(int x2, int y2, int z2);
double Vector();
const int x = 1, y = 5, z = 3;
int x2, y2, z2;

int main()
{
    setlocale(0, "");
    double len_vect = AB(x, y, z); //присваиваем в len_vect
    cout << "1. Длина вектора |a| = " << len_vect << endl
         << "2. Единичный вектор b = (" << x / len_vect << "; " << y / len_vect << "; " << z / len_vect << ")" << endl;

    cout << "Введите координаты x, y, z: ";
    cin >> x2 >> y2 >> z2;
    cout << "3. Скалярное произведение векторов: " << Scalar(x2, y2, z2) << endl
         << "4. Векторное произведение векторов: " << Vector() << endl;
    return 0;
}

// находим длину вектора
double AB(int x, int y, int z)
{
    return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}
// находим скалярное произведение векторов
double Scalar(int x2, int y2, int z2)
{
    return x * x2 + y * y2 + z * z2;
}
// находим векторное произведение векторов
double Vector()
{
    return sqrt(pow(y * z2 - z * y2, 2) - pow(x * z2 - z * x2, 2) + pow(x * y2 - y * x2, 2));
}
