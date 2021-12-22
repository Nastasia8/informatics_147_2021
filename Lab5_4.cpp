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

int NOK(int a, int b) {
    return a * b / NOD(a, b);
}

int main(){
    setlocale(LC_ALL, "ru");
    
    int y, x;

    cout << "Введите два числа для нахождения НОК: ";
    cin >> x >> y;
    cout << "НОК(" << x << ";" << y << ") = " << NOK(x, y) << endl;

    return 0;
}
