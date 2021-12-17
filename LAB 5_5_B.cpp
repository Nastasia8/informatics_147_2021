#include <iostream>
#include <limits.h>

using namespace std;
 
int main()
{
    int a;
    cout << "Введите кол-во нужных чисел: ";
    cin  >> a;
    int *arr = new int [a];
    int min = INT_MIN;
 
    //ввод чисел и проверка на наличие нулей
    cout << "Введите положителные (больше 0) через пробел: ";
    for ( int i = 0; i < a; i ++ )
    {
            cin >> arr[i];
            if ( min < arr[i] ) 
            {
                min = arr[i];
            }
            
            if ( arr[i] <= 0)
            {
                cout << "!Ввести только положительные числа!";
                return 0;
            }
    }
    
    
// нахождение НОД через разложение на простые множители    
    int k = 2;
    for (int i = 0; i < a; i++ )
    {
        while (k <= (arr[i]/2))
        {
            if (arr[i]%k == 0)
            {
                int j = 0;
                arr[i] = arr[i]/k;
                cout << arr[i];
            
                if (arr[i] != 1)
                {
                    cout << '*';
                }
            }
            else k++;
        }
        
    }
    
    delete []arr;

    return 0;
}