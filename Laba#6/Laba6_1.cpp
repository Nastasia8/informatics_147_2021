#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main() 
{   
    int x, y, r;
    srand(time(NULL));

    cout << "Введите количество строк:" << endl;
    cin >> x;
    cout << "Введите количество столбцов:" << endl;
    cin >> y;
    cout << endl;
    cout << "Задание 1 под б)" << endl;
    cout << endl;
    cout << "Случайная матрица " << x << "х" << y << endl; 

// динамически выделяем память
    int ** array = new int*[x];
    for (int i = 0; i < x; i++)
    {
        array[i] = new int [y];
    }

// заполняем случайными числами:
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
           array[i][j] = rand() % 100;
        }
    }

// выводим исходную матрицу:
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++) 
        { 
            if( j % y == 0) 
            cout << endl; 
            cout << setw(3) << array[i][j]; 
        } 
        cout << endl;  

//смена мест:
    for (int j = 0; j < y; j++)  
    {
        for (int i = 0; i < x; i++) 
        { 
            int nov = array[i][j]; 
            array[i][j] = array[i][j+2]; // не знаю, как реализовать, но поняла принцип работы: добавляем к j на 1 меньше, чем сам j
            array[i][j+2] = nov;  // добавляем на 1 меньше, чем j
        }  
        j += 2;// на 1 меньше, чем j
    } 
    cout << endl;

// выводим измененную матрицу
    cout << "новая матрица из старой:" << endl;

    for (int i = 0; i < x; i++) 
    for (int j = 0; j < y; j++) 
    { 
        if( j % y == 0) 
            cout << endl; 
            cout << setw(3) << array[i][j]; 
    }

// очищаем память
    for (int i = 0; i < x; i++)
	{
		delete array[i];
	}
	delete[] array;
    return 0;
}
