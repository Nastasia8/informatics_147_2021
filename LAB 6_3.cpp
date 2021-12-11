#include <iostream>
#include <cmath>

using namespace std;

//сводимость натурального числа n к еденице

void Svodim(int chis)
{
    cout << "Результаты сводимости: ";
    while (chis > 1)
    {
        if (chis %2 ==0)//проерка на четность 
        {
            chis /= 2;
        }
        else 
        {
            chis *= 3;
            chis += 1;  //последовательное действия при нечетности
            chis /= 2;
        }
        
        cout << chis << ' ';
    }
}


int main() 
{
    int chis;// переменная число
    cout << "Ввести натуральное (больше 0) число: ";
    cin >> chis;
    if (chis <= 0)
    {
        cout << "!!Нужно было ввести натуральное число!!";
        return 0;
    }
    
    Svodim(chis);
    
   // cout << "Результаты сводимости" << Svodim(chis);
    
    return 0;
}