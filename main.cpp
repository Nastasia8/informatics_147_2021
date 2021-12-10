#include <iostream>
#include <cmath>
using namespace std;

float lenght(float x, float y, float z)
{
    float lenght = sqrt (pow(x,2) + pow(y,2) + pow(z,2));
    cout << "Длина вектора a равна " << lenght << endl;
    return lenght;
}

void bvector (float x1, float y1, float z1, lenght1)
{
    float xed = x1/lenght1;
    float yed = y1/lenght1;
    float zed = z1/lenght1;
    cout << "Координаты единичного вектора b: {" << xed << ", " << yed << ", " << zed << "}" << endl;
}

void sklr (float x1, float x2, float y1, float y2, float z1, float z2)
{
    float sklr=x1*x2 + y1*y2 + z1*z2;
    cout << "Скалярное произведение векторов a и c равно " << sklr << endl;
}

void vector (float x1, float x2, float y1, float y2, float z1, float z2)
{
    float ivector = y1*z2 - y2*z1;
    float jvector = -1*(x1*z2 - x2*z1);
    float kvector = x1*y2 - x2*y1;
    cout << "Векторное произведение a и c равно {" <<  ivector << ", " << jvector << ", " << kvector << "}" << endl;
}

int main ()
{
    const float x1 = 1;
    const float y1 = 5;
    const float z1 = 3;
    float lenght1;
    lenght1 = lenght(x1, y1, z1);
    float x2;
    float y2;
    float z2;
    cout << "Введите координаты вектора c через пробел: ";
    cin >> x2 >> y2 >> z2;
    cout << "Координаты вектора c {" << x2 << ", " << y2 << ", " << z2 << "}" << endl;
    bvector(x1, y1, z1, lenght1);
    sklr (x1, y1, z1, x2, y2, z2);
    vector (x1, y1, z1, x2, y2, z2);
    return 0;
}