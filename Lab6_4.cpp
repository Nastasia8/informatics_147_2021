#include <iostream>

using namespace std;

int fact(int n);
float sum(int n);

int main() {
    setlocale(LC_ALL, "ru");
    int n;
    cout << "Введите кол-во повторений(n): ";
    cin >> n;
    cout << "Сумма ряда: " << sum(n) << endl;
    return 0;
}

int fact(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }
    else {
        return n * fact(n - 1);
    }
}

float sum(int n) {
    float klopik = 0;
    for (float i = 1; i <= n; i++) {
        klopik += (-1) * i * (5 - i) / fact(i);
    }
    return klopik;
}