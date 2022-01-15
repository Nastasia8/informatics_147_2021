#include <iostream>
#include <cmath>
using namespace std;

void korni(int D, int x, int y, int z) {
    float k, k1, k2;
    D = y*y - 4*x*z;
    cout << "Дискриминант = " << D << endl;
    if (D < 0) {
        cout << "Корней нет" << endl;
    }
    else if (D == 0) {
        k = (-y)/(2*x);
        cout << "k = " << k << endl;
    }
    else if (D > 0) {
        k1 = (-y + sqrt(D))/(2*x);
        k2 = (-y - sqrt(D))/(2*x);
        cout << "k1 = " << k1 << ", " << "k2 = " << k2 << endl;
    }
}

int main() {
    int D, x, y, z;
    cout << "Введите x, y, z" << endl;
    cin >> x >> y >> z;
    korni(D, x, y, z);
    return 0;
}
    