#include <iostream>
#include <cmath>
using namespace std;

void f(float a, float b) {
    float *pa = &b; // замена переменной
    float *pb = &a;
    cout << *pa << "  " << *pb << endl;
}
 int main() {
     float a, b;
     cout << "Введите числа a и b" << endl;
     cin >> a >> b;
     cout << "Результат: " << endl;
     f(a, b);
     return 0;
 }