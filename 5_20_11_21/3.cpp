#include <iostream>
#include <cmath>

using namespace std;

void nod(int x, int y)
{
    for (int i = x; i > 0; i--)
    {
        if ((x % i == 0) and (y % i == 0))
        {
            cout << "НОД (" << x <<"; " << y << ") = " << i;
            break;
        }
    }
}

int main()
{
    int x, y;
    cout << "Введите 2 целых числа больше нуля через пробел: ";
    cin >> x >> y;
    
    if ((x > 0) and (y > 0))
    {
        nod(x, y);
    }
    else
    {
        cout << "Необходимо ввести только положительные числа" << endl;
    }
    
    return 0;
}