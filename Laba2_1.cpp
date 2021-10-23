#include <iostream>
#include <cmath>
using namespace std;

//Задание 1.

double LenghtVec (int, int, int);

int main()
{
    int x, y, z, i;
    double a[] = {1, 3, 5};
    double b[3];
    double resScal=0;
    double resVect[3];

    cout << "\n Введите Х: ";
    cin >> x;
 
    cout << "\n Введите Y: ";
    cin >> y;
 
    cout << "\n Введите Z: ";
    cin >> z;
 
    cout << "\n Вы ввели следующие числа: x = " << x << "; y = " << y << "; z = " << z;
 
    cout << "\n Длина вектора a = {" << x << ", " << y << ", " << z << "} = " << LenghtVec (x, y, z) << endl; // длина первого вектора a


    cout << "\n Единичный вектор b, соответствующий вектору a = {" << x << ", " << y << ", " << z << "}: b = {" << x / LenghtVec (x, y, z) << "; " << y / LenghtVec (x, y, z) << "; " << z / LenghtVec (x, y, z) << "}" << endl;


    cout << "\n Введите координаты вектора b через пробел. b = "; // ввод значений второго вектора b
    for (i=0; i < 3; i++)
    cin >> b[i];
    
    for (i=0; i < 3; i++)
    resScal+=a[i]*b[i]; // Вычисление скалярного произведения

    cout << "\n Cкалярное произведение векторов: a.b = " << resScal << endl;

    for(i=0; i < 3; i++)
    resVect[i] = a[(i+1) % 3] * b[(i+2) % 3] - a[(i+2) % 3] * b[(i+1) % 3]; //Вычисление векторного произведения

    cout << "\n Векторное произведение векторов: [a.b] = ";
    for(i=0; i < 3; i++)
    cout << " " << resVect[i];
    cout << endl;
    return 0;
}

double LenghtVec (int x, int y, int z)
{
    return sqrt(x*x + y*y + z*z);
}