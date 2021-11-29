// Гурьянов Илья, гр. 1/147.
// Задание №6, номер 4.
// Программа вычисляет сумму ряда.

#include <iostream>

using namespace std;

int main()
{  
    int n;
    cout << "Enter n (n >= 1): ";
    cin >> n;
    float sum = 0;
    float factorial = 1;
    for (int i = 1; i <= n; i ++) // вычисление суммы ряда
    {
        factorial *= i; // факториал
        sum += (-1) * i * (5-i) / factorial; // непосредственно сумма 
        cout << "(k = "<< i << "); " << "(factorial = " << factorial << "); " << "sum = " << sum << endl; // промежуточные результаты
    }
    cout << "The series sum = " << sum << endl;

    return 0;
}