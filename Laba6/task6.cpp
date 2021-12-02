/*
Задание 6
Треугольник Паскаля
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
*/
#include <iostream>

using namespace std;

int fact(int n) // факториал
{
    if (n < 0) return 0;
    if (n == 0) return 1;
    else return n*fact(n-1);
}
void PascalTr(int n) // функция для создания треугольника Паскаля
{
    int *arr = new int[100];
    for (int i = 0; i <= n; i++)
    {
        arr[i] = fact(n) / (fact(i) * fact(n - i)); // биномиальный коэффициент через факториалы
    }
    for (int i = 0; i <= n; i++)
        cout << arr[i] << ' ';
    cout << '\n';
    delete[] arr;
}
int main()
{
    int num;
    cout << "Введите кол-во строк: ";
    cin >> num;
    cout << "Треугольник Паскаля на " << num << " стр.\n";
    for (int n = 0; n < num; n++)
    {
        PascalTr(n);
    }
    return 0;
}