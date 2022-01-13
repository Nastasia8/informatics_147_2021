#include <iostream>
#include <cmath>
using namespace std;

void summ(float x, float y) {
    cout << "сумма = " << x + y << endl;
}
void proiz(float x, float y) {
    cout << "произведение = " << x*y << endl;
}
void del(float x, float y) {
    cout << "частное = " << x/y << endl;
}
void vich(float x, float y) {
    cout << "разность = " << x-y << endl;
}
void stepen(float x, float y) {
    cout << "x в степени у = " << pow(x, y) << endl;
}
int main() {
    float x, y; 
    int num;
    cout << "Введите числа x y" << endl;
    cin >> x >> y;
    cout << "Введите номер операции (1 - сумма, 2 - произведение, 3 - деление, 4 - вычитание, 5 - возведение x в степень y)" << endl;
    cin >> num;
    switch (num) {
        case(1):
            summ(x, y);
            break;
        case(2):
            proiz(x, y);
            break;
        case(3):
            del(x, y);
            break;
        case(4):
            vich(x, y);
            break;
        case(5):
            stepen(x, y);
            break;
    }
    return 0;
}
    