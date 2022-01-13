#include <iostream>
#include <cmath>
using namespace std;

float sum(int k) {
    float sum = 0;
    for (int n = 1; n <= k; n++)
    {
        sum += 2.0/((2.0*n + 1.0)*(2.0*n + 3.0));
    }
    return sum;
}
float pr(int k) {
    float pr = 1;
    for (int n = 1; n <= k; n++)
    {
        pr = pr*(pow(-1.0, n - 1.0) + n);
    }
    return pr;
}

int main() {
int k;
cout << "Введите k" << endl;
cin >> k;
cout << "Сумма = " << sum(k) << endl;
cout << "Произведение = " << pr(k) << endl;
return 0;
}

    