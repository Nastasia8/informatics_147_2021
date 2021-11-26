#include <iostream>
#include <cstdlib>
#include <climits>

using namespace std;

int main()
{
    srand(time(NULL));
    
    int lin, colm;  //переменные lines и columns
    cout << "Введите кол-во строк и столбцов массива через пробел: ";
    cin >> lin >> colm; 
    
    int arr[lin][colm];     //осовной двумерный массив
    int arrMax[lin], arrMin[colm];  //одномерный массив для максимума и минимума
    
    for (int i = 0; i < lin; i++)       //заполнение основного 
    {                                   //массива рандомными числами
        for (int j =1; j < colm; j++)
            {                         
                arr[i][j] = rand() % 200 ;
            }
    }

    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < colm; j++)
            {
                cout << arr[i][j] << '\t';
                if (arr[i][j] >= max)
                    {
                        max = arr[i][j];
                    }
            }
        cout << endl;
        arrMax[i] = max;
        max = INT_MIN;
    }
    
    
    cout << "Вывод максимальных значений по строкам: ";
    for (int j = 0; j < colm; j++)
    {
        for (int i =0; i < lin; i++)
        {
            if (arr[i][j] <= min)           //значения не выводятся как надо
            {                               // также в первом столбце выставляются числа не из указанного диапазоана
                min = arr[i][j];
            }
        }
        arrMin[j] = min;
        min = INT_MAX;
    }
    
    
    cout << "Вывод минимальных значений по столбца: " << endl;
    for (int i = 0; i < lin; i++)
    {
        cout << arrMax[i] << ' ';
    }
    
    for (int i = 0; i < colm; i++)
    {
        cout << arrMin[i] << ' ';
    }
    
    cout << endl;
    
    return 0;
}
    
    
    
    
    
    
    
    
    