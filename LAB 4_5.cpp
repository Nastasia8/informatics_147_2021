#include <iostream>
#include <cmath>

using namespace std;

void FindMax(int** arr, int line, int colum, int *_arMax)
{
    for (int i = 0; i < line; i++)
    {
        int min = arr[0][0];
        for (int j = 0; j < colum; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
        
        _arMax[i] = min;
    }
    
    cout << "Итоговые мин-е значения массива: ";
    for (int i = 0; i < line; i++)
    {
        cout << _arMax[i] << ' ';
    }
    cout << endl;
}    


int main()
{
    srand(time (NULL));
    
    int line, colum;
    cout << "Введите коичество строк: ";
    cin >> line;
    cout << "Введите количиство столбцов: ";
    cin >> colum;
    cout << endl;
    
    int *_arMax = new int [line];
    
    //объявление массива
    int **arr = new int*[line];
    
    for (int i = 0; i < line; i++)
    {
        arr[i] = new int[colum];
    }
    
    
    //////////////////////////////////
    
    //заполнение и вывод массива
    
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            arr[i][j] = -10 + rand()%120;
        }
    }

    for (int i = 0; i < line; i++)
    {
        for(int j = 0; j < colum; j++)
        {
            cout << arr[i][j] << "\t";
        }
        
        cout << endl;
    
    }
    
    FindMax(arr, line, colum, _arMax);
    delete []arr;

    return 0;
}
