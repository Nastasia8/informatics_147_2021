#include <iostream>
#include <cmath>
using namespace std;

void TPerimetr (float a, float b, float c, float d)
{
    cout << "Периметр трапеции равен " << a+b+c+d << endl;
}

void TSquare (float a, float b, float h)
{
    cout << "Площадь трапеции равна " << ((a+b)/2)*h << endl;
}

void SPerimetr (float pi, float r)
{
    cout << "Периметр круга равен " << 2*pi*r << endl;
}

void SSquare (float pi, float r)
{
    cout << "Площадь круга равна " << pi*pow(r,2) << endl;
}

void KPerimetr (float A)
{
    cout << "Периметр квадрата равен " << 4*A << endl;
}

void KSquare (float A)
{
    cout << "Площадь крадрата равна " << pow(A, 2)<<endl;
}

int main()
{
    float pi = 3.1415;
    float a, b, c, d, h, r, A;
    cout << "Введите стороны трапеции через пробел "<<endl;
    cin >> a >> b >> c >> d;
    cout << "Введите высоту трапеции h "<<endl;
    cin >> h;
    cout << "Введите радиус круга "<<endl;
    cin >> r;
    cout << "Введите сторону квадрата "<<endl;
    cin >> A;
    TPerimetr (a,b,c,d);
    TSquare (a, b, h);
    SPerimetr (pi, r);
    SSquare (pi, r);
    KPerimetr (A);
    KSquare (A);
    return 0;
}