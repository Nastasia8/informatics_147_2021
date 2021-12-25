#include <iostream>
#include <ctime>

using namespace std;

int main() 
{
    srand(time(NULL)); // новые значения каждый запуск

    int min = 32800; // ибо максимальное генерируемое число функцией rand 32767
    int raz_mas;

    cout << "Введите размер массива = ";
    cin >> raz_mas;
    cout << endl;

    // Создание  массива, инициализация, вывод массива

    int *massiv = new int [raz_mas];
    
    for (int i = 0; i < raz_mas; i++)
    {
            massiv[i] = rand();
    }

    for (int i = 0; i < raz_mas; i++)
    {
            cout << massiv[i] << "\t";
        cout << endl;
    }
    cout << endl;

    // Ищем минимальное:
    
    for (int i = 0; i < raz_mas; i++)
    {
            if (massiv[i] < min)
            {
                min = massiv[i];
            }
    }
    cout << "Минимальный элемент массива = " << min << endl;
    delete [] massiv; // очистка памяти
    return 0; 
}