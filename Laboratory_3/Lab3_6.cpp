#include <iostream>
 
using namespace std;

/// <summary>
/// Произведение цифр заданого числа
/// </summary>
/// <param name="n">Число n</param>
/// <returns>Произведение</returns>
int multNum(int n) {
    int s;
    int mult = 1;
    while (n != 0)
    {
        s = n % 10;
        n = n / 10;
        if (s != 0)
        {
            mult *= s;
        }
    }
    return mult;
}


int main() {
    int n;
    cout << "Введите шестизначное число: ";
    cin >> n;
    if (n < 999999 && n > 99999){
        cout << "Произведение цифр числа N = " << multNum(n) << endl;
    }
    else
    {
        cout << "Вы ввели не шестизначное число!" << endl;
    }
    return 0;
}