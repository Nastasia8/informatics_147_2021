#include <iostream>
#include <ctime>

using namespace std;

int main() 
{
    int minStolbiki, maxStrochki;
    int minZnach = 10000;
    int Strochki;
    int Stolbiki;

    cout << "Введите количество рядов: " << endl;
    cin >> Strochki;
    cout << "Введите количество столбцов: " << endl;
    cin >> Stolbiki;
    cout << endl;

    int ** dvumerMassive = new int * [Strochki];
    for (int i = 0; i < Strochki; i++)
    {
        dvumerMassive [i] = new int [Stolbiki];
    }

    for (int i = 0; i < Strochki; i++)
    {
        for (int j = 0; j < Stolbiki; j++)
        {
           dvumerMassive[i][j] = ((rand() % 100));
        }

    }
    cout << "Ваш массив: " << endl << endl;
    for (int i = 0; i < Strochki; i++)
    {
        for (int j = 0; j < Stolbiki; j++)
        {
            cout << dvumerMassive[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    // Нахождение минимального числа в массиве
    
    for (int i = 0; i < Strochki; i++)
    {
        for (int j = 0; j < Stolbiki; j++)
        {
            if (dvumerMassive[i][j] < minZnach)
            {
                minZnach = dvumerMassive[i][j];
            }
            
        }
    }
    cout << "Минимальный элемент в массиве = " << minZnach << endl;
    
    // Задание а) максимальный элемент в каждой строке массива; одномерный массив

    int * Max = new int [Strochki];

    for (int i = 0; i < Strochki; i++)
    {
        maxStrochki = 0;
        for (int j = 0; j < Stolbiki; j++)
        {
            if (dvumerMassive[i][j] > maxStrochki)
            {
                maxStrochki = dvumerMassive[i][j];
            }
           
        }
        Max[i] = maxStrochki;
    }
    cout << "Максимальные элементы в каждой строке = { ";
    for (int i = 0; i < Strochki; i++)
    {
        cout << Max[i] << " ";
    }
    cout << "}" << endl;
    delete[] Max;
    
    // Задание б) минимальный элемент в каждом столбце массива; одномерный массив

    int * Min = new int[Stolbiki];
    for (int i = 0; i < Stolbiki; i++)
    {
        minStolbiki = 10000;
        for (int j = 0; j < Strochki; j++)
        {
            if (dvumerMassive[j][i] < minStolbiki)
            {
                minStolbiki = dvumerMassive[j][i];
            }
            
        }
        Min[i] = minStolbiki;
    }

    cout << "Минимальные элементы в каждой строке = { ";
    for (int i = 0; i < Stolbiki; i++)
    {
        cout << Min[i] << " ";
    }
    cout << "}" << endl;
    delete[] Min;

    for (int i = 0; i < Strochki; i++)
    {
        delete[] dvumerMassive[i];
    }  
}