#include <iostream>
#include <cmath>

using namespace std;

void pr(int a, int pro, int n, int b)
{
    b = a;

    for(n = 0; b > 0; n++)
    {
        b = b / 10;         //цикл подсчета кол-ва знаков
    }

    if(n == 6)
        {
            while (a != 0)
            {
                pro = pro * (a%10); //цикл произведения знаков в числе
                a = a / 10;         //при условии, что есть нужное кол-во знаков
            }
            
        cout << "Произведение цифр сила = " << pro <<endl;
        
        } else
            {
                cout << "Сказано было ввести 6-значное число!" <<endl;
            }
}


int main()
{
    int a, n, b;
    int pro = 1;

    cout << "Введите 6-значное чило: ";
    cin >> a;

    pr(a, pro, n, b);
    
    return 0;
}