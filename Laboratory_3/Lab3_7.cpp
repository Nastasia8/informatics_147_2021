#include <iostream>

using namespace std;
/// <summary>
/// Функция вывод пустой прямоугольник с заданными параметрами
/// </summary>
/// <param name="x">Число а</param>
/// <param name="y">число b</param>
/// <param name="symb">Символ отрисовки</param>
void figura(int x, int y, char symb)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (i == 0 || i == x - 1 || j == 0 || j == y - 1)
            {
                cout << symb;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n, k;
    char symb;
    cout << " Введите высоту: ";
    cin >> n;
    cout << " Введите ширину: ";
    cin >> k;
    cout << "Введите символ которым будет отрисован прямоугольник: ";
    cin >> symb;
    figura(n, k, symb);
    return 0;
}