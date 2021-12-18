#include <iostream>
#include <cmath>

using namespace std;


void nok(int x, int y)
{
    for (int i = x; i > 0; i--)
    {
        if ((x % i == 0) and (y % i == 0))
        {
            cout << "НОК (" << x << "; " << y << ") = " << (x * y)/i;
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
        nok(x, y);
    }
    else
    {
        cout << "Необходимо ввести только положительные числа" << endl;
    }
    
    return 0;
}