#include <iostream>
#include <cmath>

using namespace std;

//Задание 2.

int perimetr (int, int, int, int);
float perimetr (float, float);
int perimetr (int);
float square (float, float, float);
float square (float, float);
int square (int);

int main()
{
 int a, b, c, d, e, h;
 double r, pi;
 cout << "Введите сторону a. a = ";
 cin >> a;
 cout << "Введите сторону b. b = ";
 cin >> b;
 cout << "Введите сторону c. c = ";
 cin >> c;
 cout << "Введите сторону d. d = ";
 cin >> d;
 cout << "Периметр трапеции = " << perimetr (a, b, c, d) << endl;
 cout << "Введите высоту трапеции. h = ";
 cin >> h;
 cout << "Площадь трапеции = " << square (a, b, h) << endl;

 cout << "Введите радиус круга. r = ";
 cin >> r;
 cout << "Введите значение П. П = ";
 cin >> pi;
 cout << "Периметр круга = " << perimetr (r, pi) << endl;
 cout << "Площадь круга = " << square (r, pi) << endl;

 cout << "Введите сторону квадрата. e = ";
 cin >> e;
 cout << "Периметр квадрата = " << perimetr (e) << endl;
 cout << "Площадь квадрата = " << square (e);
 return 0;
}

int perimetr (int a, int b, int c, int d)
{
    return a + b + c + d;
}

int perimetr (int e)
{
    return e+e+e+e;
}

float perimetr (float r, float pi)
{
    return r*2*pi;
}

float square (float a, float b, float h)
{
    return ((a+b)/2)*h;
}

float square (float r, float pi)
{
    return (r*r)*pi;
}

int square (int e)
{
    return e*e;
}