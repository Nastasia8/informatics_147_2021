#include <iostream>
#include <cmath>

using namespace std;

int sum(int);

int main()
{
    int n;
    cout << "Введите кол-во чисел для расчета: ";
    cin >> n;
    int arr[n];
    int sum=0;
    
    cout << "Введите целые числа через пробел: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];                  //ввод значений массива
    }
    
     for (int i=0; i<n; i++)
        {
        if (arr[i] % 2 ==0)             //определение четных переменнх
           {                            // и их сложение
              sum = sum + arr[i];       // не получается вывести массив в отдельную функцию      
            }
        }
    
    
    cout << "Сумма четных чисел = " << sum;
}


