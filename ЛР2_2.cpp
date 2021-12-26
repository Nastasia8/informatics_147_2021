#include <iostream>
#include <cmath>

using namespace std;

const float PI = 3.14;

void trapeze(int a, int b, int c, int d) { // трапеция
    cout << "Perimetr trapeze = " << a + b + c + d << endl; // периметр
}

void trapeze(int a, int b, int h) {
    cout << "Square trapeze = " <<(a + b) / 2 * h<<endl; // площадь
}

void circle(int r) { // круг
    cout << "Perimetr circle = " << 2 * PI * r << endl;
    cout << "Square circle = " << PI * r * r << endl;
}


void square(int a) { //квадрат
    cout << "Perimetr square = " << a * 4 << endl;
    cout << "Square square = " << a * a << endl;
}

int main() {
    int type, a, b, c, d, h, r;

    cout << "Enter type of figure (1 - sqaure, 2 - trapeze, 3 - circle)" << endl;
    cin >> type;
    switch (type) {
        case (1):
            cout <<"Enter square side: = ";
            cin >> a;
            square(a);
            break;
        case (2):
            cout << "Enter trapeze sides and height: = ";
            cin >> a >> b >> c >> d >> h;
            trapeze(a, b, h);
            trapeze(a, b, c, d);
            break;
        case (3):
            cout <<"Enter circle radius: = ";
            cin >> r;
            circle(r);
           break;
        default:
            cout << "Restart the program and enter correct figure type";
    }
    return 0;
}
