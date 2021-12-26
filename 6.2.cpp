#include <iostream>
using namespace std;

int main()
{
    int rows, n;
    char sim; // целочислинный тип данных для представления символов 
    cout << "Введите высоту треугольника" << endl;
    cin >> rows;
    cout << "Введите символ для рисования" << endl;
    cin >> sim;
    cout << "Выберите сторону прямогу угла треугольника. Введите: 1 - если справа, 2 - если слева" << endl;
    cin >> n;
    if (n == 1) // если n = 1
    {
        for (int i = 0; i <= rows; i++) // для  int i = 0; i <= rows занчение увелич. на 1
        {
            for (int j = rows - i; j > 0; j--) // для j = rows - i; j > 0 значение уменьшается на 1
            {
              cout << " ";
            }

            for (int j = 1; j <= i; ++j)
            {
                cout << sim;
            } 
            cout << endl;
        }
    }
    else if (n == 2)
    {
        for (int i = 0; i <= rows; i++)
        {
            for (int j = 1; j <= i; ++j)
            {
                cout << sim; 
            } 
            cout << endl;
        }
    }
    else if ((n != 1) && (n != 2))// если n имеет порязрядное ИЛИ с присвоением значения 1 И 2
    cout << "Неверная команда. Проверьте значения"; // вывод на консоль
}