// Задачи от 21.10.2021
#include <iostream>

using namespace std;

double Sum(double, double);
double Proiz(double, double);
double Del(double, double);
double Subtr(double, double);

int main()
{
    setlocale(0, "");
    cout << "Введите x, y: ";
    int x, y;
    cin >> x >> y;

    cout << "Найти \n1. сумму\n"
         << "2. произведение\n"
         << "3. деление\n"
         << "4. вычитание\n"
         << "Введите номер операции: ";
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << x << "+" << y << "=" << Sum(x, y) << endl;
        break;
    case 2:
        cout << x << "*" << y << "=" << Proiz(x, y) << endl;
        break;
    case 3:
        cout << x << "/" << y << "=" << Del(x, y) << endl;
        break;
    case 4:
        cout << x << "-" << y << "=" << Subtr(x, y) << endl;
        break;
    default:
        break;
    }
    return 0;
}

// Сумма
double Sum(double x, double y)
{
    return x + y;
}

// Произведение
double Proiz(double x, double y)
{
    return x * y;
}

// Деление
double Del(double x, double y)
{
    return x / y;
}

// Вычитание
double Subtr(double x, double y)
{
    return x - y;
}