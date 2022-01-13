#include <iostream>
#include <cmath>
using namespace std;

void proizvedenie(int n) {
    int pr = 1;
    while (n > 0) {
        pr = pr*(n % 10);
        n = n/10;
    }
    cout << pr;
}

int main() {
    int n;
    cout << "Введите шестизначное число" << endl;
    cin >> n;
    if (n < 100000 || n > 999999) { // || - или
        cout << "Это не шестизначное число" << endl;
    }
    else {
    cout << "Произведение = " << endl;
    proizvedenie(n);
    }
    return 0;
}
    