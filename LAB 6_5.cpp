#include <iostream>
#include <cmath>

using namespace std;

void Refund(int n) 
{
    int *arr = new int[n];
    
    for (int i = 2; i <= n; i++) 
    {
        arr[i] = i;
    }
    
    for (int i = 2; i * i <= n; i++)
    {
        if (arr[i]) 
        {
            for (int j = i * i; j <= n; j += i)
            {
                arr[j] = 0;
            }
        }
    }
    
    for (int i = 2; i < n; i++) 
    {
        if (arr[i]) 
        {
            cout << arr[i] << ' ';
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Введите диапазон чисел: ";
    cin >> n;
    cout << "Найденные простые числа: ";
    Refund(n);
    

    return 0;
}
