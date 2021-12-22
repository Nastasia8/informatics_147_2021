#include <iostream>
#include <cmath>

using namespace std;

void fun(int n) 
{
    int *x = new int[n + 1];//создание массива
    for (int i = 0; i <= n; i++) //условия и цикл
    {
        x[i] = i;
    }
    for (int i = 2; i * i <= n; i++)//условия и цикл
    {
        if (x[i]) 
        {
            for (int j = i * i; j <= n; j += i)
            {
                x[j] = 0;
            }
        }
    }
    for (int i = 2; i < n; i++) 
    {
        if (x[i]) 
        {
            cout << x[i] << ' ';//вывод итоговых цифр
        }
    }
    cout << endl;
}

int main()
{
    cout<<"введите конечное число массива"<<endl;
    int n;
    cin >> n;

    fun(n);

    return 0;
}