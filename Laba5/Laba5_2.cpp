#include <iostream>
#include <cmath>

using namespace std;

void perevod (int num)
{
    int dvoich = 0;
    int vosm = 0;
    int shesnat = 0;
    int num1 = num;
    int num2 = num;
    for (int koif = 0; num > 0; koif++)
    {
        dvoich += (num % 2) * pow(10.0, koif);
        num /= 2;
    }

    for (int koif = 0; num1 > 0; koif++)
    {
        vosm += (num1 % 8) * pow(10.0, koif);
        num1 /= 8;
    }

    for (int koif = 0; num2 > 0; koif++)
    {
        shesnat += (num2 % 16) * pow(10.0, koif);
        num2 /= 16;
    }
    cout << "В 2-ой системе счисления: " << dvoich << endl;
    cout << "В 8-ой системе счисления: " << vosm << endl;
    cout << "В 16-ой системе счисления: " << shesnat << endl;
}

int main()
{   
    int num;
    cout << "Введите число от 0 до 325 включительно: ";
    cin >> num;
    while (num < 0 || num > 325)
    {
        cout << "Вы вышли из диапазона. Повторите попытку: ";
        cin >> num;
    } 
    perevod(num);
    return 0;
}
