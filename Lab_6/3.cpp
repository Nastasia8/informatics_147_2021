#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int n;
    cout << "Введите число " << endl;
    cin >> n;
    if (n>0)
    {
        while (n!=1)
        {
            if (n%2==0)
            {
                n=n/2;
            }
            else
            {
                n=(n*3+1)/2;
            }
        }
    }
    else
    {
        cout << "Введите корректное число " << endl;
    }
    if (n==1)
    {
        cout << "n равно " << n << endl;
        cout << "Число сведено к 1. Утверждение доказано." << endl;
    }
    return 0;
}
///Не знаю как создать условие, котрое проверяло бы натуральность чисел
