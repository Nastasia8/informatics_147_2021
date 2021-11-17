#include <iostream>
#include <cmath>

using namespace std;

double stoimost (int, double, double, float, int, double, double);

int main()
{
    double s, x, y, k, p; //s - стоимость суммы вклада; x и y - пременные для расчётов
    float I = 0.15; // I - процентная ставка;
    int m, n, i; //  m - кол-ва начислений (1, 2 или 4 раза); n - время вклада в годах; p - сумма вклада;
    cout << "Введите ваш первоначальный вклад: ";
    cin >> p;
    cout << "Введите срок депозита в годах: ";
    cin >> n;
    cout << "Введите количество начислений процентов по вкладу (1, 2 или 4 раза в год): ";
    cin >> m;
    cout << "Процентная ставка: " << I*100 << "% годовых" << endl;
    cout << stoimost (m, s, p, I, n, x, y) << " рублей";
    return 0;
}

double stoimost (int m, double s, double p, float I, int n, double x, double y)
{
    x = 1.15; // 1 + 15%/100
    y = 1 + (I/m); // 1 + ((15%/100)/m)
        if (m == 1)
            {
                cout << "Стоимость вашего вклада составит: ";
                s = p * pow(x, n);
            }
        else if (m > 1)
        {
            cout << "Стоимость вашего вклада составит: ";
            s = p * pow(y, n*m);
        }
return s;
}