#include <iostream>
#include <cmath>

using namespace std;

int fact(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }
    else{
        return n * fact(n - 1);
    }
}
void tangle(int h) {
    for (int i = 1; i <= h; i++) {
        if (i == 1) {
            cout << "1" << endl;
        }
        for (int j = 0; j <= i; j++) {
            cout << (fact(i) / (fact(j) * fact(i - j))) << " ";
        }
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    int h;
    cout << "Введите высоту треугольника Паскаля:  ";
    cin >> h;
    tangle(h);
    return 0;
}