#include <iostream>
#include <cmath>

using namespace std;

float calcul (float, float, int, float);

int main()
{
float x, y, res;
int oper;
cout << "Введите x. x = ";
cin >> x;
cout << "Введите y. y = ";
cin >> y;
cout << "Введите номер операции: " <<'\n';
cout << "1 - вычитание" <<'\n';
cout << "2 - сложение" <<'\n';
cout << "3 - произведение" <<'\n';
cout << "4 - деление" <<'\n';
cout << "5 - возведение x в степень y" <<'\n';
cin >> oper;
cout << "Результат: " << calcul (x, y, oper, res) << endl;
return 0;
}

float calcul (float x, float y, int oper, float res)
{
    if (oper == 1)
        {cout << "x - y = ";
        res = x - y;}
    else if (oper == 2)
        {cout << "x + y = ";
        res = x + y;}
    else if (oper == 3)
        {cout << "x * y = ";
        res = x * y;}
    else if (oper == 4)
        {cout << "x / y = ";
        res = x / y;}
    else if (oper == 5)
        {cout << "x ^ y = ";
        res = pow(x, y);}
    else if (oper > 5)
        {cout << "ошибка - операции не существует. вывод: ";
        res = 0;}
return res;
}