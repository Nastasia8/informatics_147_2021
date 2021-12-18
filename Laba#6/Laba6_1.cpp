#include <iostream>
#include <ctime>
#include <iomanip> 
using namespace std; 
int main() 
{   
    srand(time(NULL));
    int x = 3, y = 3;  

    cout << "Задание 1 под б)" << endl;
    cout << endl;
    cout << "Случайная матрица 3x3:" << endl; 

// динамически выделяем память
    int ** array = new int*[x];
    for (int i = 0; i < y; i++)
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
            array[i][j] = array[i][j+2]; 
            array[i][j+2] = nov;  
        }  
        j += 2;
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
}