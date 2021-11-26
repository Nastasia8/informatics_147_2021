// Гурьянов Илья, гр. 1/147.
// Задание №4, номер 3.
// В программе создаётся, заполняется и выводится динамический массив (заполняется случайными элементами), находится минимальный элемент массива.

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0)); // устанавливаем значение системных часов в качестве стартового числа (точки отсчёта) для функции rand
    
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *array = new int[n]; // создаём динамический массив из 'n' чисел
    for (int i = 0; i < n; i++)
    {
        array[i] = rand()%100; // функция rand сгенерирует числа от 0 до 100 (т.е. остаток от деления 'числа в секундах')  //  a + rand()%(b-a + 1) - выражение для получения чисел от a до b
    }
    
    cout << "Array:" << endl;
    for (int i = 0; i < n; i++) // вывод массива
    {
        cout << array[i] << "\t";
    }
    
    // Находим минимальный элемент массива
    int min = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    cout << "\nMinimum value of array: " << min << endl;

    delete [] array;

    return 0;
}