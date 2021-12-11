#include <iostream>
#include <cmath>

using namespace std;
//нахождение факториала для треугольника
int factor(int n)
{
    int x = 1;
    for (int i = 1; i <= n;i++)
    {
        x *= i;
    }

    return x;
}

//создание треугольника через факториал
int main()
{
    int k, j, c;                               //k - кол-во строк (высота треугольника)
    cout << "Введите высоту треугольника: ";     //j - конкретная строка
    cin >> k;                                  //с - конкретное число
    cout << endl << "Треугольник Паскаля:" << endl;
    cout << "1" << "\n";
    for (j = 1; j <= k; j++)
    {
        for (c = 0; c <= j; c++)
        {
            cout << (factor(j) / (factor(c) * factor(j - c))) << " ";
        }
        
        cout << "\n";
    }
    
    return 0;
}