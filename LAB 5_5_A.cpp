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
                cout << "Ввести только положительные числа";
                return 0;
            }
    }
 
 
    //нахождение НОД чисел ранне введенного массива
    //не удалось поместить в отдельную функцию
    while ( min > 1 )
    {
        bool flag = true;
        for ( int i = 0; i < a; i ++ )
            if ( arr[i] % min != 0 )
            {
                flag  = false;
                break;
            }
        if ( !flag ) --min;
        else
            break;
    }
 
    cout << "НОД введенных чисел = " << min;
    
    delete []arr;

    return 0;
}