#include <iostream>
#include <cmath>

using namespace std;

//трапеция:
void trapeze(int a, int b, int c, int d) { 
    cout << "периметр трапеции = " << a + b + c + d << endl;
}

void trapeze(int a, int b, int h) 
{
    cout << "площадь трапеции = " << (a + b) / 2 * h << endl;
}

//круг:
const float PI = 3.14;
void circle(int r) 
{
    cout << "периметр круга = " << 2 * PI * r << endl;
    cout << "площадь круга = " << PI * r * r << endl;
}

//квадрат:
void square(int a) 
{
    cout << "периметр квадрата = " << a * 4 << endl;
    cout << "площадь квадрата = " << a * a << endl;
}

int main() {
    int type, a, b, c, d, h, r;

    cout << "Введите тип фигуры (1 - трапеция, 2 - круг, 3 - квадрат)" << endl;
    cin >> type;
    switch (type) { //switch - условный оператор ветвления
        case (1): //case - проверка значения на соответствие
            cout << "Введите значения оснований трапеции, боковые стороны а затем высоту: = ";
            cin >> a >> b >> c >> d >> h;
            trapeze(a, b, h);
            trapeze(a, b, c, d);
            break;
        case (2):
            cout <<"Введите радиус круга: = ";
            cin >> r;
            circle(r);
            break;
        case (3):
            cout <<"Введите сторону квадрата: = ";
            cin >> a;
            square(a);
           break;
    }
    return 0;
}