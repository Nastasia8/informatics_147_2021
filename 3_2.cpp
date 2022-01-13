#include <iostream>
#include <cmath>
using namespace std;

float S(int, int, float, int);
int main() {
    int n, m;
    float P;
    int I = 15;
    cout << "Введите сумму вклада(P), срок депозита(n) и количество начислений в год (1, 2 или 4)" << endl; //1 - если период начисления 12 месяцев, 2 - если период 6 мес, 4 - если 3 мес
    cin >> P;
    cin >> n;
    cin >> m;
    cout << "Стоимость (S) = " << S(n, m, P, I) << endl;
    return 0;
}
float S(int n, int m, float P, int I) {
    return P*pow((1 + (I/100.0)/(m/12.0)),m/12.0*n);
}
    