#include <iostream>

using namespace std;

int NOD(int x, int y) {
    while (x != y) {
        if (x > y) {
            x = x - y;
        }
        else {
            y = y - x;
        }
    }
    return x;
}

int main() {
    setlocale(LC_ALL, "ru");

    int y, x;

    cout << "Введите два числа для нахождения НОД: ";
    cin >> x >> y;
    cout << "НОД(" << x << ";" << y << ") = " << NOD(x, y) << endl;
    return 0;
}
