#include <list>
#include <iostream>

using namespace std;

int main()
{
    int n;
    list <int> res;
    cout << "Введите число > 0: ";
    cin >> n;
    cout << endl;
    while (n <= 0)
    {
        cout << "Ошибка. Вы ввели не шестизначное число. Попробуйте ещё раз: ";
        cin >> n;
    }
    if (n > 0)
    {
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                n=n/2;
                res.push_back(n);
            }
            else
            {
                n=(n*3+1)/2;
                res.push_back(n);
            }
        }
    }
    else
    {
        cout << endl;
        cout << "Ошибка: введите корректное число" << endl;
        cin >> n;
    }
    if (n==1)
    {
        cout << "Промежуточные результаты: ";
        for (auto &item: res)
        cout << item << "; ";
        cout << endl;
        cout << endl << "Число сведено к 1. Утверждение доказано.";
    }
    return 0;
}