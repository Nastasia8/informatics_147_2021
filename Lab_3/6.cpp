#include <iostream>
#include <cmath>
using namespace std;


void calculateProduct (int a)
{
    int product = 1;
    while (a>0)
    {
        if (a%10 > 0)
        {
            product=product*(a%10);
            a=a/10;
        }
        else
        {
            a=a/10;
        }
    }
    cout << "Произведение равно " << product;
}

int main()
{
    int a;
    cout << "Введите шестизначное число" << endl;
    cin >> a;
    if (a/100000 >=1)
    {
        calculateProduct(a);
    }
    else
    {
        cout << "Вы ввели не шестизначное число";
    }
    return 0;
}
