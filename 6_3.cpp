#include <iostream>
#include <cmath>

using namespace std;

void Svodim(int n)
{
    cout << "Результаты сводимости: ";
    while (n > 1)
    {
        if (n%2 == 0) //если число чётное 
        {
            n /= 2; // /= - деление с присваиванием
        }
        else //если число нечётное
        {
            n *= 3;
            n += 1;  
            n /= 2;
        }
        
        cout << n << " ";
    }
}

int main() 
{
    int n;
    cout << "Введите натуральное число: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Нужно ввести натуральное число" << endl;
    }
    Svodim(n);
    return 0;
}