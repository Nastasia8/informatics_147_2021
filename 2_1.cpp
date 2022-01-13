#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    //вектор а:
    int x = 1;
    int y = 5;
    int z = 3;
    float length = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    cout << "длина вектора а = " << length << endl;
    //единичнй вектор b:
    float x0 = x/length;
    float y0 = y/length;
    float z0 = z/length;
    cout << "координаты единичного вектора b: {" << x0 << ", " << y0 << ", " << z0 << "}" << endl;
    //скалярное и векторное произведение:
    float x2, y2, z2;
    cout << "Введите координаты вектора c через пробел: ";
    cin >> x2 >> y2 >> z2; //cin - ввод
    cout << "Координаты вектора c: {" << x2 << ", " << y2 << ", " << z2 << "}" << endl;
    float scal_pr = x*x2 + y*y2 + z*z2;
    cout << "скалярное произведение а и с = " << scal_pr << endl;
    float vector_pr = sqrt(pow(y*z2-z*y2,2)+pow(x*z2-z*x2,2)+pow(x*y2-y*x2,2));;
    cout << "векторное произведение а и с: " << vector_pr << endl;
    return 0;
}