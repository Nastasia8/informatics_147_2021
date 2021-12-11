// Задачи от 21.10.2021
#include <iostream>

using namespace std;

float Sum(float, float);
float Proiz(float, float);
float Del(float, float);
float Subtr(float, float);

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
    cout << "Вы выбрали несуществующую операцию\n";
        break;
    }
    return 0;
}

// Сумма
float Sum(float x, float y)
{
    return x + y;
}

// Произведение
float Proiz(float x, float y)
{
    return x * y;
}

// Деление
float Del(float x, float y)
{ 
    if (y == 0){
    cout << "Делить на ноль нельзя\n";
    return false;
}else{
    return x / y;
}
}

// Вычитание
float Subtr(float x, float y)
{
    return x - y;
}