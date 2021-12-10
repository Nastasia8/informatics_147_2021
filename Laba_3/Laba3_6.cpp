#include <iostream>
#include <cmath>

using namespace std;

float proizvedenie (int);

int main()
{
    int chislo;
    cout << "Введите шестизначнное число"<< endl;
    cin >> chislo;
    while (chislo < 100000 || chislo > 999999)
    {
        cout << "Ошибка. Вы ввели не шестизначное число. Попробуйте ещё раз: "<< endl;
        cin >> chislo;
    }
    proizvedenie (chislo);
}

float proizvedenie (int chislo)
{
    int proiz = 1;
    while (chislo > 0)
    {
        proiz *= chislo % 10;
        chislo /= 10;
    }
    cout << "Проиведение цифр числа = " << proiz;
    return 0;
}